class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
       vector<vector<int>> valmorendi = items;
        int n = items.size();
        vector<int> f(n, 0);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (i != j && items[j][0] % items[i][0] == 0)
                    f[i]++;
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(),
             [&](int a, int b){ return items[a][1] < items[b][1]; });
        vector<int> dp(budget + 1, INT_MIN);
        dp[0] = 0;
        int ans = 0;
        for (int k = n - 1; k >= 0; k--) {
            int c  = idx[k];
            int pc = items[c][1];
            int vc = 1 + f[c];

            if (pc <= budget) {
                int rem = budget - pc;
                for (int w = 0; w <= rem; w++) {
                    if (dp[w] < 0) continue;
                    int cand = vc + dp[w] + (rem - w) / pc;
                    if (cand > ans) ans = cand;
                }
            }
            for (int w = budget; w >= pc; w--)
                if (dp[w - pc] >= 0)
                    dp[w] = max(dp[w], dp[w - pc] + vc);
        }
        return ans; 
    }
};
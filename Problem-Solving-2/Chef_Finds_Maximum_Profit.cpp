class Solution {
public:
    long long calculateMaxProfit(vector<int>& jobStartTimes,
                                 vector<int>& jobEndTimes,
                                 vector<int>& jobProfits)
    {
        // write your code here 
        int n = jobStartTimes.size();
        vector<array<long long, 3>> jobs(n);
        for(int i = 0; i < n; i++) {
            jobs[i] = {jobStartTimes[i], jobEndTimes[i], jobProfits[i]};
        }
        sort(jobs.begin(), jobs.end());
        vector<long long> dp(n, 0);
        for(int i = n-1; i >= 0; i--) {
            long long skip = (i+1 < n) ? dp[i+1]: 0;
            int l = i+1, r = n-1, next = n;
            while(l <= r) {
                int mid = (l+r)/2;
                if(jobs[mid][0] >= jobs[i][1]) {
                    next = mid;
                    r = mid -1;
                } else {
                    l = mid + 1;
                }
            }
            long long take = jobs[i][2] + (next < n ? dp[next] : 0);
            dp[i] = max(skip, take);
        }
        return dp[0];
    }
};

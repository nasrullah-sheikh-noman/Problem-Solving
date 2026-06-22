bool existsSubsequence(vector<int>& nums,int n, int k) {
    // write your code here
    for(int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                sum+=nums[i];
                if(sum>k) break;
            }
        }
        if(sum == k) return true;
    }
    return false;
}
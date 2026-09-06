class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
      int n = nums.size();
      long long sum = 0;
      for(int i = 0; i < n ;i++) {
        sum+=nums[i];
      }
      int cnt = 0;
      long long sum2 = 0;
      for(int j = 0; j < n/2; j++) {
        sum2+=nums[j];
      }
      for(int i = 0; i < n; i++) {
        long long sum3 = sum-sum2;
        if(sum2>sum3) cnt++;
        sum2-=nums[i];
        sum2+=nums[(i+(n/2))%n];
      }
      return cnt;
    }
};
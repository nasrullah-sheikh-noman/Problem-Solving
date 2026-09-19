class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
      const long long mod = 1e9+7;
      auto num = nums;
      long long re = k;
      long long cnt = 0;
      long long ans = 0;
      for(auto x: nums) {
        if(x > re) {
          long long need = x - re;
          long long ops = (need + k - 1) / k;
          __int128 cost = (__int128)ops * (2 * (__int128)cnt + ops + 1) /2 ;
          ans = (ans + (__int128)(cost % mod)) % mod;
          cnt+=ops;
          re += ops * 1LL * k;
          
        }
        re-=x;
      }
      return ans % mod;
    }
};
// Brute force 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      for(auto val: nums) {
        int cnt = 0;
        for(auto el: nums) {
          if(val==el) cnt++;
        }
        if(cnt>n/2) return val;
      } 
      return -1;
    }
};

// Optimize Brute Force 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      if(n==1) return nums[0];
      sort(nums.begin(), nums.end());
      int cnt = 1;
      for(int i = 1; i < n; i++) {
        if(nums[i]==nums[i-1]) cnt++;
        else cnt = 1;
        if(cnt>n/2) return nums[i];
      } 
      return -1;
    }
};

// Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      int ans = 0, freq = 0;
      for(int i = 0; i < n; i++) {
        if(freq==0) ans = nums[i];
        if(nums[i]==ans) freq++;
        else freq--;
      }
      return ans;
    }
};
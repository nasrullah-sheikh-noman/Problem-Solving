class Solution {
public:
    void merge(vector<int>& nums, int l, int mid, int r) {
      vector<int> tmp;
      int i = l, j = mid+1;
      while(i<=mid && j<=r) {
        if(nums[i]<=nums[j]) {
          tmp.push_back(nums[i]);
          i++;
        } else {
          tmp.push_back(nums[j]);
          j++;
        }
      }
      while(i<=mid) {
        tmp.push_back(nums[i]);
        i++;
      }
      while(j<=r) {
        tmp.push_back(nums[j]);
        j++;
      }
      for(int idx = 0; idx < tmp.size(); idx++) {
        nums[idx+l] = tmp[idx];
      }
    }
    void mergesort(vector<int> &nums, int l, int r) {
      if(l<r) {
        int mid = l+(r-l)/2;
        mergesort(nums, l, mid);
        mergesort(nums, mid+1, r);
        merge(nums, l, mid, r);
      }
    }
    vector<int> sortArray(vector<int>& nums) {
      mergesort(nums, 0, nums.size()-1);
      return nums;
    }
};
//  Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
          if(nums[i]==0)
            cnt++;
          else if(nums[i]==1)
            cnt1++;
          else
            cnt2++;
        }
        int idx = 0;
        for (int i = 0; i < cnt; i++) {
          nums[idx++] = 0;
        }
        for (int i = 0; i < cnt1; i++) {
          nums[idx++] = 1;
        }
        for (int i = 0; i < cnt2; i++) {
          nums[idx++] = 2;
        }
    }
};

//  Optimize
//  Dutch National Flag Algorithm | DNF Sorting Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        while(mid<=high) {
          if(nums[mid]==0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
          } else if(nums[mid]==1) {
            mid++;
          } else {
            swap(nums[high], nums[mid]);
            high--;
          }
        }
    }
};
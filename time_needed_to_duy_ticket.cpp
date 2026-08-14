class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
      int n = v.size();
      int ans = 0;
      while(true) {
        for(int i = 0; i < n; i++) {
          if(v[i] ==0) continue;
          v[i]--;
          ans++;
          if(v[k]==0) return ans;
        }
      }
    }
};
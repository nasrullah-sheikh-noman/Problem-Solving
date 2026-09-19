class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
      int n = tasks.size();
      vector<long long> pref(n+1, 0);
      for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + tasks[i];
      }
      vector<int> ans;
      long long done = 0;
      for(long long x: shifts) {
        done+=x;
        if(done>=pref[n]) {
          ans.push_back(0);
          done = 0;
          continue;
        }
        int completed = upper_bound(pref.begin(), pref.end(), done) - pref.begin() - 1;
        ans.push_back(n-completed);
      }
      return ans;
    }
};©leetcode
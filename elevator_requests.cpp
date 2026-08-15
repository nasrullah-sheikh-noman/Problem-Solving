class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
      int cur = 0, t = 0;
      for(int x: requests) {
        t+=abs(cur-x);
        cur = x;
      }
      return t;
    }
};©leetcode
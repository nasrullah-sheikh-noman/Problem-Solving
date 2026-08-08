class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      priority_queue<int> pq;
      for(auto x: stones) {
        pq.push(x);
      }
      while(!pq.empty()) {
        int f = pq.top();
        pq.pop();
        if(pq.empty()) return f;
        int s = pq.top();
        pq.pop();
        if(f!=s) pq.push(f-s);
      }
      return 0;
    }
};
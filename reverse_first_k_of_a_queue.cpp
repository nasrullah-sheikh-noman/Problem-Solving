class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n = q.size();
        if(k<n) return q;
        stack<int> st;
        while(k--) {
            st.push(q.front());
            q.pop();
        }
        queue<int> ans;
        while(st) {
            ans.push(st.top());
            st.pop();
        }
        while(q) {
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};
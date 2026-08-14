class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n = q.size();
        if(k>n) return q;
        stack<int> st;
        queue<int> tmp = q;
        int h = k;
        while(h--) {
            st.push(q.front());
            q.pop();
        }
        queue<int> ans;
        while(!st.empty()) {
            ans.push(st.top());
            st.pop();
        }
        int l = 1;
        while(!tmp.empty()) {
            if(l>k) {
              ans.push(tmp.front());
              tmp.pop();
            } else tmp.pop();
            l++;
        }
        return ans;
    }
};
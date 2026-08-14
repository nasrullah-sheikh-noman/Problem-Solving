class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        vector<int> ans(arr.size(), 0);
        stack<int> st;
        for (int i = 0; i < arr.size(); i++) {
          while(st.size() > 0 && st.top() >= arr[i]) {
            st.pop();
          }
          if(st.empty())
            ans[i] = -1;
          else
            ans[i] = st.top();
          st.push(arr[i]);
        }
        return ans;
    }
};
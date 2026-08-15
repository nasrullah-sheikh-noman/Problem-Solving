class Solution {
public:
    int largestRectangleArea(vector<int>& A) {
    stack<int> st;
    int N = A.size();
    long long mxArea = 0;
    for(int i = 0; i < N; i++) {
        while(!st.empty() && A[st.top()] > A[i]) {
            int h = A[st.top()];
            st.pop();
            int left = st.empty() ? -1 : st.top();
            long long width = i - left - 1;
            mxArea = max(mxArea, (long long)h * width);
        }
        st.push(i);
    }
    while(!st.empty()) {
        int h = A[st.top()];
        st.pop();
        int left = st.empty() ? -1 : st.top();
        long long width = N - left - 1;
        mxArea = max(mxArea, (long long)h * width);
    }
    return mxArea;
    }
};
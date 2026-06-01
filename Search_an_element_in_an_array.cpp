string solve(int N, int X, const vector<int>& A) {
    string ans = "NO";
    for(int i = 0; i < N; i++) {
        if(A[i] == X) ans = "YES";
    }
    return ans;
}

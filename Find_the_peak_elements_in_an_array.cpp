vector<int> findPeaks(vector<int>& A, int n) {
    vector<int> newarr;
    for(int i = 0; i < n; i++) {
        if (i == 0 ) {
          if(A[i] > A[i+1]) {
            newarr.push_back(A[i]);
          } 
        } else if (i == n-1) {
            if(A[i]> A[i-1] ) {
            newarr.push_back(A[i]);
          } 
        } else {
          if(A[i]> A[i-1] && A[i] > A[i+1]) {
            newarr.push_back(A[i]);
          } 
        }
    }
    int len = newarr.size();
    if(len == 0) return {-1};
    return newarr;
    
}
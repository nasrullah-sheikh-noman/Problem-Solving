int hasPairWithDifference(vector<int>& A, int N, int B) {
    // write your code here 

    for(int i = 0; i < N-1; i++) {
        for(int j = i+1; j < N; j++) {
            if(abs(A[i]-A[j]) == B) {
               return 1;
            } 
        }
        
    }
    return 0;
}
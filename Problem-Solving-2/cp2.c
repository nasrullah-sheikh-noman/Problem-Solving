int computeTotal(int N, int A[]) {
    int sum = 0; 
    for (int i = 0; i < N; i++) {
        sum+=A[i];
    }
    return sum;
    
}
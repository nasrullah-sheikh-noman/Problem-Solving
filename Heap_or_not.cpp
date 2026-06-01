string isMinHeap(int A[], int N) {
    // write your code here 
    for (int i = 0; i < N; i++) {
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < N && A[i] > A[l]) return "No";
    if (r < N && A[i] > A[r]) return "No";
  }
  return "Yes";
}
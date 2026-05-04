string checkPassword(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    int s = sum - n;
    if (s == 0) {
        return "SECURE";
    } else {
        return "NOT SECURE";
    }
    
}
#include<bits/stdc++.h>

int getFourthLargest(int arr[], int n)
{
    if(n<4) return -2147483648;
    sort(arr, arr+n);
    return arr[n-4];
    
}
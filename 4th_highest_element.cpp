#include<bits/stdc++.h>

int getFourthLargest(int arr[], int n)
{
    if(n<4) return -2147483648;
    sort(arr, arr+n);
    return arr[n-4];
    
}

//  2nd way  \ O(n)

#include<bits/stdc++.h>

int getFourthLargest(int arr[], int n)
{
    if(n<4) return -2147483648;
    int f = INT_MIN;
    int s = INT_MIN;
    int t = INT_MIN;
    int fo = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i]>=f) {
            fo = t;
            t = s;
            s = f;
            f = arr[i];
        } else if(arr[i]>=s) {
            fo = t;
            t = s;
            s = arr[i];
        } else if(arr[i]>=t) {
            fo = t;
            t = s;
        } else if(arr[i]>=fo) {
            fo = arr[i];
        }
    }
    return fo;
}
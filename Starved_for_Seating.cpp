#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum+=arr[i];
        }
        long long base = sum/2;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                long long ex = arr[i]/2+arr[j]/2;
                long long t = ex + base;
                if(t> k) ans++;
            }
        }
        cout << ans << "\n";
    }
}

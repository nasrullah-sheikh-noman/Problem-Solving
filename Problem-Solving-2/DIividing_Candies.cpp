#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    int arr[n];
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    if(x == 1) {
	        int lar = arr[0];
	        for(int i = 1; i < n; i++) {
	            if(arr[i] >= lar) {
	                lar = arr[i];
	            }
	        }
	        cout << lar << endl;
	    } else {
	        int ans = 0;
	        int lar = 0;
	        for (int i = 0; i < n; i++) {
	            if(arr[i]%x == 0) {
	                ans = arr[i];
	                if(ans >= lar) {
	                    lar = ans;
	                }
	            }
	        }
	        cout << lar << endl;
	    }
	    
	}

}

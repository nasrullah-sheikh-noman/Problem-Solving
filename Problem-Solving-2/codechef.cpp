#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i] ;
	    }
	    
	    sort(arr.begin(), arr.end());
	    
	    int cnt = 0;
	    
	    for (int i = 0; i < n-3; i++) {
	        if (i > 0 && arr[i] == arr[i-1]) continue;
	        for (int j = i+1; j < n-2; j++) {
	            if (j > i+1 && arr[j] == arr[j-1]) continue;
	            for (int k = j+1; k < n-1; k++) {
	                if(k > j+1 && arr[k] == arr[k-1]) continue;
	                for (int l = k+1; l < n; l++) {
	                    if (l > k+1 && arr[l] == arr[l-1]) continue;
	                    if (arr[i] + arr[j] + arr[k] + arr[l] == x) {
	                        cnt++;
	                    }
	                }
	            }
	        }
	    }
	    cout << cnt << endl;
	    for (int i = 0; i < n-3; i++) {
	        if (i > 0 && arr[i] == arr[i-1]) continue;
	        for (int j = i+1; j < n-2; j++) {
	            if (j > i+1 && arr[j] == arr[j-1]) continue;
	            for (int k = j+1; k < n-1; k++) {
	                if (k > j+1 && arr[k] == arr[k-1]) continue;
	                for (int l = k+1; l < n; l++) {
	                    if(l > k+1 && arr[l] == arr[l-1]) continue;
	                    if (arr[i] + arr[j] + arr[k] + arr[l] == x) {
	                        cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << endl;
	                    }
	                }
	            }
	        }
	    }
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i = 0; i < n; i++) cin >> v[i];
	    int r = v[0] + v[n-1];
	    bool ok = true;
	    for(int i = 0; i < n/2; i++) {
	        if(v[i]+v[n-1-i] != r) {
	            ok = false;
	            break;
	        }
	        if(v[i] >= v[n-1-i]) {
	            ok = false;
	            break;
	        }
	        
	    }
	    if(v[n/2-1] >= v[n/2]) ok = false;
	    cout << (ok ? "Yes" : "No") << "\n";
	    
	}

}

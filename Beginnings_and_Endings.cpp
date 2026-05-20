#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i = 0; i < n; i++) {
	        cin >> v[i];
	    }
	    int ans = INT_MAX;
	    for(int i = 0; i < n; i++) {
	        for(int j = i+1; j < n; j++) {
	            if(v[i] == v[j]) {
	                int cst = i + (n-1-j);
	                ans = min(ans, cst);
	            }
	        }
	    }
	    if(ans == INT_MAX) cout << "-1" << "\n";
	    else cout << ans << "\n";
	}

}

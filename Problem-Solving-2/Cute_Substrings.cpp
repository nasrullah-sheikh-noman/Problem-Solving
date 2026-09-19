#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int ans=0, cur=0;
	    for (auto c: s) {
	        int pos = cur+1;
	        bool ok = false;
	        if(pos % 2 == 1) {
	            if(c == 'u' || c == 'o') ok = true;
	        } else {
	            if (c == 'w') ok = true;
	        }
	        if (ok) {
	            cur++;
	        } else {
	            if (c == 'u' || c == 'o') {
	                cur = 1;
	            } else {
	                cur = 0;
	            }
	        }
	        if(cur % 2 == 1) {
	           ans = max(ans, cur);
	        } 
	    }
	    cout << ans << endl;
	}

}

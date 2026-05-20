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
	    int cnt = 0, maxcnt = 0;
	    for(int i = 0; i < n; i++) {
	        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
	            cnt++;
	            maxcnt = max(maxcnt, cnt);
	        } else cnt = 0;
	    }
	    if(maxcnt >= 4) {
	         cout << "Yes" << endl;
	    }
	    else cout << "No" << endl;
	}

}

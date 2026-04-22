#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    char  s[11];
	    cin >> s;
	    int len = strlen(s);
	    bool possible = true;
	    bool multiple = false;
	    
	    for (int i = 0; i < len/2; i++) {
	        char a = s[i];
	        char b = s[n-1-i];
	        if (a != '?' && b != '?') {
	            if (a != b) {
	                possible = false;
	                break;
	            }
	        } else if (a == '?' && b == '?') {
	            multiple = true;
	        }
	    }
	    if (len % 2 == 1 && s[len/2] == '?') {
	        multiple = true;
	    }
	    
	    if (!possible) cout << "NO\n";
	    else if (multiple) cout << "NO\n";
	    else cout << "YES\n";
	}

}

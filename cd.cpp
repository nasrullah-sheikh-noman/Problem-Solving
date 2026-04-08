#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
	    int n, m, a, b, c;
	    cin >> n ;
	    cin >> m ;
	    cin >> a ;
	    cin >> b ;
	    cin >> c ;
	    
	    if (max(a, b) < c && c <= (a+b)) {
        int res = (((n-1)*a)+((m-1)*b)+(c));
	        cout << res << endl;
	    } else {
	        cout << (n*a)+(m*b) << endl;
	    }
	}

}

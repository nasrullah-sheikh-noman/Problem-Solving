#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string a; cin >> a;
        string b; cin >> b;
        for(int i = 0; i < n; i++) {
            if(a[i] == b[i]) {
                cout << a[i] ;
            } else break;
        }
        cout << endl;
    }
}

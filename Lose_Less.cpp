#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int m, n; cin >> m >> n;
        for(int i = 0; i <= m; i++) {
            int k = m-i;
            if(k <= n && n <= 3*k && (n-k)%2 == 0) {
                cout << i << "\n"; break;
            }
        }
    }
}

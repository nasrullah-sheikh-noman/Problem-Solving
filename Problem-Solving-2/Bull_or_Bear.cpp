#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        if(x == y) {
            cout << "NEUTRAL\n";
        } else if(x>y) {
            cout << "LOSS\n";
        } else cout << "PROFIT\n";
    }
}

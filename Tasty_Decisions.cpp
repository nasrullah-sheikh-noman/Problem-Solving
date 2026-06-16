#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        int c = x*2;
        int can = y*5;
        if(c > can) {
            cout << "Chocolate" << endl;
        } else if (can > c) {
            cout << "Candy" << endl;
        } else cout << "Either" << endl;
    }
}

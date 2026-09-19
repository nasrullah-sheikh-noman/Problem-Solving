#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x, y; cin >> x >> y;
    int res = abs(x-y);
    if(res <= 2) {
        cout << "Interesting\n";
    } else cout << "Boring\n";
}

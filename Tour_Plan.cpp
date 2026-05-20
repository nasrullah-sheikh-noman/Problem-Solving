#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if(z > 50) {
	    int sum1 = (z-50)*y;
	    int sum = sum1 + x;
	    cout << sum << endl;
	} else cout << x << endl;

}

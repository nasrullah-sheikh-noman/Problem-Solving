#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int s = (n/2)+1;
	int ans = s-k;
	if(ans > 0) {
    	cout << ans << endl;
	} else {
	    cout << 0 << endl;
	}

}

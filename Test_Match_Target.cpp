#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	if(m <= n+l) {
	    int res = n+l-m+1;
	    cout << res << endl;
	} else cout << 0 << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    int ans = 0;
    ans+=max(a,b);
    ans+=max(c,d);
    ans+=max(e,f);
    cout << ans << endl;
}

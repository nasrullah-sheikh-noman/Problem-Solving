#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b, c; cin >> a >> b >> c;
    int sum1 = a*c, sum2 = b*c;
    cout << max(sum1, sum2) << endl;
}

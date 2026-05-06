#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    int sum = 0;
	    for(int i = 0; i < n; i++) {
	        if((i & ((n-1)-i)) == 0) {
	        sum^=arr[i];
	        }
	    }
	    cout << sum << endl;
	}

}

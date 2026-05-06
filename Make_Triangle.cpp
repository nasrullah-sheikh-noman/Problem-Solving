#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int arr[3];
	    for(int i = 0; i < 3; i++) {
	        cin >> arr[i] ;
	    }
	    int cnt = 0;
	    while(arr[0]+arr[1] <= arr[2]) {
	        cnt++;
	        arr[0]++;
	    }
	    while(arr[1]+arr[2] <= arr[0]) {
	        cnt++;
	        arr[1]++;
	    } 
	    while(arr[2]+arr[0] <= arr[1]) {
	        cnt++;
	        arr[2]++;
	    }
	    cout << cnt << endl;
	}

}

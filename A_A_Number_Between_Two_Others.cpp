#include <iostream>
using namespace std;

int main () {
  int t;
  cin >> t ;
  while(t--) {
    long long int a, b;
    cin >> a >> b;
      if (b == 2*a) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
  }
  

  return 0;
}
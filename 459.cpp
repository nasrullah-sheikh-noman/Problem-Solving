// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define yes cout << \"YES\" << endl; 
#define no cout << \"NO\" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    if(s[0] == 'a' || s[0] == 'b' || s[0] == 'c') {
      cout << 2 ;
    }
    else if(s[0] == 'd' || s[0] == 'e' || s[0] == 'f') {
      cout << 3 ;
    }
    else if(s[0] == 'g' || s[0] == 'h' || s[0] == 'i') {
      cout << 4 ;
    }
    else if(s[0] == 'j' || s[0] == 'k' || s[0] == 'l') {
      cout << 5 ;
    }
    else if(s[0] == 'm' || s[0] == 'n' || s[0] == 'o' ) {
      cout << 6 ;
    }
    else if(s[0] == 'p' || s[0] == 'q' || s[0] == 'r' || s[0] == 's') {
      cout << 7 ;
    }
    else if(s[0] == 't' || s[0] == 'u' || s[0] == 'v') {
      cout << 8 ;
    }
    else if(s[0] == 'w' || s[0] == 'x' || s[0] == 'y' || s[0] == 'z') {
      cout << 9 ;
    }
  }

  return 0;
}
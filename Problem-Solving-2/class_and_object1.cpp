// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

class Cricketer {
  public : 
    int jersy_no;
    string country;
  
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // write your code here
  // Cricketer dhoni;
  Cricketer* dhoni = new Cricketer;
  dhoni->country = "india";
  dhoni->jersy_no = 34;

  Cricketer* kohli = new Cricketer;
  kohli->country = dhoni->country;
  kohli->jersy_no = dhoni->jersy_no;
  delete dhoni;
  
  cout << kohli->country << " " << kohli->jersy_no;

  return 0;
}
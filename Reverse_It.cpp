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

class Student {
  public :
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  Student arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
  }
  for(int i = 0; i < n/2; i++) {
    swap(arr[i].section, arr[n-1-i].section);
  }
  for(int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " <<  arr[i].id << endl;
  }
  return 0;
}
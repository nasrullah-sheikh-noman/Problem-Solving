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
    int roll;
    int marks;  
};

bool cmp(Student l, Student r) {
  return l.marks == r.marks ? l.roll < r.roll : l.marks > r.marks;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  Student arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
  }
  sort(arr, arr+n, cmp);
  for(int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
  }
  return 0;
}
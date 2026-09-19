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
    char section;
    int marks;
    int cls;
    
  Student(const string n, int r, char s, int m, int c) {
    roll = r;
    section = s;
    name = n;
    marks = m;
    cls = c;
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // write your code here
  Student nasrullah("nasrullah", 12, 'A', 329, 9);
  Student ns_nasrullah("ns_nasrullah", 12, 'A', 362, 9);
  Student noman("noman", 12, 'A', 434, 9);

  int h = 0;
  if(nasrullah.marks >= ns_nasrullah.marks && nasrullah.marks >= noman.marks) {
    h = nasrullah.marks;
  } else if(ns_nasrullah.marks >= nasrullah.marks && ns_nasrullah.marks >= noman.marks) {
    h = ns_nasrullah.marks;
  } else h = noman.marks;

  cout << h << "\n";

  return 0;
}
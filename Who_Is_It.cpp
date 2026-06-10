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
  public: 
    int id;
    string name;
    char section;
    int mark;

  Student(int i, const string n, char s, int m) {
    id = i;
    name = n;
    section = s;
    mark = m;
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while(t--) {
      int id, mark;
      string name;
      char section;
      cin >> id >> name >> section >> mark;
      Student s1(id, name, section, mark);
      cin >> id >> name >> section >> mark;
      Student s2(id, name, section, mark);
      cin >> id >> name >> section >> mark;
      Student s3(id, name, section, mark);
      if(s1.mark >= s2.mark && s1.mark >= s3.mark) {
        cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
      } else if(s2.mark >= s3.mark && s2.mark >= s1.mark) {
        cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
      } else if(s3.mark >= s2.mark && s3.mark >= s1.mark) {
        cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
      } else {
        if(s1.mark == s2.mark && s2.mark == s3.mark) {
          cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
        } else if(s1.mark == s2.mark) {
          cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
        } else if(s2.mark == s3.mark) {
          cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
        }
      }
  }

  return 0;
}
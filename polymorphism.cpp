#include <bits/stdc++.h>
using namespace std;

class Person {
  public:
    string name;
    int age;
    

    //  Operator overloading
    // int x = 10;
    // int y = 30;
    // Person() {
    //   x = y;
    //   cout << "Y : " << y << endl;
    //   cout << "X : " << x << endl;
    // }

    // function overloading
    //  Compile time Polymorphism (Overloading)

    // void show(int x) {
    //   cout << "int : " << x << endl;
    // }
    // void show(char ch) {
    //   cout << "char : " << ch << endl;
    // }
};

class parent {
  public:
    void getInfo() {
      cout << "Parent class\n";
    }
};

class child: public parent {
  public:
    void getInfo() {
      cout << "child class\n";
    }
};

int main() {
  Person p1;
  parent p;
  p.getInfo();

  return 0;
}
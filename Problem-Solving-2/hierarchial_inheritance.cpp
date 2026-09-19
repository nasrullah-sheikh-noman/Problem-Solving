#include <bits/stdc++.h>
using namespace std;

class Person {
  public:
    string name;
    int age;
    
    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }
};

class Student : public Person {
  public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age) {
      this->roll = roll;
    }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Roll : " << roll << endl;
    }
};

class Teacher : public Person {
  public:
    string Department;

    Teacher(string name, int age, string Department) : Person(name, age) {
      this->Department = Department;
    }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Age :  " << age << endl;
      cout << "Department : " << Department << endl;
    }
};

int main () {
  Student s1("Noman", 21, 534233);
  s1.getInfo();

  Teacher t1("Nasrullah", 32, "CSE");
  t1.getInfo();

  return 0;
}
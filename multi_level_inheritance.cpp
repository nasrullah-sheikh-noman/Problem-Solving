#include <bits/stdc++.h>
using namespace std;

class Stdudent {
  public:
    string name;
    int roll;
  Stdudent(string name, int roll) {
    this->name = name;
    this->roll = roll;
  }
};

class Teacher {
  public:
    string subject;
    double salary;
  Teacher(string subject, double salary) {
    this->salary = salary;
    this->subject = subject;
  }
};

class TeachingAssistant : public Teacher, public Stdudent {
  public:
    string dept;

    TeachingAssistant(string name, int roll, string subject, double salary, string dept) : Teacher(subject, salary), Stdudent(name, roll) {
      this->dept = dept;
    }

    void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Roll : " << roll << endl;
      cout << "Subject : " << subject << endl;
      cout << "Salary : " << salary << endl;
      cout << "Department : " << dept << endl;
    }
};

int main () {
  TeachingAssistant ta("Noman", 542414, "Algorithms", 280000, "CSE");
  ta.getInfo();
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

// parent class
class A
{
public:
  string name;
  int age;

  // constructor
  A(string name, int age)
  {
    this->name = name;
    this->age = age;
  }

  // method
  void display()
  {
    cout << "Your is name" << name << " and age " << age << endl;
  }
};

// child class
class B
{
public:
  string designation;
  B(string designation)
  {
    this->designation = designation;
  }
};

// multiple inheritance class A and B
class C:public A,public B{
  public:
  C(string name, int age,string designation):A(name,age),B(designation){

  }
  void PersonC_info()
  {
    cout << "Your is name" << name << " and age " << age << " designation  "<<designation<< endl;
  }

};

int main()
{

  C obj("John", 25, "student");
  obj.PersonC_info();
  return 0;
}

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

// inherite from class A
class B:public A
{
public:
  string designation;
  B(string name, int age,string designation):A(name,age)
  {
    this->designation = designation;
  }
};

// inheriate from class B
class C:public B{
  public:
  string sub;
  C(string name, int age,string designation,string sub):B(name,age,designation){
    this->sub=sub;
  }
  void PersonC_info()
  {
    cout << "Your is name" << name << " and age " << age << " designation  "<<designation<< " Subject " <<sub<<endl;
  }

};

int main()
{

  C obj("John", 25, "student","Cse");
  obj.PersonC_info();
  return 0;
}

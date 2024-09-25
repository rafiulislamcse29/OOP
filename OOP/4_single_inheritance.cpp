#include<bits/stdc++.h>
using namespace std;

// parent class
class A{
    public:
    string name;
    int age;

    //constructor
    A(string name, int age){
        this->name = name;
        this->age = age;
    }

    //method
    void display(){
        cout<<"Your is name"<< name <<" and age " <<age<<endl;
    }

};

//child class
class B : public A{
  public:
  // constructor
    B(string name, int age) : A(name, age) {}
  void fun(){
    cout<< "child class"<<endl;
  }
};

int main(){
  
   B obj("John", 25);
  obj.display();
    return 0;
}






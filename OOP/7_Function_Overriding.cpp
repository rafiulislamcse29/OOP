


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
    void display(){
        cout<<"Your is name"<< name <<" and age " <<age<<endl;
    }

};

//child class
class B : public A{
  public:
    string designation;
  // constructor
    B(string name, int age,string designation) : A(name, age) {
      this->designation=designation;
    }
 // display method override from  parent class
    void display(){
        cout<<"Your is name"<< name <<" and age "<<age <<" Designation "<< designation<<endl;
    }
};


int main(){
  
  B obj("John", 25,"Student");
  obj.display();
    return 0;
}






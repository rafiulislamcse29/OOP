#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string name;
    string engine;

    //constructor
    Car(string name, string engine){
        this->name = name;
        this->engine = engine;
        cout<<"This is a constructor"<<endl;
    }

    //method
    void display(){
        cout<< name <<endl;
    }

    //destructor
    ~Car(){
        cout<<"This is a Desctructor"<<endl;
    }
};
                    
int main(){
  Car car("BMW","MOTOR");
  car.display();
              
    return 0;
}






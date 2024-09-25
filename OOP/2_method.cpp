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
        cout<<"Car is "<< name <<" and engine " <<engine<<endl;
    }

    //destructor
    ~Car(){
        cout<<"This is a Desctructor"<<endl;
    }
    // outside the class
  void car_fun();
};

// scope resolution operator
void Car::car_fun(){
  cout<<"This a car function"<<endl;
}


int main(){
  Car car("BMW","MOTOR");
  car.display();
  car.car_fun();
              
    return 0;
}






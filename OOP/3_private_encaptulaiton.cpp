#include<bits/stdc++.h>
using namespace std;

class Car{
    //private varable can't access outsite the class
    private:
    string name;
    string engine;
    int price;

    public:
    //constructor
    Car(string name, string engine,int price){
        this->name = name;
        this->engine = engine;
        this->price=price;
    }

    //method
    void display(){
        cout<<"Car is "<< name <<" and engine " <<engine <<" price " << price <<endl;
    }

};


int main(){
  Car car("BMW","MOTOR",3232);
  car.display();
  // cout<<car.name;  // declared private here
              
    return 0;
}






#include<bits/stdc++.h>
using namespace std;


int area(int a){
  return a*a;
}

int area(int l,int h){
  return l*h;
}

float area(double radius){
  return (3.1415*radius*radius);
}

//  function overloading function same name but different parameter and different type
int main(){
    cout<<area(2)<<endl;
    cout<<area(2,5)<<endl;
    cout<<area(4.5)<<endl;
    
}
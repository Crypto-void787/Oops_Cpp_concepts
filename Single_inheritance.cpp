#include<iostream>
using namespace std;

class Scooty{  // Parent class 
      
    int topSpeed; 
      int mileage; 

}; 

class Bike : Scooty{  // Child class / inherit from scooty 
   
     int gear; 
     
}; 

int main(){
    cout<< "Hello world " << endl; 
    return 0 ; 
}
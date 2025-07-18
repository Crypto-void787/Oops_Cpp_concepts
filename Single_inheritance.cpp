//  Inheritance concept 

#include<iostream>
using namespace std;

class Scooty{  // Parent class 
    
      public:
         int topSpeed; 
         int mileage; 

      private:
           
       int bootspace; 

}; 

class Bike : public Scooty{  // Child class / inherit from scooty 
  
       public:
          int gear; 
     
}; 

int main(){
    
    Bike b1 ;
    b1.topSpeed = 100 ; 
    b1.mileage = 12.5;
    b1.gear = 6 ; 

    return 0 ; 
}
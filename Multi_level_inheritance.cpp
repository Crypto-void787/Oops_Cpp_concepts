//  single Inheritance concept 

#include<iostream>
using namespace std;

class vehicle{  // Parent class 
    
      public:
         int topSpeed; 
         int mileage; 
         float fuel; 

}; 

class Bike : public vehicle{  // Child class / inherit from scooty 
   public:
    int gear ; 

}; 

class Car : public vehicle{  // Child class / inherit from scooty 
  
    // add any info specified to cars 
     
}; 

class Truck : public vehicle{  // Child class / inherit from scooty 

    //  add any info specified to cars 
}; 

int main(){
    
    Bike b1 ;
    b1.topSpeed = 100 ; 
    b1.mileage = 12.5;
    b1.gear = 6 ; 
   
    cout << b1.topSpeed << "   "  << b1.gear << "  " << b1.mileage << endl ; 
    return 0 ; 
}
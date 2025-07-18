//  single Inheritance concept 

#include<iostream>
using namespace std;

class vehicle{  // Parent class 
    
      public:
         int topSpeed; 
         int mileage; 
         string fuel; 

}; 

class Car : public vehicle{  // Child class / inherit from scooty 
  public:
    // add any info specified to cars 
     
}; 

class Twowheeler : public vehicle{  // Child class / inherit from scooty 
   public:
    int wheels; 

}; 



class Bike : public Twowheeler{  // Child class / inherit from scooty 
      public:
       int gear; 
}; 

int main(){

     cout << " Here first we have Parent class named as vehicle" << endl; 
     cout << " ____________________  " << endl; 
     cout << " Then we've its child class named as Twowheeler " << endl ; 
     cout << " _________________ " << endl ; 
     cout <<  " Then we've grand child class named bike " << endl ;
     cout << " Hope so you get the concept well " << endl ; 
     cout << "__________________________________" << endl; 
       Bike b1 ;
      b1.topSpeed = 100 ; 
      b1.mileage = 12.5;
      b1.gear = 6 ; 
      b1.fuel = "petrol" ; 
       cout << " ---Bike b1 DETAILS : " << endl; 
       cout << "Fuel _ type : " << b1.fuel << " and top _ Speed :  " << b1.topSpeed << "  and  mileage of it is : " << b1.mileage << " and it have gears are " << b1.gear << " ----" <<  endl ;
    return 0 ; 
}
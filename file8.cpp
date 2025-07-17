// Here we'll take same class but diffrence is tha here we gonna take our output by using a function ______
// Infact passing value to the function and then printing output in those function 


#include<iostream>
using namespace std;
class Car {

   public: 
    string name ; 
    int model_no ; 
    int price ; 
    int reg_no ; 

 } ; 

 void print(Car c){
    cout << c.name << "  " << c.model_no << "  " << c.price << "  "  << c.reg_no << endl;
 }

 int main(){
    Car c1 ; 
    c1.name = "Audi A8 " ; 
    c1.model_no = 2025 ; 
    c1.price = 10000000 ; 
    c1.reg_no = 7131 ;

    Car c2 ; 
    c2.name = "BMW 7 seies " ; 
    c2.model_no = 2025 ; 
    c2.price = 19000000 ; 
    c2.reg_no = 4562 ;

    Car c3 ; 
    c3.name = "Honda Civic " ; 
    c3.model_no = 2025 ; 
    c3.price = 8000000 ; 
    c3.reg_no = 1317 ;

    Car c4 ; 
    c4.name = "Fortuner " ; 
    c4.model_no = 2025 ; 
    c4.price = 9000000 ; 
    c4.reg_no = 7111 ;
  

   print(c1) ; 
   print(c2) ; 
   print(c3) ; 
   print(c4) ; 
    
    cout << "The details of the cars are printed successfully." << endl;
     


    return 0 ; 
 }
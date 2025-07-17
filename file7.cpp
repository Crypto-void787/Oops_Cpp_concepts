// In this file we gonna make the simple class and prinitng output by traditional way  


#include<iostream>
using namespace std;
class Car {

   public: 
    string name ; 
    int model_no ; 
    int price ; 
    int reg_no ; 


 } ; 

 

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
  
      cout << "Brand new cars : "<< c1.name << "  " <<  c1.model_no << "  " << c1.price << "  " << c1.reg_no << endl; 
      cout << "Brand new cars : "<< c2.name << "  " <<  c2.model_no << "  " << c2.price << "  " << c2.reg_no << endl;
      cout << "Brand new cars : "<< c3.name << "  " <<  c3.model_no << "  " << c3.price << "  " << c3.reg_no << endl; 
      cout << "Brand new cars : "<< c4.name << "  " <<  c4.model_no << "  " << c4.price << "  " << c4.reg_no << endl;

    cout << "The details of the cars are printed successfully." << endl;
    return 0 ; 
 }
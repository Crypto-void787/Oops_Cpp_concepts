#include<iostream>
using namespace std;

// Bank Account Management System using Classes and Inheritance

class bank {
    public:
     int account_name; 
     int Balance_amount;
     int account_number;
  } ; 

//   Bank Account Class
//   Inheritance from the bank class
class bank_account : public bank {
    public:
     void get_data(){
         cout << "Enter the account name : " ; 
         cin >> account_name ; 
         cout << "\nEnter the balance amount : " ; 
         cin >> Balance_amount ; 
         cout << "\nEnter the account number : " ; 
         cin >> account_number ; 
     }
     void display_data(){
         cout << "\nThe account name is : " << account_name ;
         cout << "\nThe balance amount is : " << Balance_amount ;
         cout << "\nThe account number is : " << account_number ;
     } 
         } ; 
      
int main(){

    bank_account b1;
    b1.get_data();
    b1.display_data();

    return  0; 
 }
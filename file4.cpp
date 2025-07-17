#include<iostream>
using namespace std;
int main(){
    // Today im gonna write a program that 'll detect the 
    // maximum number  
    
    int a ;
    int b ;
    int c ; 
    int d ;
     cout << "Enter the value of a " ; 
     cin >> a ; 
     cout << "\nEnter the value of b " ; 
     cin >> b ;
     cout << "\nEnter the value of c " ; 
     cin >> c ;
     cout << "\nEnter the value of d " ; 
     cin >> d ;
      cout << "\nLets see the maximum number " ; 
      cout << "\nLoading .... " ; 

    //   Here i used if else statements to find the maximum number
    //   I used the logical operators to compare the numbers
    
      if (a > b && a > c && a > d){
            cout << "\n Ther maximum number is : "<< a ;  
          }
         else if (b > a && b > c && b > d ) {
             cout << "\n The maximum number is : " << b ;          
         }
          else if (c > a && c > b && c > d ){
             cout << " \n The maximum number is : " << c ; 
          } 
           else {
             cout << "\n The maximum number is : " << d ; 
           }
    return 0;
}
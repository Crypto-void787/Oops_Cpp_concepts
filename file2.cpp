#include<iostream>
using namespace std;

// Inline Functions ____ To run a very minor task 

inline int product(int a, int b ){
    return a*b ; 
}

inline int sum(int r, int p ){
    return r+p ; 
}

int main() {
     int a ; 
     int b ; 
         cout << "Enter the value of a : "  ; 
         cin >> a ; 
         cout << "\nEnter the value of b : " ; 
         cin >> b ; 
         cout << "\nThe product of a and b is : " << product(a,b) ;
   cout << "____________________________________________" ;        
      int r ; 
      int p ;
         cout << "\nEnter the value of r : " ; 
         cin >> r; 
         cout << "\nEnter the value of p : " ; 
         cin >> p; 
         cout << "\nThe sum of r and p is : " << sum(r,p) ; 

    return 0; 
}
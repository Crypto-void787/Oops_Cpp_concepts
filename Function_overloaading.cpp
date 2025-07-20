#include<iostream>
using namespace std;

class fun{

    public:
      void sum(int a , int b, int c){
         cout << "Sum of 3 int : " <<  a + b + c << endl ; 
      } 
      void sum(int a , int b ){
         cout << "Sum of 2 int : " <<  a + b << endl; 
      }
      void sum(int a , int b , int c , int d ){
         cout << "Sum of 4 int : " << a + b + c + d << endl ;
      }

}; 

int main(){
    //  This will auto take the function that sets into it n return sum of them 
     fun a1 ; 
     a1.sum(3,4,6) ; 

    //   Same with this 
     fun a2; 
     a2.sum(5,5,5,5) ;
      
    // Same with this 
     fun a3 ; 
     a3.sum(1,3) ; 

    return 0 ; 
}
#include<iostream>
using namespace std; 

class Dress{
   public:
    string dress_type ; 
    string size ; 
    int price ; 

    Dress(string dress_type , string size  , int price){
         
        this->dress_type = dress_type ; 
        this->size = size  ; 
        this->price = price ; 

    }
    Dress(){
    //  Default constructor 
    }

   
}; 
       void change(Dress* d ){
      d->price = 3000 ; // (*d).price = 3000;  
      // ->p is same as (*p)  
     }
      void print(Dress d){
      cout << d.dress_type << "  "<< d.price << "  "<< d.size << endl; 
      }


int main(){

    
    // Pointer concept 
    //  int a = 4 ; 
    //  int* p = &a ; 
    //  cout << " a = "<< a << endl ; 
    //  cout << " p = "  << p << endl; 
    //  cout << " *p = " << *p << endl; 
    //  *p = 50  ; 
    //  cout << "Changed *p is = " << *p << endl ; 
    //  cout << "the value after p is " << a << endl ; 



    /*Understanding pointer in terms of class */
    // Dress* p = &d1; 

    // cout << " p " << p << endl ;
    // cout << "Original dertails printing via pointer p : "<< (*p).dress_type << " " <<  (*p).size << "  " <<  (*p).price << endl ;
    // cout << d1.price << endl ;  
    //    (*p).price =  2300 ;  //We can change any f details by using pointers 
    //  cout << "(*p).price " << d1.price ; 
 


    Dress d1( "Casual" , "Medium" , 2500 ); 
    Dress d2( "Casual", "Small" , 2000 );
    
      print(d1) ; 
      cout << d1.price  << endl ;
      change(&d1) ; 
       cout << d1.price << endl ; 
     

    Dress d3 ;
      d3.dress_type = "Casual" ; 
      d3.size = "Medium" ; 
      d3.price = 3000 ; 

    cout << d1.dress_type << " " << d1.size << " " << d1.price << endl ; 
    cout << d2.dress_type << " " << d2.size << " " << d2.price << endl ; 
    cout << d3.dress_type << " " << d3.size << " " << d3.price << endl ; 

       
    return 0; 
}
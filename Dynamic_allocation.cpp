#include<iostream>
using namespace std; 

class Book {

    public: 
     string name ; 
     string author; 
     float price ;
     

     Book(string name , string author , float price ) {
         this->name = name ; 
         this->author = author ; 
         this->price = price ; 
     }

}; 
 
 
int main(){

     Book b1 ("Atomic habit " , "James Clear " , 1200 ); 
     Book* b2 = new Book( " The Alchemist " , "Paulo Coelho " , 800 ); //Object pointer 

         cout << b1.name << " " << b1.author << " " << b1.price << endl; 
         cout << b2->name << " " << b2->author << " " << b2->price << endl ;

      int* ptr = new int(567) ; 
      cout << *ptr << endl; 

 
     
    return 0; 
}

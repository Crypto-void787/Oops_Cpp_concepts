#include<iostream>
using namespace std; 

class Book {

    public: 
     string name ; 
     string author; 
     float price ; 
     Book(string n , string a , float p ) {
         name = n ; 
         author = a ; 
         price = p ; 
     }

     void display() { 
        cout << "----------Book details -------------" << endl ; 
        cout << "Book name : " << name << endl; 
        cout << "Book author : " << author << endl; 
        cout << "Book price : " << price << endl; 
        cout << " ______________________________________________ " << endl ;
     }

     void comparePrice(Book b1, Book b2) {
    if (b1.price > b2.price) 
        cout << "Book 1 more expensive" << endl;
    else
        cout << "Book 2 more expensive" << endl;
}

}; 
 
 
int main(){
     Book b1 ("Atomic habit " , "James Clear " , 1200 ); 
     Book b2 ( " The Alchemist " , "Paulo Coelho " , 800 ); 

     
  if(b1.price > b2.price ){ 
    cout << "Bok 1 is more expensive than book 2 " << endl ; 
}
  else {
    cout << "Book 2 is more expensive than book 1 " << endl ;
} 


     b1.display();
     b2.display(); 
     
    return 0; 
}

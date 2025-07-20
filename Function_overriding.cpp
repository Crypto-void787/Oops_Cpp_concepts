
 // So basically there's difference in overloading and overriding of a function 
 /*----OVERLOADING: Its like same function having the different arguments or might be different data types N often found in compile time */ 
/*------OVER_RIDING: Its like Making pointer of parent class n then calling child class's  func through it by assigning all the function in 
parent class aas virtual function n nothing else   */ 


#include<iostream>
using namespace std;

class Animal {
   public:
    // virtual so it can be overridden
    virtual void sound(){
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
   public:
    void sound() override {
        cout << "Dog says: Woof Woof 🐶" << endl;
    }
};

int main(){
    Animal* ptr;        // pointer of parent class
    Dog d;              // object of child class
    ptr = &d;           // parent pointer pointing to child

    ptr->sound();       // will call Dog's sound() bcz of virtual

    return 0;
}



// #include<iostream>
// using namespace std;

// class Virtual_uni{

//    public:
//     string degree_program;
//     int enrolled_year;
    
//     Virtual_uni(){
//         cout << " Welcome to Vu " << endl ; 
//     }


// }; 
// class Student_at_vu : public Virtual_uni{

//     private: 
//        string Id ; 

//     public:
//       string name ;   
//       float gpa ; 
//       int sem ; 
      
//       Student_at_vu(string Id , string n , string d , int y , float gpa , int s ){
          
//           this->Id = Id ; 
//           name = n ; 
//           degree_program = d ; 
//           enrolled_year = y ; 
//           this->gpa = gpa ; 
//           sem = s ;     

//       } 
//      Student_at_vu(){
//          cout << "Hi " << Id << "! Hope so you'll do your best in your these inportant years ------ " << endl ; 
//      }

//      void display_data(Student_at_vu s ){
        
//         cout << "-------------------------------------------------------------" << endl ; 
    
//          cout << "Student name : " << s.name << endl ; 
//          cout << "Student enrolled degree program : " << s.degree_program << endl ;
//          cout << "Student enrolled year : " << s.enrolled_year << endl; 
//          cout << "Student gpa till yet : " << s.gpa << endl ; 
//          cout << "Student current semester : " << s.sem << endl ; 

//      }
      

          

// }; 

// int main(){

//      Student_at_vu s1; 
//      s1.display_data();       

//     return 0; 
// }
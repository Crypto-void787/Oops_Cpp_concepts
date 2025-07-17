// Constructor concept in class 
//  1- Default constructor 
//  2- Parameterized consructor 
//  3- Copy constructor ______ Deep copy ___ studied two ways of it 
//  4- Overloading constructor


#include<iostream> 
using namespace std;

class student {
  public:
    string name ; 
    int roll_no ; 
    int age ; 
    float gpa ; 
     
    // Constructor 
    student(){
        // Default con structor 
    }

   // It dont have any return type just give parameters go it 
    // N it will set them back to the class variables
    student(string n , int r , int a , float g){
         name = n ;
         roll_no = r ; 
         age = a; 
          gpa = g ; 
 
    } // Parametrized constructor 

    student( int r ,string n ,  float g, int a ){
         name = n ;
         roll_no = r ; 
         age = a; 
          gpa = g ; 
 
    } // Parametrized constructor 

       student(string n , int r , int a ){
         name = n ;
         roll_no = r ; 
         age = a;
 
    }
}; 


int main(){
    //it'll runs by default constructor so no error cuz we've def_con 
     student s0 ;  
         s0.name = "Maha" ; 
         s0.roll_no = 23 ; 
         s0.age = 17 ;
         s0.gpa = 3.62 ; 
  
   /*Rather then initializin like 
      student s1 ; 
       s1.name = wajiha ; 
       s1.roll_no = 23 ; 
       s1.age = 17 ;
       s1.gpa = 3.62 ; 
        WE CAN DO AS BELOW BY USING CONSTRUCTOR : */

     student s1("walid", 23, 17, 3.62) ; // parameterized constructor
    

     student s2(24 , "Wania" , 3.8 , 22); // using the constructor with different order of parameters) ; 
     
 
     //  u have to pass the exact value as set in constructor 
    // Otherwise it will give error
    // as name goes to string roll_no goes to int age goes to int and gpa goes to float
    // So u hav0e to pass the values accordingly

     student s3("Ali", 25, 20); // using the constructor with three parameters
     s3.roll_no = 20;  // Overwriting (we can add info like tha if we dont set parameter in constructor )
     
     student s4("Alia", 27, 25); // using the constructor with three parameters
     s4.gpa= 3.1 ;  // Setting gpa for s4
     // Note: gpa is not set for s4 n we can set it by default

     student s5 = s1 ; // Deep Copy
      s5.name = "minahil " ; 
     
     student s6(s1); //Copy constructor ___ Deep copy 
     s6.name = "sana " ;  
     

     cout << s0.name << " " << s0.roll_no << " " << s0.age << " " << s0.gpa << endl ;
     cout << s1.name << " " << s1.roll_no << " " << s1.age << " " << s1.gpa << endl ; 
     cout << s2.roll_no << " " << s2.name << " " << s2.gpa << " " << s2.age << endl;
     cout << s3.name << " " << s3.roll_no << " " << s3.age <<  endl; 
     cout << s4.name << " " << s4.roll_no << " " << s4.age << " " << s4.gpa <<  endl; 
     cout << s5.name << " " << s5.roll_no << " " << s5.age << " " << s5.gpa <<  endl; 
     cout << s6.name << " " << s6.roll_no << " " << s6.age << " " << s6.gpa <<  endl; 

   return 0 ; 


}
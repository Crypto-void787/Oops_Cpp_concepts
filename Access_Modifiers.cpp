// Public : Can be access everywhere n by everyone 
/* Private : Only access within class no external function can access it  ________ N to access it in other function have to
create a constructor first n then by local parameters of that constructor that we assign to the actual parameters 
of class we can simply acces it ___________But their is a restriction: user can only see that info but cant modify that 

WEll there is another way to access it by "getter" so _____ Just create a function which return the data type  
While to set it according to our want we gonna use setter funstion ok ???????? */

#include<iostream>
using namespace std;  
 
class Student{

     private: 
      
      int marks ;  //Now we'll access it by either a constructor having all the parameters or might be getters 

     public:
      string name ; 
      int roll_no ; 

      Student(){
        // Default constructor 
    }
       
      Student( string n , int r , int m ){
         name = n ; 
         roll_no = r ; 
         marks = m ; 
    } 
      float get_marks(int marks){
        return marks;       // Now this is getter can print the marks value by using this function
     } 

      void setter_marks(float m ){
         marks = m ;      //By using this we can also set the value for private members 
      }

}; 

int main(){

      Student s1( "Abeera" , 23 , 98.99 ) ; 
       
      s1.get_marks(32) ;
      s1.setter_marks(24) ;
      
      
      Student s2 ; 
      s2.name = "Ahmad" ; 
      s2.roll_no = 04 ; 
      s2.get_marks(34) ;  //So this how we can set marks 

    return 0 ; 

}
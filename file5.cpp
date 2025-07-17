#include<iostream> 
using namespace std;
// Structures in C++ are used to group different data types together.
// They are similar to classes but are typically used for simpler data structures.
// In this example, we will define a structure to represent students with their name, roll number, and age.

struct students {
     string name ; 
     int roll_no ; 
      int age ; 

} ep ; 
int main(){
    students s1 ; 
    s1.name = "Wania " ; 
    s1.roll_no = 101 ;
    s1.age = 22 ; 
    
    students s2; 
    s2.name = "Walid " ; 
    s2.roll_no = 102 ; 
    s2.age = 17 ;
    
    cout << "Name : " << s1.name << endl ;
    cout << "Roll No : " << s1.roll_no << endl ;
    cout << "Age : " << s1.age << endl ;
 
     cout << " _______________________________________" << endl; 

    cout << "Name : " << s2.name << endl ;
    cout << "Roll No : " << s2.roll_no << endl ;
    cout << "Age : " << s2.age << endl ;    

     

     return 0; 
}
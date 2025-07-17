// This_Keyword concept 

#include<iostream>
using namespace std;
 
class Cricketman{
 public: 
     string name ; 
     int runs ; 
        // Constructor
      Cricketman(string name , int runs ){
         this->name = name ; 
         this->runs = runs ; 
      }   
      Cricketman(){

      }
 };

int main(){

    Cricketman c1("Shahid Afridi " , 8000 ) ; 
    Cricketman c2("Waseem Akram " , 12000 ) ;

    cout << c1.name << " " << c1.runs  << endl;
    cout << c2.name << " " << c2.runs  << endl;


  return 0 ; 
}


// This keyword : It is used to create parameters same as actual parameters of class ___________ otherwise it'll through garbage value 


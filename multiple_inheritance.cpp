#include<iostream>
using namespace std;

class Cricketor{
      int runs; 
       int wicketts; 
       float avg;  
};

class Engineer{
     public: 
       string domain; 
       int experience ;
       string working_company ; 
};

class Man : public Cricketor,Engineer {
    public: 
         string name ; 
         int age ;     
}; 

int main(){
     
     
     
    return 0 ; 
}
#include<iostream> 
using namespace std;

class students {
     public: 
        string name; 
        int roll_no; 
        int marks[] ; 
     public: 
      void input_Data(); 
      void avg_marks();   
      void display_Data();  
};

 void students :: input_Data(){
    cout << "Enter the name of the student " ;
    cin >> name ; 
    cout << "\nEnter the roll_no of the student :" ; 
    cin >> roll_no ; 
    cout << "\nEnter the marks of the student :" ; 
    for(int i = 0 ; i< 5 ; i++) {
        cout << "\n Enter the marks of the subjects " << i+1 << " : " ; 
        cin >> marks[i]; 
    }
    }

    void students :: avg_marks(){
         int sum = 0 ; 
        int avg = 0 ; 
    for (int i = 0  ; i < 5 ; i++ ) {
        sum += marks[i]; 

    }
     avg = sum /5 ; 
     cout << " \n The average marks of " << name << " is : " << avg << endl; 

    } 
     void students :: display_Data(){
         cout << "\n The name of The student is : " << name << endl;
         cout << "\n The roll number of The student is : " << roll_no << endl;
         cout << "\n The marks of student " << name << " are : " << endl ; 
     }
 

int main(){
    students s1;
    // s1.input_Data();
    // s1.avg_marks();
    s1.display_Data(); 
    return 0 ; 
}
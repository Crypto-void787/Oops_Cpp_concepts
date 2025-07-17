#include<iostream>
using namespace std;

// Recursion is a powerful technique in programming where a function calls itself to solve smaller
// instances of the same problem. In this example, we will implement two recursive functions: one for
//  calculating the factorial of a number and another for calculating the Fibonacci sequence.

int fibonacci(int n) {
    if (n==1 || n == 0) {
        return 1; 
    } 
    return fibonacci(n-1 ) + fibonacci (n -2 );
}

int factorial(int n) {
    if ( n<=1 ) {
        return 1; 
    }
    return n* factorial(n-1); 
} 

// Function overloading allows us to define multiple functions with the same name but different parameters.
 int sum (int a , int b , float c){
    return a + b + c; 

 }
 int sum (int a , int b ){
    return a + b ; 

 }
//  Calculating volume of a cyllinder 
int volume(float radius , int height){
    return 3.14 * radius * radius * height ; 
}



int main(){
    float radius ;
    int height;
    cout << "Enter the radius of the cyllinder : " ;
    cin >> radius ; 
    cout<< "\nEnter the height of the cyllinder : " ;
    cin >> height ;
    cout << "The volume of the cyllinder is : " << volume(radius, height) << endl;
    cout << "___________________________________________" << endl;
    
     int a ; 
     cout << "Enter the number : " ; 
      cin >> a ; 
      cout << "The factorial of " << a << " is : " << factorial(a) << endl; 

      cout << "The fabonacci of " << a << " is : " << fibonacci(a) << endl ; 

      int b ;
      float c ;
      cout << "Enter the value of b : " ;
      cin >> b ;    
      cout << "Enter the value of c : " ;
        cin >> c ;
        cout << "The sum of a, b and c is : " << sum(a, b, c) << endl; 

        cout << "___________________________________________" << endl;

        cout << "The sum of a and b is : " << sum(a, b) << endl;
     return 0 ; 
}
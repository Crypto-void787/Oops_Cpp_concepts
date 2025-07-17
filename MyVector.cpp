
//READ THIS TO UNDERSTAND THE CODE 

/******** So basically here we gonna make our own vector ! but for that lets us know what the vector is actually 
 VECTORS: first of all there are two things in it 1: size n 2:capacity ______ for the first arr both size n capacity r by default 0 ___ well its another 
 stuff tha we can set them to someother value n then initiallize with it 
  at point of initiallization its 0 by default but the RULE is "if both of size n capacity have same value then just double the capacity so 
  tha more numbers can add in arr " ______________ OK ?? 
 so if we have both size n capacity is 0 first we will modify capacity  into 1 as per rule n value remain 0  
Now we can pass any one number or value to the array's size  n it become 1 too  same like capacity N now its capacity is full 
 so both size n capacity become same 1 1 
  Game starts ::  now double the value of capacity = 2 so , now size= 1 and capacity= 2   _______________N now we can add any value to the array having capacity of 1 no
       !
       ! 
       ! 
        so now add one more value and again size=capacity (capacity full we cant add any value more to add we need to double the capacity first to add )
       N SO ON --- --- --- 
        It'll continue as   ******************/

#include<iostream>
using namespace std; 

class Vector{

      public: 
       int size ; 
       int capacity ; 
       int* arr; 

      Vector(){

        size = 0 ; 
        capacity = 1 ;
        arr = new int[1];

    }

     void add(int ele){
        
        if(size==capacity){  //if size equals to capacity then do that 
            
            capacity *= 2 ;  //double the capacity 

            int* arr2 = new int[capacity];  //so now our new array is the doubled capacity 
            
             for(int i = 0 ; i<size ; i++){ 

                 arr2[i] = arr[i]; 
              
           }
            arr = arr2 ;  // now our previous array is no more n we r using the new formed array 
    } 
       
         arr[size++] = ele ; //else just add number as we have capacity to store them 

    }
     void print(){

        for(int i = 0 ; i<size ; i++ ){

          cout << arr[i] << "  " ; 
        } 
         cout << " " <<endl ; 
     }
       
    //  Function to get any index's value in the array 
     int get(int idx){

        if(size==0){
            cout << "array is empty " << endl ; 
            
        }
        else if( idx >= size || idx < 0 ){
            cout << "Invalid index " << endl ; 

        }
    
        return arr[idx] ;
     }

    //  Func to remove the element 
    void remove(){

         if(size==0){
            cout << "array is empty " << endl ; 
            
        }

          size-- ; 
    }

};


int main(){
     // Lets see our functions' work 
       
       Vector v1 ; //object using blueprint class
       
       v1.add(5); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 

       v1.add(7);  
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 

       v1.add(8); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 

   
       v1.add(2); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 
       
       v1.add(56); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 
      
       v1.add(34); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 
      
       v1.add(06); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 
      
       v1.add(03); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 
    
       v1.add(37); 
       v1.print();
       cout << "SIZE : " <<  v1.size << " " << "CAPACITY : " <<  v1.capacity << endl ; 

       cout << "\n the value at index : " <<  v1.get(4) <<  endl ;   //retrieve the value at the given index  
         

    
        cout << "\n Value after putting the remove function " << endl ; 

           v1.remove(); // remove the last value 

      v1.print();


    return 0 ; 

}

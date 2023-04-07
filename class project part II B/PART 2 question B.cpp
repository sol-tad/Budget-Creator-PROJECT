/*  

In this project we trying to cover things that we have leared like are for loop , decision using if statement
and also we use while statement for input validation and one of the jumping statement also used to make the code
user friendly.

*/

#include <iostream>
using namespace std;

int main() {
     
      
      cout<<"enter the number n and -1 to quit the program"; 
      
      enter_again:   // label
      int n; 
      cin>>n;   
      
       
     if( n != 0){
       for( int i {n}; i >= 0 ; i-- ){
             if (i < n ){
              for (int x = n ; x > i ; x--){   // for spacing since it start at the second row we use i<n
               cout<<"   ";}
              }
        for( int j =0 ; j <= i ; j++){
                cout<<" "<<j<<" ";
           if ( j == i) {
          for( int k = i-1 ; k >= 0 ; k--){
               cout<<" "<<k<<" ";
          }
           
           }
      }    
           cout<<endl;   
 
            }
    
 // for the triangle that we get below 0 
     for( int i {1}; i <= n ; i++ ){
             if (i < n ){
              for (int x = n ; x > i ; x--){
               cout<<"   ";}
              }
        for( int j = 0 ; j <= i ; j++ ){
                cout<<" "<<j<<" ";
           if ( j == i) {
          for( int k = i-1 ; k >= 0 ; k--){
               cout<<" "<<k<<" ";
          }
           
           }
      }    
           cout<<endl;      
 
            }
     }
     
           return 0;  
           
 }
       
       
       
        



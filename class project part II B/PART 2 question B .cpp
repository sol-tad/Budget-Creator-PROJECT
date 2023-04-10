
/*  
In this project we trying to cover things that we have leared like for loop , decision using both if and switch
statement also we use while loop and switch statement for input validation and one of the jumping statement also
used to make the codeuser friendly.
*/


#include <iostream>


using namespace std;

int main() {
     
      enter_again:  //label
                          
      cout<<"Enter a number n greater than 0 or -1 to quit the program : ";
      
      int n; 
      cin>>n;   
      
      
        if( cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid input, \n";
            goto enter_again;
        }
      char input_validation;
      cout<<"\n";
       
          if ( n == 0)
              goto validation_for_0;
              
            
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
      
     validation_for_0:
       if ( n <= 0){
     while( n!= -1){
        cout<<"you entered "<< n << "\n";
        goto enter_again;
     }
       }  

          cout<<"\n\n";
      
        if ( n != -1){
       cout<<" *********** DO YOU WANT TO TRY IT AGAIN (Y)**********";
          cin>>input_validation;
  
          switch( input_validation){
             case 'Y' :
             case 'y':
                 goto enter_again;
                  break;
             default :
               break;
          } 
          
        }

          cout<< " TERMINATED ";
        
           return 0;  
           
 }

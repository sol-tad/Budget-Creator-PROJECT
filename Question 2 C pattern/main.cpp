/* In this project we tried to use the topics that we have learned in this course like loop, if statement 
switch and also jumping statement used.

*/
#include <iostream>
using namespace std;


int main() {
    
    
    ask:
    cout<<"\nEnter a number which is greater than 0 and -1 to quit the program\n";
    int n; 
    cin>>n;
    char input_validation;
    
     if (n ==0 || n < -1 )
         goto for_zero;
    
    
    if( n != -1){
        cout<<"*********** THE SHAPE OF GIVEN NATURAL NUMBER "<< n<<" IS ***********\n\n\n";
        
        
       for (int i= 0 ; i<=n ; i++){
           for (int j = i ; j>= 0 ; j--){
              cout<<j<<" ";
            
            if( i !=n){
                if(j==0){
                    for(int space =0 ; space <= 2*(n-i)-2 ; space++){
                        cout<<"  "; // give 2 spaces
                    }
                    for (int k=0 ; k<=i ; k++){
                        cout<<k<<" ";
                    }
                }
            }
            
             if( j== 0){
                 if( i== n){ 
                     for (int k= 1 ; k <= i ; k++){
                         cout<<k<<" ";
                     }
             }
               
               }
           }
           
           cout<<endl;
           
       }  
         for( int i= n-1 ; i >=0  ; i--){
             for (int j = i ; j >= 0 ; j-- ){
                 cout<<j<<" ";
                 
                 if( j==0){
                     for ( int space = 0 ; space <= 2*(n-i)-2 ; space ++){
                        cout<<"  ";}
                     for(int k=0 ; k<= i ; k++){
                         cout<<k<<" ";
                     }
 
                 }
         }
           
           cout<<endl;
         }
         
             for_zero:    // label
             cout<<"***** DO YOU WANT TO TRY AGAIN (Y)"<<endl;
             cin>>input_validation;
             if ( input_validation == 'Y' || input_validation == 'y')
               goto ask;
         
           
    }     
        cout<<endl<<endl;
        cout<<"***********PROGRAM TERMINATED************";
        
        
        return 0;
        
       
}

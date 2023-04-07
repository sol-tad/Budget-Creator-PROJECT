//This program makes a pattern 

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i,c=35,n;
    
    for(int i=0;i<=9;i++){
        for(int j=i;j>=0;j--){
            cout<<j<<" ";
        }

        if(i<9){
            n=c;

            cout<<setw(n);

            }
        c-=4;
        if(i==9){
                for(int z=1;z<=9;z++){
                    cout<<z<<" ";
                }
             }
             else{
                    for (int k=0;k<=i;k++){


                cout<<k<<" ";

        }

             }


        cout<<endl;
        }


    c=3;

    for(int i=8;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<j<<" ";
        }
        if(i!=9){
            n=c;
            cout<<setw(n);
        }
        c+=4;

        for(int k=0;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }


return 0;
    }


/*
This program sets a budget by accepting the budget starting year,budget ending year,numberof pencli uses,inflation rate,
and each pencil price at budget starting year.And finally display all the estimated price of pencil from budget starting year to budget
ending year
*/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main() {

    //variable declaration to accept the value of each pencil price,rate of inflation that increase the price of the pencil

    float each_item_price, starting_inflation_rate, total_price, rateof_inflation;

    //variable  declaration to accept the budget starting and ending year and quantity of pencil
    int sarting_year, budget_endyear, budget_year = 0, numberof_pencile, choice;

    int permmision;//ask the user that he/she want to set budget

    cout << "**********WELCOME TO BUDGET SET APPLICATION **********\n\n\n";
 ask1:

     cout << "DO YOU WANT TO SET A BUDGET? ENTER\n1.yes\n2.no\n";
    cin >> permmision;

    if(cin.fail()){
    cin.clear();
    cin.ignore();
    cout<<"Invalid input!!Please try again"<<endl;
    goto ask1;

}
    cout << endl;
    if (permmision == 1) {
        cout << "Here is the requirements that you should fill to set budget:\n\n";
ask2:

        cout << "\t\tPlease Enter budget starting year\n";

        cin >> sarting_year;

        if(sarting_year<0){
                cout<<"Invalid year! Try again"<<endl;
        goto ask2;
        }
           if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid year! Try again"<<endl;
            goto ask2 ;

                }
ask3:

        cout << "\t\tPlease Enter budget endyear\n";
        cin >> budget_endyear;
        if(budget_endyear<=sarting_year){
            cout<<"The year is less than starting year!!Try again"<<endl;
        goto ask3;

        }
        if(budget_endyear<0){
                cout<<"Invalid year! Try again"<<endl;
        goto ask3;
        }
           if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid year! Try again"<<endl;
            goto ask3 ;
                }

        cout << "\t\t Please Enter each pencil price in the starting year(ETB)\n";
        cin >> each_item_price;
        ask4:
            if(each_item_price<0){
                cout<<"Invalid year! Try again"<<endl;
        goto ask4;
        }
           if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid year! Try again"<<endl;
            goto ask4 ;
                }

ask5:
        cout << "\t\tPlease Enter estimated inflation rate(%)\n";
        cin >> starting_inflation_rate;


           if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid year! Try again"<<endl;
            goto ask5 ;
                }

        starting_inflation_rate /= 100;//converting percent to decimal

ask6:
        cout << "\t\tPlease Enter quantity of pencil \n";
        cin >> numberof_pencile;
        if(numberof_pencile<=0){
            cout<<"Invalid input: Try again"<<endl;
            goto ask6;
        }


           if(cin.fail()){
            cin.clear();
            cin.ignore();
            goto ask6 ;
                }

        rateof_inflation = starting_inflation_rate;

        total_price = numberof_pencile * each_item_price; //total price of pencil for one year

        budget_year = budget_endyear - sarting_year; //the difference between the starting and ending budget year

        float estimated_price[budget_year]; //array that stores the estimated price of each year
        float *p_price;
        p_price=&estimated_price[0];

        for (int i = 0; i < budget_year; i++) {
            estimated_price[i] = total_price +  rateof_inflation;//calculate and store the estimated price of the 'i'th year
            rateof_inflation *= 2;
        }

        rateof_inflation = starting_inflation_rate;



        system("cls");
    ask:
        cout << "Which year's pencil price do you want to see?\n";
        cout << "\t\t1. To see all pencil price\n\t\t2.Enter year\n\t\t3.exit " << endl;
        cin >> choice;


           if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid year! Try again"<<endl;
            goto ask ;

                }


        if (choice != 1 && choice != 2 && choice != 3) {
            cout << "INVALID INPUT PLEASE TRY AGAIN!!" << endl;
            goto ask;

        }

        if (choice == 1) {
            cout << "YEAR  " << setw(15) << "  NUMBER OF PENCIL  " << setw(15) << "  INFLATION RATE  " << setw(15) << " PRICE OF EACH PENCIL(ETB) " << setw(15) << " ESTIMATED PRICE(ETB) " << endl;
            for (int i = 0; i < budget_year; i++) {

                cout << sarting_year << setw(15) << numberof_pencile << setw(15) << rateof_inflation << setw(20) << each_item_price << setw(30) << *(p_price+i) << endl;
                sarting_year++;
                each_item_price +=  rateof_inflation;
                rateof_inflation *= 2;
            }
        }
        else if (choice == 2) {
ask8:
            int choiseYear;//accepting year from the use to display the given year budget

            cout << "Please Enter year from " << sarting_year << " to " << budget_endyear << " as you want to see the budget?" << endl;
            cin >> choiseYear;


           if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid year! Try again"<<endl;
            goto ask8 ;

                }

              if(!(choiseYear>=sarting_year&&choiseYear<=budget_endyear)){
                cout<<"Invalid year! Try again"<<endl;
        goto ask8;
        }
                   int checkYear=0;
                   checkYear = sarting_year;
                   rateof_inflation = starting_inflation_rate;

            for (int i = 0; i < budget_year; i++) {


                if (choiseYear == checkYear) {

                    cout << "YEAR  " << setw(15) << "  NUMBER OF PENCIL  " << setw(15) << "  INFLATION RATE  " << setw(15) << " PRICE OF EACH PENCIL(ETB) " << setw(15) << " ESTIMATED PRICE(ETB) " << endl;
                    cout << checkYear << setw(15) << numberof_pencile << setw(15) << rateof_inflation << setw(20) << each_item_price << setw(30) << *(p_price+i) << endl;
                    break;
                }
                rateof_inflation *= 2;
                checkYear++;
            }

        }
        else if (choice == 3) {

            cout << "THANK YOU" << endl;
        }
    }
    else if (permmision == 2) {

        cout << "THANK YOU! HAVE A NICE TIME!";
    }
    else if (permmision != 1 || permmision != 2) {
        cout << "INVALID INPUT!! PLEASE TRY AGAIN" << endl;
        goto ask1;
    }

    return 0;
}

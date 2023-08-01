//Output would be:::
PS C:\Users\nehagour\source\repos> .\array.exe
Enter a year : 2023
Enter a first day of the year :  [1:Monday, 2:Tuesday, ......7:Sunday]2

Calender of 2023 : 
--January 2023 -- 
   Mon   Tue   Wed  Thur   Fri   Sat  Sun 
           1     2     3     4     5     6
     7     8     9    10    11    12    13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28    29    30    31

--Feburary 2023 -- 
   Mon   Tue   Wed  Thur   Fri   Sat  Sun 
                             1     2     3
     4     5     6     7     8     9    10
    11    12    13    14    15    16    17
    18    19    20    21    22    23    24
    25    26    27    2


//




#include<iostream>
#include<iomanip>
using namespace std;
int main () {
    int year{};
    cout<<"Enter a year : ";
    cin>>year;

    unsigned int Day_1{};
    cout<<"Enter a first day of the year :  [1:Monday, 2:Tuesday, ......7:Sunday]";
    cin>>Day_1;

    cout<<"\n";
    cout<<"Calender of "<< year <<" : \n";

    int number_of_days_in_a_month {0};
    unsigned int starting_day{Day_1};
    unsigned int day_counter {0};
    unsigned int data_width {6} ;
     for (int month = 1; month <= 12; month++)
  {
    switch(month){
        case 1:
            number_of_days_in_a_month = 31;
            cout<<"--January "<<year<< " -- \n";
            break;
        case 2:
            cout<<"--Feburary "<<year<< " -- \n";
            if ((year % 400 == 0) ||(year%4 ==0 && year %100 ==0)){
                number_of_days_in_a_month = 29;
            }else{
                number_of_days_in_a_month = 28;
            }
            break;
        case 3:
            number_of_days_in_a_month = 31;
            cout<<"--March "<<year<< " -- \n";
            break;
        case 4:
            number_of_days_in_a_month = 30;
            cout<<"--April "<<year<< " -- \n";
            break;
        case 5:
            number_of_days_in_a_month = 31;
            cout<<"--May "<<year<< " -- \n";
            break;
        case 6:
            number_of_days_in_a_month = 30;
            cout<<"--June "<<year<< " -- \n";
            break;
        case 7:
            number_of_days_in_a_month = 30;
            cout<<"--July "<<year<< " -- \n";
            break;
        case 8:
            number_of_days_in_a_month = 31;
            cout<<"--August "<<year<< " -- \n";
            break;
         case 9:
            number_of_days_in_a_month = 30;
            cout<<"--September "<<year<< " -- \n";
            break;
        case 10:
            number_of_days_in_a_month = 31;
            cout<<"--October "<<year<< " -- \n";
            break;
        case 11:
            number_of_days_in_a_month = 30;
            cout<<"--November "<<year<< " -- \n";
            break;
        case 12:
            number_of_days_in_a_month = 31;
            cout<<"--December "<<year<< " -- \n";
            break;
    }   

    cout<<setw(data_width)<<"Mon";
    cout<<setw(data_width)<<"Tue";
    cout<<setw(data_width)<<"Wed";
    cout<<setw(data_width)<<"Thur";
    cout<<setw(data_width)<<"Fri";
    cout<<setw(data_width)<<"Sat";
    cout<<setw(data_width)<<"Sun\n";

    
    for(unsigned int i{1};  i < starting_day;  ++i){
            cout <<setw(data_width) <<  ""; 
            ++ day_counter;
                if(day_counter == 7){
                    cout << "\n"; 
                    day_counter = 0;
                }     
    }

    for(unsigned int j{1} ;  j <= number_of_days_in_a_month;  ++j){ 
            cout <<setw(data_width) << j;
            ++day_counter;
                if(day_counter == 7){
                    cout <<"\n";
                    day_counter = 0;
                }      
       
     }

     starting_day = day_counter+1;
     day_counter = 0;
     cout<< "\n\n";

}

return 0;
}
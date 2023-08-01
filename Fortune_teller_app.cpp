

#include<iostream>
#include<ctime>
using namespace std;
 int main () {
   
    srand(time(0));
        
     char prediction0[] {"You are learning Painting. "};
     char prediction1[] {"You got job offer from FAANG "};
     char prediction2[] {"You are learning cooking. "};
     char prediction3[] {"You are learning driving. "};
       bool end {false};

       const int max_length {15} ;
       char name[max_length]{};

        cout<<"What's Your name? \n";
        cin.getline(name,max_length);

    while (!end){
        size_t rand_no = static_cast<size_t>((rand() % 5));

        switch(rand_no){
            case 0:
                cout<<prediction0<<"\n";
                break;
            case 1: 
                cout<<prediction1<<"\n";
                break;
            case 2:
                cout<<prediction2<<"\n";
                break;
            case 3:
                cout<<prediction3<<"\n";
                break;
            default:
                cout<<"You are chilling at home on Sunday. \n";
        }      

            cout<<"Do you want me to try again?(Y | N)  \n";

            char go_on;
            cin>>go_on;

            end = ((go_on == 'Y') ||(go_on == 'y')) ? false : true;
    }
      
       cout<<"That's all i have, Thanks. ";
       return 0;
 }

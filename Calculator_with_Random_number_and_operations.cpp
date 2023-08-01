#include<iostream>
#include<ctime>
using namespace std;
int main () {
    bool end {false};
    srand (time(0));
    cout<<"Welcome to the greatest calculator on earth! ";
    char operations [][10] {
        "+",
        "-",
        "*",
        "/"

    };
    while(!end){
            size_t rand_Number_1 = static_cast<size_t>(rand()% 200);
            size_t rand_Number_2 = static_cast<size_t>(rand()% 200);
            size_t rand_operation = static_cast<size_t>(rand()% 5);
            operations[rand_operation];
            int result;
            cout<<"What's the result of "<< rand_Number_1 <<" "<<operations[rand_operation] << " "<< rand_Number_2 << ": ";
            cin>>result;

            switch(rand_operation){
                    case 0 : 
                    if(result == ( rand_Number_1 + rand_Number_2)){
                        cout << "Congratulations! You got the correct result "<< result << "\n";
                    }else{
                        cout << "Naah! the correct result is : "<< rand_Number_1 + rand_Number_2<< "\n";
                    }
                    break;

                    case 1 : 
                    if(result == ( rand_Number_1 - rand_Number_2)){
                        cout << "Congratulations! You got the correct result "<< result << " \n";
                    }else{
                        cout << "Naah! the correct result is : "<< rand_Number_1 - rand_Number_2<<"\n";
                    }
                    break;
                    
                    case 2 : 
                    if(result == ( rand_Number_1 * rand_Number_2)){
                        cout << "Congratulations! You got the correct  result "<< result << "\n";
                    }else{
                        cout << "Naah! the correct result is : "<< rand_Number_1 * rand_Number_2<<"\n";
                    }
                    break;
                    
                default: 
                if(result == ( rand_Number_1 / rand_Number_2)){
                        cout << "Congratulations! You got the correct result "<< result << "\n";
                    }else{
                        cout << "Naah! the correct result is : "<< rand_Number_1 / rand_Number_2<<"\n";
                    }
                    break;
        }
               cout<<"Do you want anything else? [Y | N]\n";
               char go_on;
               cin>>go_on;
               end = ((go_on == 'Y') || (go_on == 'y'))?false:true;

    }
    
}

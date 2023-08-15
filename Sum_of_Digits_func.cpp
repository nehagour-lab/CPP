#include<iostream>
using namespace std;

int sum_of_digits(int number) {
    int sum =0;
    int digit {};
    while (number>0) {
            int digit = number%10;
            number = number / 10;
            sum  = sum + digit;
    }  return sum;
}

int main(){
    
    cout<<"Sum of Digits are "<<sum_of_digits(19)<<"\n";
}
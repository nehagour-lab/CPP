#include<iostream>
#include<math.h>
using namespace std;
int main (){
//Hello world
//cout<<"Hello World";

//add two variable
// cout<<"Enter two numbers\n";
// int a;
// cin>>a;
// int b;
// cin>>b;
// int c;
// cout<<"c: "<<a+b;

//Maximum number of an array

// int array_1 [] {111,20,30000,4,50};
// int max_array {};
// for(int i {0}; i<size(array_1); i++){
//     if (max_array<array_1[i]){
//         max_array = array_1[i];
//     }
// }
//         cout<<max_array<<"\n";
// }

// Sum of digits
int n = 145;
int sum {0}, digits;
while (n !=0){
    digits = n%10;  
    sum = sum+digits;
    n = n/10; 
}
cout<<"Sum: "<<sum<<"\n";
 
//Swap two numbers using third variable
// int a {10};
// int b {20};
// int temp;
// cout<<"a: "<<a<<"\n";
// cout<<"b: "<<b <<"\n";
// temp = a;
// a = b;
// b= temp;
// cout<<"a: "<<a<<"\n";
// cout<<"b: "<<b <<"\n";


//swap two numbers without third variable
// int a {10};
// int b {20};
// cout<<"A: "<<a<<" "<<"B: "<<b<<"\n";
// a = a+b;
// b = a-b;
// a = a-b;
// cout<<"A: "<<a<<" "<<"B: "<<b<<"\n";

//prime number

// cout<<"Enter a number: ";
// int number;
// cin>>number;
// bool is_prime {true};
// for(int i {2}; i <=number/2; i++){
//     if (number%i==0){
//         is_prime = false;
//         break;
        
// }
// if (is_prime)
//     cout<<"prime";
// else
//     cout<<"not a prime";


//reverse of digit
// int number = 5609;
// int result =0,digit;
// while(number !=0){
//     digit = number%10;
//     result = result *10 +digit;
//     number = number /10;
// }
// cout<<result<<"\n";
// }

//reverse of a number and palindrome or not

// int reverse (int number) {
//     int result =0,digit;
//     while(number !=0){
//          digit = number%10;
//          result = result *10 +digit;
//          number = number /10;
//     }
//     return result;
// }

// int main(){
//     int number = 1921;
//     int number_2 = reverse(number);
//     if (number == number_2 )
//         cout<<"Palindrome";
//     else
//         cout<<"Not a palindrome no.";

// }

//factorial number
// int factorial(int n){
//     int res = 1;
//     for (int i {2}; i<=n; i++){
//         res= res*i;
//     }
//     return res;
// }

// int main (){
//     int a = 5;
//     cout<<factorial(a)<<"\n";
//     return 0;
// }


//ARMSTRONG NUMBER
// int armstrong_no (int n){
//     int res = 0;
//     int digit;
//     while(n!= 0){
//         digit = n% 10;
//         res = res +(digit *digit*digit);
//         n = n/10;
//     }
//     return res;

// }

// int main () {
//     int a = 371;
//     cout<<armstrong_no(a)<<"\n";
//     if (a == armstrong_no(a)) 
//         cout<<"yes";
//     else
//         cout<<"no";
//     return 0;
 }































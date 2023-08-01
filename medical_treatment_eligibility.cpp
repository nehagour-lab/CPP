#include <iostream>
using namespace std;
int main() {
    int age {};
     cout<<"Please type your age\n";
     cin>>age;
     if (age >=21) {
      if (age <=39){
        cout<<"You are eligible for medical treatment\n";
      }else {
        cout<<"Sorry,You are too old for medical treatment\n";
      }
     } else {
        cout <<"Sorry,You are too young for medical treatment";
     }
  }

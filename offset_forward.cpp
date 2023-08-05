#include<iostream>
using namespace std;
int main () {

int data [] {1,3,5,6,7,8,9,10};
int offset = 2;
cout<<"element is "<<offset <<" slots away from beginning is : "<<*(data+offset);
}

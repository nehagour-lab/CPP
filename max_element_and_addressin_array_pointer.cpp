#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int data[] {1000,2,31,4,5};

    int n = sizeof(data)/sizeof(data[0]);                            
    cout<<"Array is : \n";

    for(int i{0}; i< n; ++i)
      cout << data[i]<<"  ";
    
    int max_data = *max_element(data, data+n);
    int *address_of_max_element {};
    address_of_max_element = &max_data;
    cout<<"\nMAX ELEMENT : "<<max_data<<"\n";
    cout<<"Address of "<<max_data<<" is " <<address_of_max_element<<"\n";
}

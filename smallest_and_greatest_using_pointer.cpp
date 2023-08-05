//Write a program to find out the greatest and the smallest among three numbers using pointers.

#include<iostream>
using namespace std;
int main (){
int n1, n2,n3, smallest, greatest ;
int *p_n1{&n1}, *p_n2{&n2}, *p_n3{&n3};
cout<<"Enter three numbers: \n";
cin>>n1>>n2>>n3;
smallest = *p_n1;
greatest = *p_n2;
if (*p_n2<smallest)
    smallest = *p_n2;

if(*p_n3<smallest)
    smallest = *p_n3;

if (*p_n1> greatest)
    greatest = *p_n1;

if(*p_n3>greatest)
    greatest = *p_n3;  

cout<<"Greatest: "<<greatest<<" Smallest: "<<smallest<<"\n";
}   

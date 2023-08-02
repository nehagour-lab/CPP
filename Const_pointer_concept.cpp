#include <iostream>
using namespace std;
int main () {
    //Simple integer pointer and then modification 
    int *p_n1{};
    int n1 {10};
    p_n1 = &n1;
            cout<<"n1 : "<<n1<< "\n";
            cout<<"address of n1 : "<<&n1<< "\n";
            cout<<"Value of n1 : "<<*p_n1<< "\n";
    n1 +=5;
            cout<<"n1 : "<<n1<< "\n";
            cout<<"address of n1 : "<<&n1<< "\n";
            cout<<"value of n1 : "<<*p_n1<< "\n";




//NON CONST POINTER TO NON CONST DATA

int *a{nullptr};
int b{20};
a = &b;
cout<<"b : "<<b<<"\n";
cout<<"&b: "<<a<<"\n";
cout<<"*a : "<<*a<<"\n";
cout<<"\n";
//As pointer pointed to non const data so we can modify the non const data 
*a = 432;
cout<<" a : "<<a<<"\n";
cout<<"*a: "<<*a<<"\n";
cout<<"b : "<<b<<"\n";
cout<<"\n";

// Now the we can modify non const pointer or address and point it to different data.
int c {200};
a = &c;
cout<<"c : "<<c<<"\n";
cout<<"a: "<<a<<"\n";
cout<<"*a "<<*a<<"\n";
cout<<"b: "<<b<<"\n";



//POINTER TO CONST: Pointer can modify but value can't

int a {600};
const int *b {&a}; //const appied on variable, not on address
cout<<"a: "<<a<<"\n";
cout<<"b: "<<b<<"\n";
cout<<"\n";

//*b = 400; can't modify the value because it is constant literal
// as we can modify the address so by assigning new data 
int c{500};
b = &c;
cout<<"c: "<<c<<"\n";
cout<<"b:"<<b<<"\n";
cout<<"*b: "<<*b<<"\n";


//CONST POINTER
int  d {35};
const int *p_d{&d};
cout<<"d: "<<d<<"\n";
cout<<"p_d: "<<p_d<<"\n";
d = 40;
p_d =&d; // address of d did not change even we have chang the value:
cout<<"d: "<<d<<"\n";
cout<<"p_d: "<<p_d<<"\n";


//CONST POINTER CONST DATA

const int e {100};
const int* const p_e{&e};
cout<<"e: "<<e<<"\n";
cout<<"p_e: "<<p_e<<"\n";
cout<<"*p_e: "<<*p_e<<"\n";
// int f = 200;                either modifying anything will through compiler error
// cout<<"f: "<<f<<"\n";
// p_e = &f;
// cout<<"p_e: "<<p_e<<"\n";
// cout<<"*p_e: "<<*p_e<<"\n";

}

// This program telling the difference between the addresses or 
//distance between pointers not the values
#include<iostream>
using namespace std;
int main () {

int scores[5] = {10,100,1000,100,200};
int *p_score = &scores[1];
int *p_score_2 = &scores[4];

ptrdiff_t pos_diff = p_score_2 - p_score;
ptrdiff_t neg_diff = p_score - p_score_2;
cout<<pos_diff<<"\n";
cout<<neg_diff<<"\n";

}
#include <iostream>
#include <vector>
#include "prog_8.h"

void pay_less(){
    
    std::vector<double> unit_prices {10.4,21.5,14.0,15.2,7.9};
    std::vector<double> number_of_items{60,20,10,30,20,50};
    double least_cost {99999};
    unsigned int count {0};
    while(count <5){
    if((unit_prices[count] * number_of_items[count] )< least_cost){
        least_cost = unit_prices[count]* number_of_items[count];
         }
    
    ++count;}
    std::cout << "The least I can pay is  : " << least_cost;
}
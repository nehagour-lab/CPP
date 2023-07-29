#include "prog_1.h"

bool is_leap_year( unsigned int year){
   bool is_leap{};
    
    if (((year % 400 == 0) && ( year%100 == 0)) || ((year%4 == 0 ) && (year %100 != 0)) ){
            is_leap =true;
        } else {
            is_leap =false;
    } 
    
    return is_leap;
}
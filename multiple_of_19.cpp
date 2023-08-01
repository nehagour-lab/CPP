#include <iostream>
#include "prog_9.h"

void multiples_of_19(){

     int multiple_of_19 {100};
     do {
         if (multiple_of_19 % 19 ==0){
        std::cout << multiple_of_19 <<" ";
         }
        ++multiple_of_19;
        } while(multiple_of_19 < 1001);
       }

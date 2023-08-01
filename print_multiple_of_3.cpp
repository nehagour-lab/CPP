#include <vector>
#include <iostream>
#include "prog_7.h"

void print_multiples_of_3(){
    
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};
    for(int value : numbers){
      if (value%3 ==0) {
        std::cout <<value<<" ";
      }
    }
}

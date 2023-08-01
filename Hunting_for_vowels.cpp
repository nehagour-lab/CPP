#include <iostream>
#include "prog_11.h"

void hunt_for_vowels(char message[], unsigned int size){
    

  unsigned int vowel_count{};//Initialized to zero
  
  //Your code should go below this line

  for(unsigned int i{}; i < size;++i){

    if((message[i] == 'A')||(message[i] == 'E')||(message[i] == 'I')||(message[i] == 'O')||(message[i] == 'U')||(message[i] == 'a')||(message[i] == 'e')||(message[i] == 'i')||(message[i] == 'o')||(message[i] == 'u')){
      ++vowel_count;
    }

    
    
}
  
  
  
  std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    
}
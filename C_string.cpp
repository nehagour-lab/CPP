#include<iostream>
#include<cstring>
using namespace std;

int main (){
    // char input_char ('*');
    // if (isalnum(input_char) )
    // cout<<"ALPHANUMERIC";
    // else 
    // cout<<"Not a alphanumeric";
    // char input_char ('7');
    // if (isalpha(input_char) )
    // cout<<"alphabetic";
    // else 
    // cout<<"Not a alphbetic";
    // char input_char [] {"Hello Neha! We are happy to offer you your dream job"};
    // size_t blanks{};
    // for(int i {0}; i<size(input_char); i++){
    //     if (isblank(input_char[i])){
    //     ++blanks;
    // }  } 
    // cout<<"Blanks are :"<<blanks<<"\n";

//    char input_char [] {"Hello Neha! We are happy to offer you your DREAM job"};
//    size_t uppercase {};
//    size_t lowercase {};
//    for (auto character: input_char){
//     if (isupper(character)){
//         ++uppercase;
//     }
//     if (islower(character)){
//         ++lowercase;
//     }
//     }
//     cout<<"Lowercase: "<<lowercase<<"\n";
//     cout<<"Uppercase: "<<uppercase<<"\n";

//     char digits {'7'};
//     if(isdigit(digits))
//         cout<<"Its a digit\n";
//     else 
//         cout<<"Its not a digit\n";


// char input_char[] {"HELLO Neha !"};
// char destination_str [size(input_char)] ;
// char destination_lower_str [size(input_char)] ;
// for(size_t i {0}; i<size(input_char); i++){
//     destination_str[i] =  toupper(input_char[i]);
// }
// for(size_t i {0}; i<size(input_char); i++){
//     destination_lower_str[i] =  tolower(input_char[i]);
// }
// cout<<destination_str<<"\n";
// cout<<destination_lower_str<<"\n";

// char message [] {"The Sky is blue my friend"};
// size_t vowel_count {};
// size_t consonant_count{};
// for (size_t i {0}; i< size(message); i++){
//     if (isalpha(message[i])){
//         if ((message[i] == 'A')  || (message[i] == 'E')  ||
//         (message[i] == 'I')  || (message[i] == 'O')  || 
//         (message[i] =='U')   || (message[i] == 'a')  || 
//         (message[i] == 'e')  || (message[i] == 'i')  ||
//         (message[i] == 'o')  || (message[i] =='u') ) {
//               ++vowel_count;
//         } else { 
//               ++consonant_count;
//         } 
//     }
// }
//     cout<<"The String contains "<<vowel_count <<" Vowels and "<< consonant_count <<" Consonant\n";

//  char message [] {"The Sky is blue my friend"};
//  size_t blankout{};
//  for (size_t i {0}; i<size(message); i++){
//     if (isblank (message[i])){
//         cout<<"message is blank at ["<<i<<"] array index\n";
//         ++blankout; 
//     }
//  }cout<<"Total number of blanks are "<<blankout <<"\n";

//  char message [] {"The Sky is blue my friend"};
//  char *result{nullptr};
//  result = new char[size(message)];
//  for (size_t i {0}; i<size(message); i++){
//     if (isspace(message[i])){
//         result[i] = '_'; 
//     } else {
//         result[i] = message[i];
//     }
//  }cout<<result<<"\n";


const char message_1 [] {"The Sky is blue my friend"};
const char *message_2 {"The Sky is blue my friend"};
cout<<"Length of string 1 : "<<strlen(message_1)<<"\n";
cout<<"Length of string 2 : "<<strlen(message_2)<<"\n";
cout<<"size of string 1 : "<<sizeof(message_1)<<"\n";
cout<<"size of string 2 : "<<sizeof(message_2)<<"\n";
}
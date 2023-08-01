#include<iostream>
#include<iomanip>
using namespace std;
//*********************************************************************************
//Declaration of multid array, will print garbage value

// int main () {
//     int package [2][3];
//     for (size_t i{0}; i<2; ++i){
//         for (size_t j{0}; j<3; ++j){
//             cout <<package[i][j]<< " ";
//         }
//     }
// }
//**********************************************************************************
// Define 2D array with the hardcoded value in loop
// int main () {
//     int package [2][3]
//     {
//         {1,2,3},
//         {4,5,6}
//     };
//     for (size_t i{0}; i<2; ++i){
//         for (size_t j{0}; j<3; ++j){
//             cout <<package[i][j]<< " ";
//         }
//         cout<<"\n";
//     }
// }
//***********************************************************************************
//Define 2D array without hardcode
// int main () {
//     int package [2][3]
//     {
//         {1,2,3},
//         {4,5,6}
//     };
//     for (size_t i{0}; i<size(package); ++i){
//         for (size_t j{0}; j <size(package[i]); ++j){
//             cout <<package[i][j]<< " ";
//         }
//         cout<<"\n";
//     }
// }

//************************************************************************************
//3D arrays are defined in the same way. We just use three sets of indexes
// int main () {
//     int house_block [5][3][2]{
//         {
//             {1,2}, {3,4},{5,6}
//         },
//         {
//             {7,8}, {9,10},{11,12}
//         },
//         {
//             {13,14}, {15,16},{17,18}
//         },
//         {
//             {19,20}, {21,22},{23,24}
//         },
//         {
//             {25,26}, {27,28},{29,30}
//         }

//     };
//     for (size_t i{0}; i<size(house_block); ++i){
//         for (size_t j{0}; j <size(house_block[i]); ++j){
//             for(size_t k{0}; k<size(house_block[i][j]); ++k){
//                     cout <<house_block[i][j][k]<<"  ";
//             }
//             cout<<setw(5);
//         }
//         cout<<"\n";
//     }
// }
//*************************************************************************************
//CONSTANT SIZE  by omitting left one.
// int main () {
//     const size_t Num_cols {3};
//     int package [][Num_cols]
//     {
//         {1,2,3},
//         {4,5,6}
//     };
//     for (size_t i{0}; i<size(package); ++i){
//         for (size_t j{0}; j <size(package[i]); ++j){
//             cout <<"items ("<<i<<","<<j<<") = "<<package[i][j]<< "\n";
//         }
//     }
// }

//***********************************************************************************

	//For 3d and really any multi dimensional array , you have to specify
	//the number of elements in []'s , only the left most is not mandatory.
	//Below is the example for 3D reproduced.Omitting the 3 or the 2 or both
	//will cause a compile error.
// int main () {
//     //const size_t num_rows {}
//     int house_block [][3][2]{
//         {
//             {1,2}, {3,4},{5,6}
//         },
//         {
//             {7,8}, {9,10},{11,12}
//         },
//         {
//             {13,14}, {15,16},{17,18}
//         },
//         {
//             {19,20}, {21,22},{23,24}
//         },
//         {
//             {25,26}, {27,28},{29,30}
//         }
//     };

//     for (size_t i{0}; i<size(house_block); ++i){
//         for (size_t j{0}; j <size(house_block[i]); ++j){
//             for(size_t k{0}; k<size(house_block[i][j]); ++k){
//                     cout <<house_block[i][j][k]<<"  ";
//             }
//             cout<<setw(5);
//         }
//         cout<<"\n";
//     }
// }

//**************************************************************************************
	//If you put less elements than the amount specified in the declaration, the compiler
    //will automaticaly fill out those left out with 0 or '\0' is the array is of char.
    // Change the array to int house_block [] [3] [3], and because all inner arrays have 3,
    // elements, the fourth will be autofilled with 0.
    // Also remove some other elements  The left out indexes will be auto filled with zeros
// int main () {
//     int house_block [][3][3]{
//         {
//             {1,2}, {3,4},{5,6}
//         },
//         {
//             {7,8}, {9,10},{11,12}
//         },
//         {
//             {13,14}, {15,16},{17,18}
//         },
//         {
//             {19,20}, {21,22},{23,24}
//         },
//         {
//             {25,26}, {27,28},{29,30}
//         }

//     };


//Modify the element in multi dimensional array
//     house_block[0][0][2] = 1000;
//     house_block[0][1][1] = 600;
//     for (size_t i{0}; i<size(house_block); ++i){
//         for (size_t j{0}; j <size(house_block[i]); ++j){
//             for(size_t k{0}; k<size(house_block[i][j]); ++k){
//                     cout <<house_block[i][j][k]<<"  ";
//             }
//             cout<<setw(5);
//         }
//         cout<<"\n";
//     }
// }










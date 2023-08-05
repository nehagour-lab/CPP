#include<iostream>
using namespace std;
int main () {
    //int data_1 []{1,2,3};
    //int data_2 []{4,5,6};
    int data_1[3];
    int data_2[3];

    int *p_data1 {data_1};
    int *p_data2 {data_2};
    int *merged_data {nullptr};

    merged_data = new int (size(data_1)+ size(data_2)); //allocating memory
    int new_array = *merged_data;

    cout<<"Enter data_1 Array: \n";
    for(size_t i {0}; i<3; i++) {   
        cin>>data_1[i];
    }
    cout<<"Enter data_2 Array: \n";
    for(size_t j {0}; j<3; j++){
        cin>>data_2[j];
    }

    cout<<"A new merged array is : \n";
    for (size_t i{0}; i<size(data_1); ++i){
        new_array = *(p_data1+i);
          cout<<new_array <<" ";
    }
    for (size_t j{0}; j<size(data_2); ++j){
        new_array = *(p_data2+j);
         cout<<new_array <<" ";
    }

    delete merged_data;	//release memory
    merged_data = nullptr;	// Resetting memory
    
}
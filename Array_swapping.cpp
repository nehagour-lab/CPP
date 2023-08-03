#include<iostream>
using namespace std;
int main(){

        int array_1 [] {1,2,3,4};
        int array_2 []{5,6,7,8};
        int *p_array_1 {array_1};
        int *p_array_2 {array_2};
        int *temp {nullptr};
            cout<<"Array 1 is : ";
            for(size_t i {0}; i<=3; i++)
            cout<<array_1[i] << " ";

            cout<<"\n";
            cout<<"Array 2 is : ";
            for(size_t j {0}; j<=3; j++) 
            cout<<array_2[j]<< " ";

             temp = p_array_1;
             p_array_1 = p_array_2;
             p_array_2 = temp;

            cout<<"\n After Swapping both array: \n";
            cout<<"Array 1 is : ";
            for(size_t i {0}; i<=3; i++)
            cout<<p_array_1[i] <<" ";

            cout<<"\n";
            cout<<"Array 2 is: ";
            for(size_t j {0}; j<=3; j++)
            cout<<p_array_2[j]<< " ";
            

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main() {
    int array1[3];
    int array2[3];
    int *p_array1 {array1};
    int *p_array2 {array2};
    int *temp {nullptr};

    cout<<"Array 1: ";
    for(size_t i{0}; i<size(array1); i++){
        cin>>array1[i];
    }

    cout<<"Array 2: ";
    for(size_t j{0}; j<size(array2); j++){
        cin>>array2[j];
    }

    temp = p_array1;
    p_array1 = p_array2;
    p_array2 = temp;

    cout<<"After swapping of arrays \nArray 1: ";
    for(size_t i{0}; i<3; i++)
        cout<<p_array1[i]<< " ";
    
    cout<<"\n Array 2 : ";
    for(size_t j{0}; j<3; j++)
        cout<<p_array2[j]<< " ";
}
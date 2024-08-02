#include <iostream>

// Write a C++ program that takes 5 integers from the user, 
// stores them in an array, and then finds and displays the
// largest and smallest integers in the array.
int main(){
    int arr[5];

    std::cout<<"Enter 5 numbers: \n";
    for(int i = 0; i < 5; i++){
        std::cin>>arr[i];
    }

    int max = arr[0];
    int least = arr[0];

    for(int i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < max){
            least = arr[i];
        }
    }

    std::cout<<"The largeset number is "<< max <<std::endl;
    std::cout<<"The smallest number is "<< least <<std::endl; 
        return 0;
}
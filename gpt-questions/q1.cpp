#include <iostream>

// Write a C++ program that takes a number as input from the 
// user and determines whether it is positive, negative, or zero.
int main(){
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    if(num > 0)
        std::cout<<"The number is Positive \n";
    else if(num < 0)
        std::cout<<"The number is Negative \n";
    else
        std::cout<<"The number is a Zero \n";

        return 0;
}
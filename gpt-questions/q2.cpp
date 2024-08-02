#include <iostream>

// Write a C++ program that prints the multiplication
// table for a given number up to 10.
int main(){
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;

    for(int i=1; i <=10; i++){
        std::cout<<num<<" * "<<i<<" = ";
        std::cout<<num*i<<std::endl; 

    }
    return 0;

}
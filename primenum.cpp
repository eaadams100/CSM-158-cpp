#include <iostream>


int main(){
    int number;
    std::cout<<"NUMBER: "<<std::endl;
    std::cin>>number;

    bool isPrime=true;
    for(int i=2; i<number; i++){
        if(number%i==0){
            isPrime=false;
            break;
        } 
    }
    if(isPrime){
        std::cout<<"Prime number";
    }
    else{
        std::cout<<"Not Prime number";
    }
    return 0;
}
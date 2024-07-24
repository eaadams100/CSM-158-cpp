#include <iostream>

//calculator using switch
int main(){
    double num1, num2;
    char op;
    std::cout<<"Num1 = ";
    std::cin>>num1;

    std::cout<<"Num2 = ";
    std::cin>>num2;

    std::cout<<"Operator : ";
    std::cin>>op;

    std::cout<<"Result = ";

    switch (op){
        case '+':
            std::cout<<num1+num2;
            break;
        
        case '-':
            std::cout<<num1-num2;
            break;

        case '*':
            std::cout<<num1*num2;
            break;
        
        case '/':
            if(num2==0){
                std::cout<<"Can't divide by zero";
            }
            else{
                std::cout<<num1/num2;
            }
            break;
        
        default:
            std::cout<<"Invalid Operator";
            break;
    }
    return 0;
}
#include <iostream>

int main(){
    // a computer solution to interchange two variables x and y

    int x, y;
    int temp;

    std::cout<<"Enter the value of x: ";
    std::cin>>x;

    std::cout<<"Enter the value of y: ";
    std::cin>>y;

    std::cout<<"x = "<<x<<"\n";
    std::cout<<"y = "<<y<<"\n";

    temp=x;
    x=y;
    y=temp;

    std::cout<<"\nnew x = "<<x<<"\n";
    std::cout<<"new y = "<<y<<"\n";

    return 0;

}
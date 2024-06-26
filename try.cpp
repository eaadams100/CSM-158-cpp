#include <iostream>

int main(){
    //finding the average age of n children
    int n;
    int age;
    int sum=0;
    int counter=0;
    double average;

    std::cout<<"Enter the number of children: ";
    std::cin>>n;

    while(counter<n){
        std::cout<<"Enter the age of a child: "<<"\n";
        std::cin>>age;
        sum+=age;
        counter++;
    }
    average=sum/n;
    std::cout<<"The average of " << n <<" children is:"<< average<< "\n";

    return 0;
}
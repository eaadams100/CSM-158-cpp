#include <iostream>
#include <cmath>

double getVar(double num[],double mean,int n);
double getSum(int n,double num[]);

int main(){
    int n;
    double mean;
    double variance;
    double SD;
    std::cout<<"--------------------------------\n";
    std::cout<<"Enter the number of elements: ";
    std::cin>>n;
    double num[n];

    for(int i=0; i<n; i++){
        std::cout<<"Element "<<i+1<<" = ";
        std::cin>>num[i];
    }

    std::cout<<"Sum = "<<getSum(n,num)<<std::endl;
    mean=getSum(n,num)/n;
    std::cout<<"Mean = "<<mean<<std::endl;
    variance=getVar(num,mean,n);
    std::cout<<"Variance = "<<variance<<std::endl;
    std::cout<<"Standard Deviation = "<<sqrt(variance)<<std::endl;
    std::cout<<"--------------------------------";
    return 0;
}
double getSum(int n,double num[]){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += num[i];
    }
    return sum;
}
double getVar(double num[],double mean,int n){
    double variance=0;
    for(int i=0; i<n; i++){
        variance += pow(num[i]-mean,2);
    }
    return variance/n;
}

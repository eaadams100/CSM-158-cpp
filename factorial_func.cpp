#include <iostream>

int factorial(int n);

int main(){
    int n;
    int r;
    int nCr;

    do{
        std::cout<<"The value of n = ";
        std::cin>>n;
        std::cout<<"The value of r = ";
        std::cin>>r;
    }while(r<0||r>n);

    nCr=factorial(n)/(factorial(r)*factorial(n-r));

    std::cout<<n<<" combination "<<r<<" is "<<nCr<<"\n";

    return 0;
}

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
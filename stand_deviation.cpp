#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double num[]={1,2,3,4,5};
    double sum,average,diffmean,standiv;

    for(int i=0; i<5; i++){
        sum=sum+num[i];
    }
    cout<<"the sum = "<<sum<<"\n";
    average=sum/5;
    cout<<"average of set of numbers is: "<<average<<"\n";

    for(int i=0; i<5; i++){
        diffmean=diffmean+pow(num[i]-average,2);

    }
    standiv=sqrt(diffmean/5);
    cout<<"standard deviation is: "<<standiv<<"\n";


    return 0;
}

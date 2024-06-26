#include <iostream>
using namespace std;

int main(){
    //factorial of n
    int num;
    int fact=1;

    cout<<"Enter the number: "<<"\n";
    cin>>num;

    if(num < 0){
        cout<<"the factorial of "<< num << " cannot be calculated"<<"\n";
    }
    else{
    
        for (int i=num; i>0; i--){
            fact=fact*i;
        }
        cout<<"the factorial of "<< num << " is "<< fact <<"\n";
    }
 
    return 0;
}
#include <iostream>

int main(){
    int count=1;

    do{
        std::cout<<count<<"\n";
        count++;
    }while(count<=3);
    /*
        the statement inside the do-while loop run at 
        least once until the condition is false
    */
   return 0;
}
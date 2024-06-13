#include <iostream>


int main(){
    //using the weekday number to calculate the weekday name
    int day;

    std::cout<<"THE WEEKDAY NUMBER IS: ";
    std::cin>>day;
    std::cout<<"Today is ";
    
    switch(day){
        case 1:
            std::cout<<"Monday";
            break;
        case 2:
            std::cout<<"Tuesday";
            break;
        case 3:
            std::cout<<"Wednesday";
            break;
        case 4:
            std::cout<<"Thursday";
            break;
        case 5:
            std::cout<<"Friday";
            break;
        case 6:
            std::cout<<"Saturday";
            break;
        case 7:
            std::cout<<"Sunday";
            break;
    }

}
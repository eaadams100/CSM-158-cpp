#include <iostream>


int main(){
    /*
    employees are paid on an hourly basis at the end of every week
    if an employee works for not more than 40hrs a week, it is considered REGULAR
    if an employee works for hours in excess of 40, it is considered OVERTIME
    regularMale = ghc500/hr
    regularFemale = ghc550/hr
    overtimeMale = 1.5*regularMale
    overtimeFemale = 1.5*regularFemale
    income_tax = 15% * gross pay
    nhcl = 2.5% * gross pay
    direct_tax = 1% * gross pay  

    */

   int hours, regularMale, regularFemale;
   double overtimeMale, overtimeFemale;
   double gross_pay, income_tax, nhcl, direct_tax, eduFund, netPay;
   int no_of_Children;
   char gender;


std::cout<<"------------NETPAY FOR EMPLOYEES IN THE COMPANY------------"<<std::endl;
   std::cout<<"Enter the number of hours you worked: ";
   std::cin>>hours;
   std::cout<<"Are you a male or female? ";
   std::cin>>gender;
   std::cout<<"-------------------------------------------------------------"<<std::endl;
   std::cout<<"Enter the number of children you have: ";
   std::cin>>no_of_Children;

   regularMale = 500;
   regularFemale = 550;
   overtimeMale = 1.5 * regularMale;
   overtimeFemale = 1.5 * regularFemale;

    if(gender == 'M'){
        if(hours <= 40){
            gross_pay = regularMale * hours;
        }
        else{
            gross_pay = regularMale * 40 + overtimeMale*(hours - 40);
        }
    }
    else{
        if(hours <= 40){
            gross_pay = regularFemale * hours;
        }
        else{
            gross_pay = regularFemale * 40 + overtimeFemale*(hours - 40);
        }
    }

    income_tax = 0.15 * gross_pay;
    nhcl = 0.025 * gross_pay;
    direct_tax = 0.01 * gross_pay;

    if(no_of_Children > 3){
        if(gender == 'M'){
        eduFund = 10 * (no_of_Children - 3);
        }
        else{
        eduFund = 20 * (no_of_Children - 3);
        }
    }
    else{
        eduFund = 0;
    }

    netPay = gross_pay - (income_tax + nhcl + direct_tax + eduFund);

    std::cout<<"Your Net Pay is: "<< netPay << std::endl; 

    std::cout<<"------------------------------------------------------------"<<std::endl;

   
   

   
}

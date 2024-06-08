#include <iostream>
using namespace std;

int main()
{
   //Comparing two numbers.
   int x, y;

   cout<<"enter the value of x: ";
   cin>>x;

   cout<<"enter the value of y: ";
   cin>>y;

   if (x>y){
      cout<<x<<" is greater than "<<y;
   }
   else if(x<y){
      cout<<x<<" is less than "<<y;
   }
   else{
      cout<<"The numbers are equal.";
   }
   
    
   return 0;

}
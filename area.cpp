#include <iostream>

//area of rectangle
double area(double length, double width);
int main(){
    double length, width;
    area(length,width);
    return 0;
}
double area(double length, double width){
    std::cout<<"Enter the length: ";
    std::cin>>length;
    
    std::cout<<"Enter the width: ";
    std::cin>>width;

    std::cout<<"Area of the rectangle with length = " <<length<<" and width = " <<width<<" is :"<<length*width;

    return length*width;
}


// #include <iostream>

// // Function to calculate the area of a rectangle
// int calculateArea(int width, int height) {
//     return width * height;
// }

// int main() {
//     int width, height;

//     // Ask the user for the width and height
//     std::cout << "Enter the width of the rectangle: ";
//     std::cin >> width;

//     std::cout << "Enter the height of the rectangle: ";
//     std::cin >> height;

//     // Calculate and display the area
//     int area = calculateArea(width, height);
//     std::cout << "The area of the rectangle is: " << area << std::endl;

//     return 0;
// }

#include <iostream>

int main(){
    const double PI = 3.14159; //keeps this value constant
    //PI = 420.68; this will cause an error 
    const int LIGHT_SPEED = 29978248;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

}
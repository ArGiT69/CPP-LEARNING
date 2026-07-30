#include<iostream>
int main(){
     const double PI = 3.14159;
    // PI = 420.69; even after discommenting it, the value doesn't work
    //it is because const now makes it impossible for PI to change it's value
    //const can be used for placing value of speed of light, value of pi,etc.
    //in short those things whose value cannot be changed
    double radius = 10;
    double circumference =  2 * PI * radius;
    std::cout<< circumference << "cm";

    return 0;
}
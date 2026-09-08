#include<iostream>
void printNumber(const int num);
int main(){
 //const parameters = parameter that is effectively read-only code is
 // more secure and conveys intent useful for references and pointers
int num = 7;
printNumber(num);


    return 0;
}
void printNumber(const int num) {
    // int num = 20; // ERROR! You cannot change a const parameter.

    std::cout << num;
}

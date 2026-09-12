//this prorgram shows how to calculate the factorial of a given number using iterative approach in C++
#include<iostream>
int factorial(int num);
int main(){
    
    std::cout << factorial(10);
    
    
    return 0;
}
int factorial(int num){

    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}
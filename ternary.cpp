#include<iostream>
int main(){
 //ternary operator ?: = replacement to an if/else statement 
 //condition ? expression 1 : expression 2;
 int grade;
 std::cout << "Enter your grades out of 100:\n";
 std::cin >> grade;
 grade >= 32 ? std::cout << "you pass!" : std::cout << "you fail";


    return 0;
}
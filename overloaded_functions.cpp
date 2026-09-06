#include<iostream>
void bakePizza(std::string topping1, std::string topping2);

int main(){
bakePizza("pepperoni", "mushrooms");

    return 0;
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "!\n";
}
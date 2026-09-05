#include <iostream>
#include <string>

void happyBirthday(std::string name, int age);

int main(){
    std::string name = "Arjit";
    int age = 16;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday Dear " << name << "!\n";
    std::cout << "You are now " << age << "!\n\n";
}
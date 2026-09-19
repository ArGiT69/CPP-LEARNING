#include<iostream>
using std::string;
class Employee{
    public:
    string Name;
    string Company;
    int Age;   
    void introduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    
    }
};
int main(){
    int number;
    Employee employee1;
    employee1.Name = "Parisha";
    employee1.Company = "Arjit";
    employee1.Age = 16;
    employee1.introduceYourself();
    return 0;
}
#include <iostream>
using std::string;
class Employee
{
public:
    string Name;
    string Company;
    int Age;
    void introduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    int number;
    Employee employee1 = Employee("Parisha", "Arjit", 16);
    employee1.introduceYourself();

    Employee employee2 = Employee("Arjit", "Parisha", 16);
    employee2.introduceYourself();

    return 0;
}
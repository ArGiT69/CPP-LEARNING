#include <iostream>
using std::string;
class School
{
public:
    string Name;
    string Address;
    int Estd;
    void introduceYourSchool()
    {
        std::cout << "My school's name is : " << Name << '\n';
        std::cout << "My school's Address is : " << Address << '\n';
        std::cout << "My school was established in : " << Estd << " BS " << '\n';
        std::cout << '\n';
    }
    School(string name, string address, int estd)
    {
        Name = name;
        Address = address;
        Estd = estd;
    }
};
int main()
{
    School school1("Sukuna Secondary School", "Sundarharaincha-10, Morang", 2029);
    school1.introduceYourSchool();
    School school2("Shree Indrapur English Boarding School", "Sundarharaincha-12, Morang", 2064);
    school2.introduceYourSchool();

    return 0;
}
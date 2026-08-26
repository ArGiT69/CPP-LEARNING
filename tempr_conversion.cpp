// this program converts temperature from Fahrenheit to Celsius and vice versa
#include <iostream>
int main()
{
    int choice;
    std::cout << "Enter 1 to convert Fahrenheit to Celsius or 2 to convert Celsius to Fahrenheit:\n";
    std::cin >> choice;
    if (choice == 1)
    {
        double fahrenheit;
        std::cout << "Enter temperature in Fahrenheit:\n";
        std::cin >> fahrenheit;
        double celsius = (fahrenheit - 32) * 5.0 / 9.0;
        std::cout << fahrenheit << " degree Fahrenheit is equal to " << celsius << " degree Celsius.\n";
    }
    else if (choice == 2)
    {
        double celsius;
        std::cout << "Enter temperature in Celsius:\n";
        std::cin >> celsius;
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        std::cout << celsius << " degree Celsius is equal to " << fahrenheit << "degree Fahrenheit.\n";
    }
    else
    {
        std::cout << "Invalid choice. Please enter 1 or 2.\n";
    }
    return 0;
}
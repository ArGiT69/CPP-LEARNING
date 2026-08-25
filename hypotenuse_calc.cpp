#include <iostream>
#include <cmath>
int main()
{
    double a;
    double b;
    double c;
 std::cout << "Enter the value of side a: ";
  std::cin >> a;
  std::cout << "Enter the value of side b: ";
    std::cin >> b;
  a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    std::cout << "The value of hypotenuse is: " << c;

    return 0;
}
#include <iostream>
namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main()
{
    using namespace first;
    std::cout << x;
    //     int x = 0;
    // std::cout<< x ;// it represents the x inside the main()
    std::cout << first::x;  // it represents the x from first namespace
    std::cout << second::x; // it represents the x from second namespace

    return 0;
}
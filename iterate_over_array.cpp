#include <iostream>
int main()
{
    std::string students[] = {"Arjit", "Parisha", "Pabitra", "Leena"};

    for (int i = 0; i < 4; i++)
    {
        std::cout << students[i] << '\n';
    }

    return 0;
}
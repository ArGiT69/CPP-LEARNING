#include <iostream>
int main()
{
    // break = break out of a loop
    //  continue = skip current iteration
    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }
        std::cout << i << '\n';
    }
   for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}
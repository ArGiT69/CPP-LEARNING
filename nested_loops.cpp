#include <iostream>
int main()
{
    int rows;
    int columns;
    int symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;
    std::cout << "How many columns ?: ";
    std::cin >> columns;
    std::cout << "Enter a symbol to use ";
    std:: cin >>symbol;   

        for (int i = 1; i <= rows; i++)
    {   
        for (int j = 1; j <= columns;; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
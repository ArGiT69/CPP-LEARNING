#include <iostream>
int main()
{
    // fill() = Fills a range of elements with a specified value
    //          fill( begin , end, value)
    const int SIZE = 100;   
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/2), "pizza");
    fill(foods + (SIZE/2), foods + SIZE, "ice cream");
    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }
    return 0;
}
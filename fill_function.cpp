#include <iostream>
int main()
{
    // fill() = Fills a range of elements with a specified value
    //          fill( begin , end, value)
    //          we will get the user input and use the fill() function to fill the array
    std::string food[5];
    int size = sizeof(food) / sizeof(food[0]);
    std::string temp;
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter food items you like or click \"q\" to quit " << i + 1  << ": ";
        std::getline(std::cin, temp);
        if(temp == "q" || temp == "Q")
        {
            break;
        }
        else{
            food[i] = temp;
        }
    }
 std::cout << "\nThe food items you entered are: \n";
    for(int i = 0; !food[i].empty(); i++)
    {
        std::cout << food[i] << std::endl;
    }
    return 0;
}
#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int >> pairlist_t;

// typedef std::string text_t;
// typedef int num_t;
using text_t = std::string;
using num_t = int;
// using keyword is more widely used than typedef because it is more suitable for templates
int main()
{
    text_t firstName = "Arjit";
    std::cout << firstName << '\n';
    num_t age = 69;
    std::cout << age << std::endl;
    return 0;
}
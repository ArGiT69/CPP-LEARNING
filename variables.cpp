#include <iostream>
int main()
{
    // //int is a variable used for integers
    // int a;//declaration
    // int p;
    // a = 7;//value assignment
    // p = 1;
    // int sum = a + p ;
    // std::cout << sum;//printing the value
    //doubles is a variable used for storing point-numbers with high precision
    double m = 6.99;
    std::cout<< m <<'\n';
    //Char is a variable used to store single character
    char aalu = 'A';
    std::cout<< aalu <<std::endl;
    char dollarSign = '$';
    std::cout<< dollarSign <<std::endl;
    // boolean 
    // boolean is only present in two states i.e. true and false
    bool student = false;
    bool power = true;
    // string(objects that represents a sequence of text)
    std::string name = "AAROHAN";
    std::cout<< name <<std::endl;
    std::string food = "Bhaat";
    std::cout<< food <<std::endl;
    std::string School = "Sukuna";
    std::cout<< School <<std::endl;
    //to print AAROHAN ate Bhaat and went to Sukuna school we have to do:
    std::cout<< name <<" ate "<< food <<" and went to "<<School <<" school" <<std::endl;

    return 0;
}
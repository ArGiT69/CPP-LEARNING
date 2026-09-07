#include<iostream>
int main(){
 //foreach loop =  loop that eases the traversal over an 
 //                iterable data set

  std::string students[] = {"Arjit", "Parisha", "Pabitra", "Leena"};

    for (std::string students : students)   
    {
        std::cout << students << '\n';
    }



    return 0;
}
#include<iostream>
int main(){
    int *pointer = nullptr; // pointer is initialized to null
    int x = 123;
    pointer = &x; // pointer now points to the address of x

    if(pointer == nullptr){ // check if pointer is null
        std::cout << "Pointer is null" << std::endl;
    } else {
        std::cout << "Pointer is not null, value: " << *pointer << std::endl; // dereference pointer to get value of x
    }

    return 0;
}
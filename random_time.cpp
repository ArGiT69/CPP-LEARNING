#include<iostream>
#include<ctime>
int main(){
// pseudo-random = NOT truly random (but closed)
srand(time(NULL));
int num = (rand() % 100) + 1;

std::cout << num;

    return 0;
}
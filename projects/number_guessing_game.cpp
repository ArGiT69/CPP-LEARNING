#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "Welcome to the Number Guessing Game!\n";
    do{
        std::cout << "enter a number between 1 and 100:";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "Too high! Try again.\n";
        }
        else if(guess < num){
            std::cout << "Too low! Try again.\n";
        }
        else{
            std::cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
        }
    }
    while(guess != num);

    return 0;
}
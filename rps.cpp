// this is an example of rock paper scissors game
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
char getUserChoice();
char getComputerChoice();
void displayChoices(char userChoice, char computerChoice);
void determineWinner(char userChoice, char computerChoice);
int main(){
    double randomNum;
    srand(static_cast<unsigned int>(time(0)));
    char userChoice = getUserChoice();
    char computerChoice = getComputerChoice();
    displayChoices(userChoice, computerChoice); 
    determineWinner(userChoice, computerChoice);       

    return 0;
}
char getUserChoice(){
    char choice;
    std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    std::cin >> choice;
    return choice;
}
char getComputerChoice(){
    int randomNum = rand() % 3;
    if (randomNum == 0)
    return 'R';
    else if (randomNum == 1)
    return 'P';
    else
    return 'S';
}
void displayChoices(char userChoice, char computerChoice){
    std::cout << "You chose: " << userChoice << std::endl;
    std::cout << "Computer chose: " << computerChoice << std::endl;
}
void determineWinner(char userChoice, char computerChoice){
    if (userChoice == computerChoice)
    std::cout << "It's a tie!" << std::endl;
    else if ((userChoice == 'R' && computerChoice == 'S') ||
             (userChoice == 'P' && computerChoice == 'R') ||
             (userChoice == 'S' && computerChoice == 'P'))
    std::cout << "You win!" << std::endl;
    else
    std::cout << "Computer wins!" << std::endl;
}












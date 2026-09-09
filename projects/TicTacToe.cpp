#include<iostream>
#include<ctime>

void drawBoard(char *space);
void playerMove(char *space, char player);
void computeMove(char *space, char computer);
bool checkWinner(char *space, char player, char computer);
bool checkTie(char *space);


int main(){ 
    char space[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
        bool running = true;
        drawBoard(space);
        while(running){
            playerMove(space, player);
            drawBoard(space);
            
            if(checkWinner(space, player, computer)){
                running = false;
                break;
            }
            computeMove(space, computer);
            drawBoard(space);

            if(checkWinner(space, player, computer)){
                running = false;
                break;
            }
        }
    
    return 0; 
}
void drawBoard(char *space){
    std::cout << '\n';
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << "  " << std::endl;
    std::cout << '\n';
}
void playerMove(char *space, char player){
int number;
do {
    std::cout<<"Enter a spot to place a marker (1-9): ";
    std::cin>>number;
    number--;
    if(space[number] == ' '){
        space[number] = player;
        break;
    }
}
while (!number > 0 || !number < 8);
}
void computeMove(char *space, char computer){
 int number;
 srand(time(0));

 while(true){
    number = rand() % 9;
    if(space[number] == ' '){
        space[number] = computer;
        break;
    }
 }
}
bool checkWinner(char *space, char player, char computer){

if(space[0] == space[1] && space[1] == space[2]){
space[0] == player? std::cout<<"Player wins!"<<std::endl : std::cout<<"Computer wins!"<<std::endl;

}


return 0;
}
bool checkTie(char *space){
return 0;
}
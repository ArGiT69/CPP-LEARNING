#include<iostream>
void walk(int steps);
// this is an example of itteration using a for loop. The function walk takes an integer parameter steps and prints a message for each step taken. The main function calls walk with 100 steps, resulting in the message being printed 100 times.
int main(){
    
    walk(100);
    
    return 0;
}
void walk(int steps){
for(int i = 0; i < steps; i++){
std::cout << " You take a new step" << std::endl;
}
}
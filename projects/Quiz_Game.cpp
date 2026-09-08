#include<iostream>
int main(){
    std::string questions[] = {"1. What year was C++ created? :",
                            "2. Who is the creator of C++? :",
                            "3. What is the predecessor of C++? :",
                            "4. Is earth flat? :"};
    std::string options[][4] = {{"A. 1979", "B. 1980", "C. 1983", "D. 1985"},
                            {"A. Bjarne Stroustrup", "B. James Gosling", "C. Dennis Ritchie", "D. Guido van Rossum"},
                            {"A. C", "B. Java", "C. Python", "D. Ruby"},
                            {"A. Yes", "B. No", "C. Maybe", "D. I don't know"}};
    char answerKeys[] = {'C', 'A', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;
    for(int i = 0; i < size; i++){
        std::cout << "------------------------\n";
        std::cout << questions[i] << "\n";
        for(int j = 0; j < 4; j++){
            std::cout << options[i][j] << "\n";
        }
        std::cout << "Enter your answer (A, B, C, D): ";
        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKeys[i]){
            std::cout << "Correct!\n";
            score++;
        }
        else{
            std::cout << "Wrong! The correct answer is: " << answerKeys[i] << "\n";
        }
    }
    std::cout << "------------------------\n";
    std::cout << "Your final score is: " << score << "/" << size << "\n";
    std::cout << "Thank you for playing the Quiz Game!\n";

    return 0;
}
 
#include<iostream>
    enum Day{sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){
    Day today = friday ;

    switch(today){
        case 0: std::cout <<" It is Sunday! \n";
                        break;
        case 1: std::cout <<" It is monday! \n";
                        break;
        case 2: std::cout <<" It is tuesday! \n";
                        break;
        case 3: std::cout <<" It is wednesday! \n";
                        break;
        case 4: std::cout <<" It is thursday! \n";
                        break;
        case 5: std::cout <<" It is friday! \n";
                        break;
        case 6: std::cout <<" It is saturday! \n";
                        break;
    }
    
    return 0;
}
#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0.0;
    int choice = 0;

    std::cout << "Welcome to the Banking Program!" << std::endl;
    std::cout << "Your current balance is: $" << balance << std::endl;
    std::cout << "Please choose an option:" << std::endl;
    std::cout << "1. Show Balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        showBalance(balance);
        break;
    case 2:
        balance += deposit();
        showBalance(balance);
        break;
    case 3:
        balance = withdraw(balance);
        showBalance(balance);
        break;
    case 4:
        std::cout << "Thank you for using the Banking Program. Goodbye!" << std::endl;
        return 0;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }

    return 0;
}
 void showBalance(double balance)
{
    std::cout << "Your current balance is: $" << balance << std::endl;
}
double deposit()
{
    double amount;
    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;

    if (amount <= 0)
    {
        std::cout << "Invalid deposit amount. Please try again." << std::endl;
        return 0.0;
    }

    std::cout << "Successfully deposited: $" << amount << std::endl;
    return amount;
}
double withdraw(double balance)
{
    double amount;
    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;

    if (amount <= 0)
    {
        std::cout << "Invalid withdrawal amount. Please try again." << std::endl;
        return balance;
    }

    if (amount > balance)
    {
        std::cout << "Insufficient funds. Your current balance is: $" << balance << std::endl;
        return balance;
    }

    balance -= amount;
    std::cout << "Successfully withdrew: $" << amount << std::endl;
    return balance;
}

#include <iostream>
#include <string>
#include <conio.h>

double deposit();
double withdraw(double balance);
void showBalance(int balance);

int main()
{

    // Spec:
    // User verify (simple way)
    // Begin transactions :
    //   1.Deposit
    //   2.Withdraw
    //   3.Show Balance

    // Verify User and PIN
    std::string username;
    std::string pin;
    int inputNum;

    std::cout << "Enter Username: ";
    std::cin >> username;
    std::cout << "Enter PIN: ";
    char ch;
    pin = "";

    // replace * as password was put in
    while ((ch = _getch()) != '\r')
    {
        if (ch == 8 && !pin.empty())
        {
            std::cout << "\b \b";
            pin.pop_back();
        }
        else if (ch != 8)
        {
            std::cout << '*';
            pin += ch;
        }
    }

    do
    {
        int balance = 0;
        if (username == "marc" && pin == "091212")
        {
            std::cout << "Please press (1-3) to begin transaction: " << std::endl;
            std::cout << "press 1 to deposit" << std::endl;
            std::cout << "press 2 to withdraw" << std::endl;
            std::cout << "press 3 to show balance" << std::endl;
            std::cout << "press 0 to Exit" << std::endl;
            std::cout << "Enter the number: ";
            std::cin >> inputNum;

            switch (inputNum)
            {
            case 1:
                balance += deposit();
                break;
            case 2:
                balance -= withdraw(balance);
                break;
            case 3:
                showBalance(balance);
                break;
            case 0:
                std::cout << "Good Bye!";
                break;
            default:
                std::cout << "Invalid numbers!" << std::endl;
            }
        }
    } while (inputNum != 0);

    return 0;
}

void showBalance(int balance)
{
    std::cout << "****Your balance is: " << balance << " ****" << std::endl;
}

double deposit()
{

    double deptAmont;

    std::cout << "How much would you like to deposit? ";
    std::cin >> deptAmont;

    if (deptAmont == 0)
    {
        std::cout << "The amount must be greater than $0!!!" << std::endl;
        std::cout << "**********************************" << std::endl;
    }

    std::cout << "Your total deposit amouunt is: " << deptAmont << std::endl;
    std::cout << "**********************************" << std::endl;

    return deptAmont;
}

double withdraw(double balance)
{

    int withAmount;
    std::cout << "How much would you like to withdraw? ";
    std::cin >> withAmount;

    if (withAmount == 0)
    {
        std::cout << "The amount must be greater than $0!!!" << std::endl;
        std::cout << "**********************************" << std::endl;
    }

    if (withAmount > balance)
    {
        std::cout << "Insufficient funds! Try again." << withAmount << std::endl;
    }

    std::cout << "You withdraw: " << withAmount << std::endl;

    return withAmount;
}
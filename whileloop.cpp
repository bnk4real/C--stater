#include <iostream>

int main()
{

    int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    while (number != 0)
    {
        std::cout << number << std::endl;
    }

    return 0;
}
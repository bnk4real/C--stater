#include <iostream>

int main() {

    int days; 

    std::cout << "Enter number of days: ";
    std::cin >> days;

    switch(days){
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        default:
            std::cout << "Enter number only (1-5)";
            break;
    }

    return 0;
}
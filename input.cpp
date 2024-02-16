#include <iostream>

int main(){

    std::string input1;
    int age;

    std::cout << "Enther the name: ";
    std::cin >> input1;
    std::cout << "Enther your age: ";
    std::cin >> age;

    std::cout << "Welcome " << input1 << std::endl;
    std::cout << "You are " << age << std::endl;

    return 0;
}
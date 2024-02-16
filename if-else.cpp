#include <iostream>

int main() {

    double gpa; 

    std::cout << "Enter GPA: ";
    std::cin >> gpa;

    if (gpa < 2.0) {
        std::cout << "You did not pass std test.";
    } else if (gpa <= 2.5) {
        std::cout << "You passed minimun requirement!";
    } else {
        std::cout << "You passed witout requirement!";
    }

    return 0;
}
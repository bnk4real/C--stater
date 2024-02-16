#include <iostream>

int main(){

    // This is a comment 
    std::cout <<"This is C++ starter!" << std::endl;

    // integer
    int age = 30;
    // double
    double gpa = 3.00;
    // boolean
    bool isPaid = true;

    // string
    std::string name = "Marcus Yodkaset";
    std::string text = "concat";

    // Escape line can be either '\n' or std::endl
    std::cout <<"Your name is: " << name << std::endl;
    std::cout <<"Your age is: " << age << std::endl;
    std::cout <<"Your GPA is: " << gpa << std::endl;

    // string concatonation
    std::cout <<"This is " << text << " string" << std::endl;

    return 0;
}
#include <iostream>

// We can pass variable to the function if applicable
// declare function before calling it.

void UserFunction(std::string text);

int main(){

    // parse variable to the function
    std::string txt = "Welcome, ";

    // call function.
    UserFunction(txt);

    return 0;
}

// function is here
void UserFunction(std::string text){
    std::cout << text << "This is a function.";
}
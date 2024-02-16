#include <iostream>

int main(){

    // for (int n = 1; n <= 5; n++) {
    //     std::cout << n << std::endl;
    // }

    for (int n = 1; n <= 20; n+=2) {
        if (n == 20) {
            break;
        } else if (n == 11) {
            continue;
        }
        std::cout << n << std::endl;
    }

    return 0;
}
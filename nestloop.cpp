#include <iostream>

int main(){


    for (int n = 1; n <= 5; n++) {
        std::cout << n << std::endl;
        for (int i = 1; i <= 5; i++){
            if (n == i) {
                continue;
            }
            std::cout << i << std::endl;
        }
    }



    return 0;
}
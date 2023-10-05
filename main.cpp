#include <iostream>
#include <stdlib.h>

void Roll() {
    int number = (rand() % 6) + 1;
    std::cout << "You rolled a " << number << std::endl;
}

int main() {
    int times;
    std::cout << "Times to roll:";
    std::cin >> times;
    for (int i = 0; i<times; i++) {
        Roll();
    }
    std::cin >> times;
    return 0;
}
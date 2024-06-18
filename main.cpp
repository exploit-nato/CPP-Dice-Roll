#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>

const size_t DIE_SIDES = 6;

void Roll(size_t count, std::vector<size_t>& numbersRolled) {
    size_t number = (rand() % DIE_SIDES) + 1;
    numbersRolled.push_back(number);
    std::cout << "Roll #" << std::setw(2) << count << ": You rolled a " << number << '\n';
}

int main(void) {
    srand(static_cast<unsigned int>(time(NULL)));
    size_t times = 0;
    std::cout << "Times to roll: ";
    std::cin >> times;

    if (times <= 0) {
        std::cerr << "Invalid number of times to roll. Exiting...\n";
        return 1;
    }

    std::vector<size_t> numbersRolled;
    for (size_t i = 0; i < times; ++i) Roll(i + 1, numbersRolled);

    std::cout << "Press any key to exit...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

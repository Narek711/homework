#include <iostream>

int main() {
    int height;
    std::cout << "Մուտքագրեք եռանկյան բարձրությունը: ";
    std::cin >> height;

    for (int i = 1; i <= height; ++i) {
      
        for (int j = 0; j < height - i; ++j) {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

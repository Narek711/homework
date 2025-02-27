#include <iostream>
#include <bitset>

int main() {
    int number;
    std::cout << "Մուտքագրեք թիվ: ";
    std::cin >> number;

    std::cout << "Թիվը 2-ական համակարգում: " << std::bitset<32>(number) << std::endl;
        return 0;
}

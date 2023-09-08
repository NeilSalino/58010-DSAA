#include <iostream>
using namespace std;

int main() {
    int Integers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(Integers) / sizeof(Integers[0]);

    for (int i = 0; i < length; ++i) {
        std::cout << "For index " << i << " : " << Integers[i] << std::endl;
    }

    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += Integers[i];
    }

    std::cout << "Computed sum of the integers: " << sum << std::endl;

    return 0;
}
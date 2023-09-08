#include <iostream>
#include <string>

int main() {
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(num) / sizeof(num[0]);

    int insertIndex = 1;
    int newValue = 0;

    for (int i = length; i > insertIndex; --i) {
        num[i] = num[i - 1];
    }

    num[insertIndex] = newValue;

    for (int i = 0; i < length + 1; ++i) {
        if (num[i] == 0) {
            std::cout << "Pretty God ";
        } else {
            std::cout << num[i] << ' ';
        }
    }

    return 0;
}

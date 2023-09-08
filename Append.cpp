#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x[11];

    for (int i = 0; i < 10; i++) {
        x[i] = numbers[i];
    }
    x[10] = 11;

    for (int i = 0; i < 11; i++) {
        cout << x[i] << ' ';
    }
    cout << endl;

    return 0;
}
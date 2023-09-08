#include <iostream>
using namespace std;
int main() {
	int num[] = {5, 4, 3, 2, 1};
	int x = sizeof(num) / sizeof(num[0]);
	
	cout << x << endl;

	return 0;
}
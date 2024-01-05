#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int &reference = a;
	cout << reference << endl;
	int b = 5;
	reference = 5;
	cout << a << endl;

	return 0;
}
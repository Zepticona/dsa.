#include <iostream>
using namespace std;

struct student {
	char name[80];
	int id;
} sakil, lubna;

int main() {
	struct student *p = &sakil;
	cout << p << endl;
	return 0;
}
#include <iostream>
using namespace std;
struct student
{
	int roll;
	char name[80];
};

struct student sakil;

int main() {
	sakil.roll = 17;
	sakil.name[0] = 'S';
	printf("%d\n", sakil.roll);
	printf("%c\n", sakil.name[0]);
	return 0;
}
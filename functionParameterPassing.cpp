#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 45, b = 20;
	swap(&a, &b);
	cout << a << " " << b<< endl ;
	int c = 90;
	int *p; 
	p = &c;
	cout << p << endl;
	cout << *p << endl;
	return 0;
}
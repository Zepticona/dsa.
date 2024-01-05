#include <iostream>
using namespace std;
struct student
{
	int roll;
	char name[80];
};

struct student sakil;

int main() {
	int a = 10;
	int *p;
	int *x;
	cout << x << endl;
	x = &a;
	cout << p << endl;
	p = &a;
	cout << a << endl;
	cout << *p << endl;
	cout << *x << endl;

	int *q;
	q = (int *)malloc(5*sizeof(int));
	cout << q << endl;
	cout << q+1 << endl;
	cout << q+2 << endl;
	q[0]=10;
	q[1]=20;
	q[2] = 30;
	cout << q[2] << endl;

	int *t;
	t = new int[3];
	cout << t << endl;
	cout << t+1 << endl;
	cout << t+2 << endl;

	int arr[5] = {1, 2, 3, 4, 5};
	int *ar;
	ar = arr;
	cout << *ar << endl;
	cout << *(ar +1) << endl;  

	delete [] t;


	return 0;
}
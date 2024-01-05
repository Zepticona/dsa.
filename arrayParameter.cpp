#include <iostream>
using namespace std;
void fun(int *A, int x)
{
	for(int i = 0; i < x; i++) {
		cout << A[i]+2 << endl;
	}

}
int * func2(int x) 
{
	int *p;
	p = (int *)malloc(x*sizeof(int));
	return (p);
}
int main() {
	int A[5] = {1, 2, 3, 4, 5};
	fun(A, 5);
	int *q;
	q = func2(3);
	q[0] = 45;
	q[1] = 98;
	q[2] = 33;
	cout << q[0] << endl;

	return 0;
}
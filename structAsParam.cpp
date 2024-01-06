#include <iostream>
using namespace std;
struct Rectangle {
	int length;
	int breadth;
};

// Pass by value
int area(struct Rectangle r1){
	r1.length ++;
	return r1.length * r1.breadth;
}

// Call by address
void change(struct Rectangle *r1) {
	r1->length++;
}

// Call by reference
void change2(struct Rectangle &r1)
{
	r1.length = 79;
}

struct CTMarks {
	int roll;
	int marks[4];
};

int totalMarks(struct CTMarks *p) 
{
	int sum = 0;
	for(int i=0; i < 4; i++ )
	{
		sum = sum + p->marks[i];
	}
	return sum;
}


int main() {
	struct Rectangle r = {5, 4};
	cout << r.length << " " << r.breadth << endl;
	int a = area(r);
	cout << a << endl;
	cout << r.length << endl;
	change(&r);
	cout << r.length << endl;
	change2(r);
	cout << r.length << " " << r.breadth << endl;

	struct CTMarks sak = {17, {14, 18, 17, 12}};
	cout << sak.roll << endl;
	cout << totalMarks(&sak) << endl;


	return 0;
}
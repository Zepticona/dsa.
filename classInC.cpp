#include <iostream>
using namespace std;

class Rectangle
{
public:
	int length;
	int breadth;
	Rectangle(int l, int b) {
		length = l;
		breadth = b;
	}

	int area() {
		return length*breadth;
	}

	int perimeter() {
		return 2*(length+breadth);
	}
};

int main() {
	Rectangle r(5, 4);
	int a = r.area();
	cout << a << endl;
	return 0;
}
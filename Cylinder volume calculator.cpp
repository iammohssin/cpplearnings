#include <iostream>

using namespace std;

int main() {
	int radius;
	int height;
	float v;
	cout << "----------Calculate the volume of the cylinder----------" << endl;
	cout<< "Enter Radius of cylinder: ";
	cin >> radius;
	cout << "Enter Height of cylinder: ";
	cin >> height;
	v = (3.13*radius*radius*height);
	cout << "Volume of cylinder is: " << v << endl;
	return 0;
}


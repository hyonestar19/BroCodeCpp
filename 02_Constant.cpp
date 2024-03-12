#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.14159; // 불변
	double radius = 10;
	double circumference = 2 * PI * radius;

	cout << circumference << "cm" << endl;


	return 0;
}

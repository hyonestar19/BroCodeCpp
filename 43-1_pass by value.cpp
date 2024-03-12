#include <iostream>

using namespace std;

void swap(string x, string y);

int main()
{
	string x = "Kool-Aid";
	string y = "Water";


	swap(x,y);

	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	return 0;
}

void swap(string x, string y)
{
	string temp;
	temp = x;
	x = y;
	y = temp;
}

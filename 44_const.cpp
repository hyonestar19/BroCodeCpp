#include <iostream>

using namespace std;

void printInfo(const string name,const int age);

int main()
{
	string name = "Bro";
	int age = 21;

	printInfo(name, age);
	
	return 0;
}

void printInfo(const string name,const int age)
{
	// name = " ";
	// age = 0;
	cout << name << endl;
	cout << age << endl;
}

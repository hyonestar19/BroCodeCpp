#include <iostream>

using namespace std;

int main()
{
	string name = "Bro";
	double gpa = 2.5;
	bool student = true;
	char grade[] = {'A', 'B', 'C', 'D', 'F'};
	string students[] = {"Spongebob", "Patrick", "Squidward"};

	cout << sizeof(gpa) << "bytes\n"; // 8바이트를 출력
	cout << sizeof(name) << "bytes\n"; // 주소를 가지기 때문에 32바이트를 출력
	cout << sizeof(student) << "bytes\n";
	cout << sizeof(students)/sizeof(string) << " elements\n";
}

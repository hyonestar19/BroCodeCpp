#include <iostream>

int main()
{
	string students[] = {"Spongebob", "Patrick", "Squidward"};

	for(int i = 0; i < sizeof(students)/sizeof(string); i++) {
		cout << students[i] << endl;
	}

	return 0;
}

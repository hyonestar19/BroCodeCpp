#include <iostream>
using namespace std;

int main() 
{
	string students[] = {"Spongebob", "Patrick", "Squidward"};
	
	for(string i: students){
		cout << i << endl;
	}

	return 0;
}

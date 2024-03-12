#include <iostream>

using namespace std;

int main()
{
	int *pNum = NULL;

	pNum = new int;

	*pNum = 21;

	cout << "address: " << pNum << endl;
	cout << "value: " << *pNum << endl;
	
	delete pNum; // freeing memory

	return 0;
}

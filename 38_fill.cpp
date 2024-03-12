#include <iostream>

using namespace std;

int main() {

	const int SIZE = 100;
	string foods[SIZE];

	// fill(foods, foods + SIZE, "pizza");
	// fill(시작주소, 끝주소, 입력하고 싶은 값);

	fill(foods, foods + (SIZE/3), "pizza");
	fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
	fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

	for(string food: foods) {
		cout << food << endl;
	}

return 0;

}

#include <iostream>

int main() {
	
	int num;
	int guess;
	int tries=0;

	srand(time(NULL));
	num = (rand() % 100) + 1; // 1~100 랜덤 값

	cout << "***** NUMBER GUESSING GAME *****\n";

	do {
		cout << "Enter a guess between (1-100): ";
		cin >> guess;
		tries++;

		if (guess > num) {
			cout << "Too High!\n";
		} else if (guess < num) {
			cout << "Too Low!\n";
		} else {
			cout << "CORRECT! # of tries: " << tries << endl;
		}
	}whlie(guess != num);


	cout << "*******************************\n";
	return 0;
}

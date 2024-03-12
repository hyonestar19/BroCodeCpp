#include <iostream>

using namespace std;

int main()
{
	string questions[] = {"1. What year was C++ created?: ",
												"2. Who invented C++?: ",
												"3. What is the prodecessor of C++?: ",
												"4. is the Earth flat?"};
	string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
												{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
												{"A. C", "B. C+", "C. C--", "D. B++"},
												{"A. yes", "B. no", "C. sometimes", "D. What's earth?"}};
	
	char answerKey[] = {'C', 'B', 'A', 'B'};

	int size = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score;
	
	for(int i = 0; i < size; i++) {
		cout << "***************************" << endl;
		cout << questions[i] << endl;
		cout << "***************************" << endl;

		for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
			cout << options[i][j] << endl;
		}

		cin >> guess;
		guess = toupper(guess);

		if(guess == answerKey[i]) {
			cout << "CORRECT\n";
			score++;
		}
		else {
			cout << "WRONG!\n";
			cout << "Answer: " << answerKey[i] << endl;
		}
	}

	cout << "***************************" << endl;
	cout << "           RESULTS         " << endl;
	cout << "***************************" << endl;
	cout << "CORRECT GUESSES: " << score << endl;
	cout << "# of QUESTIONS: " << size << endl;
	cout << "SCORE: " << (score/(double)size)*100 << "%";



	return 0;
}

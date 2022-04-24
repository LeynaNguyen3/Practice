#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// setting seed
	srand(time(0));

	// throw dices
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = rand() % 6 + 1;

	// show dices
	cout << "Dice 1: " << dice1 << endl;
	cout << "Dice 2: " << dice2 << endl;
	cout << "Dice 3: " << dice3 << endl;

	//using formula
	int MAX;
	int MIN;
	cout << "What's the max your number can go to?" << endl;
	cin >> MAX;
	cout << "What's the lowest your number can go?" << endl;
	cin >> MIN;
	int diff = MAX - MIN + 1;
	int random = rand() % diff + MIN;

	cout << random << endl;

	return 0;
}

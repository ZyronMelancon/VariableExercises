#include<iostream>

using namespace std;

/* Exercise 1 answers
a. Invalid. Needs float to return correct value.
b. 3
c. Invalid. Two operators next to each other.
d. Same answer as a.
e. Same answer as a.
f. Same as a.
g. Same as a.
h. Same as a.
i. Same as a.
*/

/* Exercise 2 answers
a. studentHeight
b. taxRate65
c. taxRate05
d. totalGameCost
*/

//Exercise 3

int a = 121;
float b = 9.4f;
char c = 'r';
int d = 100000;
bool e = false;

//Exercise 4

void ex4()
{
	int numa;
	int numb;
	int clone;

	cout << "Enter two numbers, and I'll swap them." << endl;
	cin >> numa;
	cin >> numb;

	clone = numb;
	numb = numa;
	numa = clone;

	cout << "Number 1 is: " << numa << endl;
	cout << "Number 2 is: " << numb << endl;

	system("pause");
}

/* Exercise 5 answers
a. i: 1 ch: A f: 45		True
b. i: 1 ch: A f: 45		True
c. i: 1 ch: 9 f: 45		True
d. i: 1 ch: f:			False:   i: 1 ch: 9 f: 45	
e. i: 66 ch: f:			False:   i: 0 ch: a f: 0
f. i: 1 ch: B f: 67		False:   i: 1 ch: B f: 0
*/

void ex5()
{
	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

	system("pause");
}

void ex6()
{
	int num[5];
	int sum = 0;

	cout << "Give me 5 numbers, and I'll give the average." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Number " << i + 1 << ": " << endl;
		cin >> num[i];
	}

	for (int i = 0; i < 5; i++)
		sum = sum + num[i];

	sum = sum / 5;

	cout << "The average is: " << sum;
	system("pause");

}

int calcLoop()
{
	char letterOne;
	char letterTwo;
	int letterNumBetween;
	char letterBetween;

	system("cls");
	std::cout << "Input your first letter here: ";
	std::cin >> letterOne;
	std::cout << "Now, enter your second letter: ";
	std::cin >> letterTwo;

	if (letterOne <= 90 && letterOne >= 65 && letterTwo <= 90 && letterTwo >= 65)
	{
		letterNumBetween = (letterOne + letterTwo) / 2;
		letterBetween = letterNumBetween;
		std::cout << "The letter in between these two is: " << letterBetween << std::endl;
	}
	else if (letterTwo > 90 && letterOne > 90)
	{
		letterTwo = letterTwo - 32;
		letterOne = letterOne - 32;
		letterNumBetween = (letterOne + letterTwo) / 2;
		letterBetween = letterNumBetween;
		std::cout << "The letter in between these two is: " << letterBetween << std::endl;
	}
	else if (letterOne > 90)
	{
		letterOne = letterOne - 32;
		letterNumBetween = (letterOne + letterTwo) / 2;
		letterBetween = letterNumBetween;
		std::cout << "The letter in between these two is: " << letterBetween << std::endl;
	}
	else if (letterTwo > 90)
	{
		letterTwo = letterTwo - 32;
		letterNumBetween = (letterOne + letterTwo) / 2;
		letterBetween = letterNumBetween;
		std::cout << "The letter in between these two is: " << letterBetween << std::endl;
	}

	system("pause");
	return 0;
}

int ex7()
{
	char decide = 0;
	std::cout << "Welcome! This program will find the letter in between the two letters you input." << std::endl;
	system("pause");
	system("cls");
	while (true)
	{
		calcLoop();
		system("cls");
		std::cout << "Would you like to try another pair? Y/N" << std::endl;
		std::cin >> decide;
		if (decide == 89 || decide == 121)
			continue;
		else
			break;
	}

	return 0;
}


void main()
{
	//ex4();
	//ex5();
	//ex6();
	ex7();
}
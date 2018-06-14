//changing a string into Spongebob mocking meme

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cctype>

using namespace std;

int main()

{
	srand (time(NULL));
	char x [500];
	char word;

	int counter;
	counter  = rand () % 2;
	bool carryon = true;
	char answer;

	while (carryon)
	{
		cout << "Enter string: ";
		cin.getline(x, 100, '\n');
		int length = strlen(x);
		cin.clear();
		
		for (int i = 0; i < length; i++)
		{
			if (counter%2)
			{
				word = x[i];
				x[i] = tolower(word);
			}
			else if (!(counter%2))
			{
				word = x[i];
				x[i] = toupper(word);
			}
			counter++;
		}
		cout << x << endl;
		cout << "Continue? (Y/N): ";
		cin >> answer;
		cin.clear();
		cin.ignore();
		if (answer == 'Y' || answer == 'y')
			carryon = true;
		else
			carryon = false;
	}
}


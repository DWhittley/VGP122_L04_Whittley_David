/* Write a program to count the number of vowels and consonants in a character array, using
pointers. */


#include <iostream>

using namespace std;

int main()
{
	int numVowels = 0;
	int numConsonants = 0;
	int SIZE = 0;
	char* ptr = 0;

	cout << "Enter the number of letters you wish to enter: ";
	cin >> SIZE;

	ptr = new char[SIZE];

	cout << "Enter each of the letters: ";

	for (int i = 0; i < SIZE; ++i)
		cin >> ptr[i];

	cout << "You entered the following letters: ";

	for (int i = 0; i < SIZE; ++i)
		cout << ptr[i] << "\t";

	cout << endl;

	for (int i = 0; i < SIZE; ++i)
	{
		if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u')
			numVowels += 1;
		else
			numConsonants += 1;
	}

	cout << "You entered " << numVowels << " vowels and " << numConsonants << " consonants" << endl;

	delete[] ptr;

	return 0;
}
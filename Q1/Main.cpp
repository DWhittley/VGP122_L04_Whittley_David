/* Write a program to find the max value of an integer array data set. The program will ask the user
to input the number of data values in the set and each value. The program prints on screen a
pointer that points to the max value. */

#include <iostream>

using namespace std;

int main()
{
	int pMaxValue = 0; // variable to store where the location that has the max value that was entered by the user.
	int usrSize = 0; // variable to store user input array size
	int tmp = 0; // variable to store user value input temporarily
	
	cout << "Please enter the number of values you wish to compare: ";
	cin >> usrSize;

	int* p = new int [usrSize];	// allocate pointer with memory with a size that matches user input

	for (int i = 0; i < usrSize; i++)
	{
		p[i] = 0; // initialize all array locations with value of 0
	}

	for (int i = 0; i < usrSize; i++)
	{
		cout << "Please enter a value you wish to compare, followed by the Enter key." << endl;
		cin >> p[i]; // store value of tmp in next array location

		
		if (p[i] > pMaxValue) // if the value stored in the present location is greater than that of the pMaxValue location
		{
			pMaxValue = i;
		}
	}

	cout << "The largest value you entered was: " << p[pMaxValue - 1] << " and was entry #" << pMaxValue << endl;

	delete [] p; //free the memory allocated to the dynamic 
	return 0;
}

// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[ ] Once the user is finished entering numbers:
			[ ] Display the five numbers in reverse order.
			[ ] Display the highest number entered.
			[ ] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

//Andrew, Riley, and Sharad

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int count; 

	cout << "How many intigers would you like? (at least 5) ";
	cin >> count;

	int *array = new int[count];

	if (count >= 5)
	{
		for (int i = 0; i < count; i++)
		{
			cout << "Number:";
			cin >> array[i];
		}
		cout << "The numbers in reverse order are: ";
		for (int i = (count - 1); i >= 0; i--)
		{
			cout << array[i] << ", ";
		}
		cout << endl << endl;
		int highnum = 0;
		int lownum= array[0];

		for (int i = 0; i < array[i]; i++)
		{
			if (array[i] > highnum) {
				highnum = array[i];
			}
		}
		cout <<  "The highest int is: " << highnum << endl;

		for (int i = 0; i < array[i]; i++)
		{
			if (array[i] < lownum) {
				lownum = array[i];
			}
		}
		cout << "The lowest int is: " << lownum;

	}
	else {
		cout << "That is not above 5";
	}

	_getch();
	return 0;
}

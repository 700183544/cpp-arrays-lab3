
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

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int count; 

	cout << "how mant intigers would you like? (at least 5) ";
	cin >> count;

	int *array = new int[count];

	if (count >= 5)
	{
		for (int i = 0; i < count; i++)
		{
			cout << "number:";
			cin >> array[i];
		}

		for (int i = (count - 1); i >= 0; i--)
		{
			cout << count;
		}
	}
	else {
		cout << "That is not above 5";
	}

	_getch();
	return 0;
}

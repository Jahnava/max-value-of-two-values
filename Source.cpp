//find the max value from two values entered when prompted

#include<iostream>
#include<string>
#include<iomanip>

int main()
{
	//using stuff from the standard library
	using std::cin;
	using std::cout;
	using std::endl;
	//using std::fixed

	//variables
	int value1;     //value entered by the user
	int value2;  //value entered by the user
	int value3;  //value entered by user
	int max;        //determined value

	//prompt the user for input
	cout << "Enter the first value: ";
	cin >> value1;

	cout << "Enter the second value: ";
	cin >> value2;

	cout << "Enter the third value: ";
	cin >> value3;

	//find the maximum value
	if (value1 > value2 && value1 > value3 ) //value one has to be greater than value 2 and (amperand symbol) greater than value 3 //100 90 80 three values. is 100 greater than 90 and is 100 greater than 80, so this would be true and max would be value 1. 
	{
		max = value1;
	}
	else if (value2 > value1 && value2 > value3) //if value two is greater than value one & value 2 is greater than value 3  // ex. 90 100 80 is 100 greater than 90,yes. is 100 greater than 80, true, so this would work
	{
		max = value2;
	}
	else
	{
		max = value3;
	}//if the max is not value one or value two than value three is the only value left, so max would equal value3.

	//display the result
	cout << std::fixed << endl << endl;

	cout << "The maximum value between " << value1 <<", " << value2 
		<< ", and " << value3 << " is " << max << endl << endl;

	system("pause");
	return 0;

}

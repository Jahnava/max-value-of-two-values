//functionality description

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

	int max;        //determined value

	//prompt the user for input
	cout << "Enter the first value: ";
	cin >> value1;

	cout << "Enter the second value: ";
	cin >> value2;

	//find the maximum value
	if (value1 > value2)
	{
		max = value1;
	}
	else
	{
		max = value2;
	}

	//display the result
	cout << std::fixed << endl << endl;

	cout << "The maximum value between " << value1 << value2
		<< " is " << max << endl << endl;

	system("pause");
	return 0;

}

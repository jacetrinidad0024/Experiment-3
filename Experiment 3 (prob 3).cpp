#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	char arr[50];
	int a;
	
	cout << "Experiment 3 (Problem 3)\n\n";
	cout << "Enter array size: ";
	cin >> a;
	cout << "Enter character: ";
	
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Displaying reverse: ";
	for (int i = a; i >= 0; i--)
	{
		cout << arr[i];
	}
	
	_getch ();
	return 0;
	
}

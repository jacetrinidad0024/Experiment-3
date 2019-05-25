#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int provinceA[7], provinceB[7], provinceC[7];
	int a, b, c;
	
	cout << "Experiment 3 (Problem 2)\n\n";
	cout << "Input the temperature for week of Province A, Province B, and Province C. " << "\n" << endl;
	
	for(int a = 0; a < 7; ++a)
	{
		 cout << "Province A, Day " << a + 1 << ": ";
         cin >> provinceA[a];
	}
	
		for(int b = 0; b < 7; ++b)
	{
		 cout << "Province B, Day " << b + 1 << ": ";
         cin >> provinceB[b];
	}
	
		for(int c = 0; c < 7; ++c)
	{
		 cout << "Province C, Day " << c + 1 << ": ";
         cin >> provinceC[c];
	}
	
	cout << "\n \n" << "Displaying Values: " << "\n" << endl;
		
	for(int a = 0; a < 7; ++a)
	{
		 cout << "Province A, Day " << a + 1 << " = " << provinceA[a] << endl;
	}
	
		for(int b = 0; b < 7; ++b)
	{
		 cout << "Province B, Day " << b + 1 << " = " << provinceB[b] << endl;
	}
	
		for(int c = 0; c < 7; ++c)
	{
		 cout << "Province C, Day " << c + 1 << " = " << provinceC[c] << endl;
	}
				
	_getch();
	return 0;
}

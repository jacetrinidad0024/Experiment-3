#include <iostream>

using namespace std;

int main()
{
	cout << "Experiment 3 (Problem 1)\n\n";
	
	int numberOfElements = {10};
	int num[numberOfElements], smallest, largest;
	double average = 0.0;
	float sum;
	
	
	for(int i = 0; i < numberOfElements; i++)
	{
		cout << "Enter value for number "<< i + 1 << ": ";
		cin >> num[i];
		
		if(i == 0)
		{
			smallest = num[i];
			largest = num[i];
			sum += num[i];
			average += num[i] / numberOfElements;
		}
		
		else
		{
			if(smallest > num[i])
			{
				smallest = num[i];
			}
			
			if(largest < num[i] )
			{
				largest = num[i];
			}
			
			{
			sum += num[i];
			}
			
		
			{
			average += num[i] / numberOfElements;
			}
			
		
		}
	}
	
	cout << "\nSmallest integer: " << smallest << endl;
	cout << "largest integer: " << largest << endl;
	cout << "Total: " << sum << endl;
	cout << "Average: " << average << endl;

	
	return 0;
}

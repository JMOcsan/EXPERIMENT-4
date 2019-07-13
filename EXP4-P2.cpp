#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int s, i, j, temp, arr[50];
	 
	cout << "Selection Sorting" << endl;
	cout << "Enter array size: ";
	cin >> s;
	cout << "Enter array elements: " << endl;
	for(i=0 ; i<s ; i++)
	{
		cin >> arr[i];
	}

	cout << "Now sorting.." << endl;

	for(i=0 ; i<s ; i++)
	{
		for(j=i+1 ; j<s ; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "\nSorted element: " << endl;
	for(i=0 ; i<s ; i++)
	{
		cout << arr[i] << " ";
	}

	getch();
	return 0;
}

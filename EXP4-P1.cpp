#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

	int n, x, y, r;
	char a;
	
do{
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Modulus" << endl;
	cout << "\n\n Choose from 1 to 5 which would be used in calculating: ";
	cin >> n;
	
	cout << "Enter two integers to be calculated: " << endl;
	cin >> x >> y;


	switch(n)
	{ 
		case 1:
			r=x+y;
			cout << "The result is: " << r <<endl;
			cout<<"\n Choose new function?(Y/N): ";
			cin>>a;
			break;
		case 2:
			r=x-y;
			cout << "The result is: " << r <<endl;
			cout<<"\n Choose new function?(Y/N): ";
			cin>>a;
			break;
		case 3:
			r=x*y;
			cout << "The result is: " << r <<endl;
			cout<<"\n Choose new function?(Y/N): ";
			cin>>a;
			break;
		case 4:
			r=x/y;
			cout << "The result is: " << r <<endl;
			cout<<"\n Choose new function?(Y/N): ";
			cin>>a;
			break;
		case 5:
			r=x%y;
			cout << "The result is: " << r <<endl;
			cout<<"\n Choose new function?(Y/N): ";
			cin>>a;	
			break;	
	default: 
			cout << "Invalid input!" << endl;
	}
}while(a == 'Y' || a == 'y');

if(a == 'N' || a == 'n')
{
return 0;
}
	
	getch();
	return 0;
}

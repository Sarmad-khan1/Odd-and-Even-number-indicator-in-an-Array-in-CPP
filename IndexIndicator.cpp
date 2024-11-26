#include <iostream>
using namespace std;
int main()
{

	system("cls");

	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	char inputting[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number at index " << i << endl;
		cin >> inputting[i];
	}
	for (int i = 0; i < size; i++)
	{
		char digit = inputting[i];
		if (digit % 2 == 0)
		{
			cout<<"The digit "<<digit<<" at index "<<i <<" is even."<<endl;
		}
		else
		{
			cout<<"The digit "<<digit<<" at index "<<i<<" is odd."<<endl;
		}
		
	}
}
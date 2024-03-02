#include<iostream>
using namespace std;
int main()
{
	int sizeOfArray;
	cout << "Enter size of array: " << endl;
	cin >> sizeOfArray;
	int count = 0;
	int* Array1 = new int[sizeOfArray];
	cout << "Enter elements: " << endl;
	for (int i = 0; i < sizeOfArray; i++)
	{
		cin >> *(Array1 + i);
		if (*(Array1 + i) == -1)
			break;
		
		if (count == (sizeOfArray - 1))
		{
			delete[] Array1;
			sizeOfArray *= 2;
			Array1 = new int[sizeOfArray];
		}
			
			count++;
	}
	
	cout << "Elements in reverse order are: " << endl;
	for (int i = count-1; i >= 0; i--)
		cout << *(Array1 + i)<<" ";
	delete[] Array1;
	Array1 = NULL;
	return 0;
}
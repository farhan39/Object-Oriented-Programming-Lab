//Muhammad Farhan Bukhari
//BCS-2F1
//Roll number:21L-5247

#include<iostream>
using namespace std;

int* inputArray(int& size)
{
	int* myArray = new int[size];
	for (int* temp = myArray; temp < myArray + size; temp++)
		cin >> *temp;
	return myArray;
}

void outputArray(int* myArray, const int& size)
{
	for (int* temp = myArray; temp < myArray + size; temp++)
		cout<< *temp<<" ";
}

int* compressArray(int* myArray, int& size)
{
	for (int* temp=myArray; temp < myArray+size; temp++)
	{
		for (int* temp1 = temp + 1; temp1 < myArray+size; temp1++)
		{
			if (*temp == *temp1)
			{
				for (int* temp2 = temp1; temp2 < myArray+size-1 ; temp2++)
				{
					*temp2 = *(temp2 + 1);
				}
				size--;
				temp1--;

			}
		}

	}
	return myArray;

}

int main()
{
	int size;
	cout << "Enter size of Array :" << endl;
	cin >> size;
	cout << "Enter elements of your array :" << endl;
	int* hello = inputArray(size);
	hello = compressArray(hello, size);
	cout << "Compressed Array is : " << endl;
	outputArray(hello, size);

	cout << "\n";
	system("pause");
	return 0;

}
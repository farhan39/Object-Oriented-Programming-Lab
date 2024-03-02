//Name : Muhammad Farhan Bukhari
//Section : BCS-2F1
//Roll number : 21L-5247

#include<iostream>
#include<fstream>
using namespace std;


int stringLength(char* hello)
{
	int i=0,count = 0;

	while (*(hello+i) != '\0')
	{
		count++;
		i++;
	}

	return count;
}

int GetCharacterCount(char* hello, char y)
{
	int i = 0,count=0;

	while (*(hello + i) != '\0')
	{
		if (*(hello + i) == y)
			count++;
		
		i++;
	}

	return count;
}

void ReadStudentsListFromFile()
{
	ifstream hello;
	const int rows = 44, cols = 50;

	char myArray[rows][cols] = {'\0'};

	hello.open("studentsNames.txt");

	int i = 0;

	while (!hello.eof())
	{
		hello.getline(myArray[i], 50);
		cout << myArray[i] << endl;
		i++;
	}

}

int main()
{
	//char myStr1[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
	//char myStr1[] = "Hello World";
	
	char myStr1[20] = "Hello World";
	//cin >> myStr1;
	cout << "Enter a sentence :";
	cin.getline(myStr1, 50);
	
	cout << "Length of your string is : ";
	cout<<stringLength(myStr1)<<endl;
	char ch;
	cout << "Enter character you want to search :";
	cin >> ch;
	cout << ch << " occured " << GetCharacterCount(myStr1, ch) << " times.\n\n";

	/*int rows = 44, cols = 50;
	char** myArray1 = new char* [rows];
	for (int i = 0; i < rows; i++)
		myArray1[i] = new char[cols];*/

	//char searchString[50] = { '\0' };
	//cout << "Enter string you want to find : ";
	//cin.getline(searchString, 50);
	//cout << "Student names are :\n";

	//myArray1 =	ReadStudentsListFromFile111();
	//FindNameFromStudentsList(myArray1,searchString);
	
	ReadStudentsListFromFile();
	
	return 0;
}
//Roll number: 21L-5247----------Name: Farhan Bukhari

//#include<iostream>
//#include<fstream>
//using namespace std;
//
//void main()
//{
//	ifstream fin("input.txt");	//input file stream, it will work on file input.txt. Make sure your current cpp file and input.txt are in same folder
//
//	if (fin.is_open())	//Checking if file has been opened
//	{
//		//If file has been opened, process it otherwise display error message
//
//		int size1 = 0;
//		int size2 = 0;
//		int number = 0;
//
//
//		fin >> size1;		//reading first integer from file
//
//		cout << "First Array:\n";
//		cout << "Size:\t" << size1 << endl;
//		cout << "Data:\t";
//
//		for (int i = 0; i < size1; i++)
//		{
//			//This loop is reading total 10 numbers, where 10 is Size1
//
//			fin >> number;	//Read next integer from file			
//			cout << number << " ";
//		}
//
//		fin >> size2;		//reading next integer from file
//
//		cout << "\n\nSecond Array:\n";
//		cout << "Size:\t" << size2 << endl;
//		cout << "Data:\t";
//
//		for (int i = 0; i < size2; i++)
//		{
//			//This loop is reading total 5 numbers, where 5 is Size2
//
//			fin >> number;	//Read next integer from file			
//			cout << number << " ";
//		}
//		cout << endl;
//
//		fin.close();	//Close the file as soon as you finish reading it.
//	}
//	else
//	{
//		cout << "Cannot open file.\n";
//	}
//}

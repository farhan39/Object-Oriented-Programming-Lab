//Muhammad Farhan Bukhari
//Section : BCS-2F1
//Roll number : 21L-5247

#include<iostream>
#include"Date.h"
using namespace std;

void main ()
{
	{
		Date date1;
		cout<<"After default constructor is called : "<<endl;
		date1.Print();

		Date date2(2,2,2002);
		date2.Print();

		Date independenceDay(14,8,2018);
		independenceDay.Print();
	}

	system ("pause");

}


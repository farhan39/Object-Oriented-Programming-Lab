//Muhammad Farhan Bukhari
//Section : BCS-2F1
//Roll number : 21L-5247

#include<iostream>
#include"Date.h"
using namespace std;

Date::Date()
{
	Day=1,Month=1,Year=1926;
}

void Date::Print()
{
	cout<<"Day : "<<Day<<endl;
	cout<<"Month : "<<Month<<endl;
	cout<<"Year : "<<Year<<endl;

}

Date::~Date()
{
	cout<<"Destructor called.\n";
}

Date::Date(int date,int month,int year)
{
	cout<<"Overloaded function is called : "<<endl;
	Day = date;
	Month = month;
	Year = year;

}

void Date::Input()
{
	cout<<"Enter date : "<<endl;
	cin>>Day;
	cout<<"Enter month : "<<endl;
	cin>>Month;
	cout<<"Enter year : "<<endl;
	cin>>Year;
}


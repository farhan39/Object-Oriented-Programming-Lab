
//Muhammad Farhan Bukhari----------BCS-2F----------21L-5247

#include<iostream>
using namespace std;

class Student;
class Society;

class Helper
{
public:
	int stringLength(char*str)
	{
		int i = 0, strLen = 0;
		while (str[i]!='\0')
			strLen++;
		return strLen;
	}

};

class Student
{
private:
	char name[50];
	char rollNo[8];
	float cgpa;
public:
	Student();
	Student(char*, char*, double);
	void print()
	{
		cout << name << "(" << rollNo << ")" << endl;
	}
	float cgpaGetter(Student);
	char* nameGetter();

};

Student::Student(char *rollNo1 = NULL, char* name1 = NULL, double gpa = 0)
{
		int i;
		for (i = 0 ; rollNo1[i] != '\0' && i < 8 ; i++)
		rollNo[i] = rollNo1[i];
		rollNo[i] = '\0';

		for (i = 0 ; name1[i] != '\0' ; i++)
		name[i] = name1[i];
		name[i] = '\0';

		cgpa = gpa;
		print();
}

float Student :: cgpaGetter(Student s1)
{
	return s1.cgpa;
}

char* Student:: nameGetter()
{
	return name;
}

class Society
{
private:
	char name[50];	
	Student* president;	
	Student* members[5];
public:
	Society(char*);
	void PrintInfo();
	void AppointPresident(Student&);
	void AddMember(Student&);

};

Society::Society(char* name1 = NULL)
{
	int i;
	for (i = 0 ; name1[i] != '\0' ; i++)
	{
		name[i] = name1[i];
	}
	name[i] = '\0';

	president = 0;

	for (i = 0 ; i < 5 ; i++)
		members[i] = 0;
}

void Society::PrintInfo()
{
	cout<<"Society name :\t";
	for (int i = 0 ; name[i] != '\0' ; i++)
		cout<<name[i];
	
	if (president==0)
		cout<<"\nPresident : Not Available\n";
	else
	{
		cout << "\n"; 
		president->print();
	}

	for (int i = 0 ; i < 5 ; i++)
	{
		if (members[i]==0)
			cout<<"Member "<<i<<" : Not Available\n";
		else members[i]->print();
	}
}

void Society::AppointPresident(Student& s1)
{
	if ((president == nullptr) && (s1.cgpaGetter(s1) > 3.0))
	{
		president = &s1;
		cout << s1.nameGetter() << " appointed as president.\n"; 
	}
	else cout << s1.nameGetter() << " cannot be appointed as president.\n";

}

void Society :: AddMember(Student& s1)
{
	for (int i = 0 ; i < 5 ; i++)
		if (members[i] == 0)
		{
			members[i] = &s1;
			cout << s1.nameGetter() << " added to member list successfully.\n";
			return;
		}
	cout << s1.nameGetter() << " cannot be added to member list ... Position is not vacant.\n";

}

int main ()
{
	Student s1("12L1111", "Hashim Amla", 3.99);
	Student s2("13L1121", "Virat Kohli", 3.45);
	Student s3("13L1126", "Quinton de Kock", 2.98);
	Student s4("14L1361", "Joe Root", 2.99);
	Student s5("14L1124", "Martin Guptil", 3.09);
	Student s6("15L1314", "Rohit Sharma", 3.19);

	Society sports ("Sports");
	sports.PrintInfo();

	sports.AppointPresident(s3);
	sports.AppointPresident(s1);
	sports.AppointPresident(s2);

	cout << endl << endl << endl;
	Student s7("15L1334", "Robert Elen", 2.19);
	sports.AddMember(s3);
	sports.AddMember(s2);
    sports.AddMember(s3);
	sports.AddMember(s1);
	sports.AddMember(s4);
	sports.AddMember(s5);
	sports.AddMember(s6);
	sports.AddMember(s7);
	sports.PrintInfo();


	system ("pause");
	return 0;
}
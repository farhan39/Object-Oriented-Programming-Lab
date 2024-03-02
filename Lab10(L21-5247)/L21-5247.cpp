
//Muhammad Farhan Bukhari------BCS-2F-------21L-5247
#include<iostream>
#include<conio.h>
using namespace std;

class Animal
{
public:
	 virtual char* speak();
	 virtual ~Animal() 	{ cout << "~Animal() called."<<endl; }

};

char* Animal::speak()
{
	return "speak() called.";
}

class Dog : public Animal
{
public:
	char* speak();
	~Dog() 	{ cout << "~Dog() called."<<endl; }

};

char* Dog::speak()
{
	return "woof !";
}

class Cat : public Animal
{
public:
	char* speak();
	~Cat() 	{ cout << "~Cat() called."<<endl; }

};

char* Cat :: speak()
{
	return "mew !";
}

class Sheep : public Animal
{
public:
	char* speak();
	~Sheep() 	{ cout << "~Sheep() called."<<endl; }

};

char* Sheep::speak()
{
	return "bleat !";
}

class Horse : public Animal
{
public:
	char* speak();
	~Horse() 	{ cout << "~Horse() called."<<endl; }

};

char* Horse::speak()
{
	return "neigh !";
}

class Cow : public Animal
{
public:
	char* speak();
	~Cow() 	{ cout << "~Cow() called."<<endl; }

};

char* Cow::speak()
{
	return "moo !";
}

int main ()
{
{
	/*Animal objAnimal;
	Dog objDog;
	Animal *ptrAnimal = &objDog;
	Dog *ptrDog = &objAnimal;
	
	cout << objAnimal.speak() << endl;
	cout << objDog.speak() << endl;
	cout << ptrAnimal->speak() << endl;
	cout << ptrDog->Animal::speak() << endl;*/

	/*Dog lassie;
	Animal *myPet = &lassie;
	cout << myPet->speak() << endl;*/

	const int size = 5;
	Animal * myPets[size];
	/*Cat whiskers;
	Dog mutley;

	myPets[0] = &whiskers;
	myPets[1] = &mutley;

	for(int i=0; i<2; i++)
		cout << myPets[i]->speak() << endl;*/

	int i = 0;
while (i<size)
{
	cout << "Press 1 for a Dog and 2 for a Cat 3 for a sheep 4 for a horse and 5 for a cow." << endl ;
	switch (getch())
	{
		case '1':
			myPets[i] = new Dog;
			cout << "Dog added at position " << i <<endl<<endl;
			i++;
			break;
		case '2':
			myPets[i] = new Cat;
			cout << "Cat added at position " << i <<endl<<endl;
			i++;
			break;
		case'3':
			myPets[i] = new Sheep;
			cout << "Sheep added at position " << i << endl << endl;
			i++;
			break;
		case'4':
			myPets[i] = new Horse;
			cout << "Horse added at position " << i << endl << endl;
			i++;
			break;
		case'5':
			myPets[i] = new Cow;
			cout << "Cow added at position " << i << endl << endl;
			i++;
			break;
		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
	}	
}
	for (int i = 0 ; i < size ; i++)
	{
		cout << myPets[i]->speak() << endl;
		delete myPets[i];
	}


}
	system("pause");
	return 0;
}
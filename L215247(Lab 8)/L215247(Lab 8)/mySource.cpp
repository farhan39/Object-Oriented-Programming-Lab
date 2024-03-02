//Muhammad Farhan Bukhari------------BCS-2F2-------------21L-5247

#include<iostream>
using namespace std;

class Helper
{
public:
	static int arrLength( int* arr )
	{
		int arrayLength = sizeof(arr)/sizeof(arr[0]);
	}

	static void arrayCopy(int*& dest, int*& src)
	{	
		int arrsrcLen = arrLength(src);
		for (int i = 0; i <= arrsrcLen; i++)
			dest[i] = src[i];
//Deep Copies src into dest.
	}
};

class Polynomial
{
	friend ostream& operator << (ostream& , const Polynomial&);

private:
	int totalTerms;
	int *coeff;
	int *exp;

public:
	Polynomial(int t = 0, int *c = NULL,int *e = NULL)
	{
		totalTerms = t; 
		coeff = c;
		exp = e;
	}
	//Polynomial operator+(const Polynomial &rhs);
	bool operator!();
	bool operator!=(const Polynomial &rhs);
	//Polynomial operator+(const int num,const Polynomial &rhs);
};

ostream& operator << (ostream& out, const Polynomial& rhs)		//global function 
{
	for(int i = 0 ; i < rhs.totalTerms; i++) 
	{
		if (rhs.coeff[i]!=0)
			out<<rhs.coeff[i]<<"x^";
		if (rhs.exp[i]!=0)
			out<<rhs.exp[i];
		if (i+1<rhs.totalTerms)
			out<<" + ";
		else out<<rhs.exp[i];
	}
	return out;
}

bool Polynomial :: operator !()
{
	for (int i = 0 ; i < totalTerms; i++)
	{
			if (coeff[i]!=0)
				return true;
	}
	return false;
}

bool Polynomial :: operator!= (const Polynomial &rhs)
{
	if (totalTerms = rhs.totalTerms)
	{
		for (int i = 0 ; i < rhs.totalTerms;i++)
			if (coeff[i] != rhs.coeff[i] || exp[i] != rhs.exp[i])
				return true;
	}

	return false;
}

//Polynomial Polynomial :: operator+ (const Polynomial &rhs) //still needs to be done 
//{
//	Polynomial result;
//	result.totalTerms = totalTerms + rhs.totalTerms;
//	
//	for (int i = 0 ; i < rhs.totalTerms ; i++)
//	{
//		if (exp[i] == rhs.exp[i])
//		{
//			for (int j = 0 ; j < rhs.coeff[i] ; j++) 
//			result.coeff[j] += rhs.coeff[j]; 
//		}
//	}
//	return result;
//}

//Polynomial Polynomial :: operator+ (const int num,Polynomial &rhs)
//{
//	for (int i = 0 ; i < rhs.totalTerms ; i++)
//		if (rhs.exp[i] == 0)
//			rhs.coeff[i] += 2;
//}

int main()
{
	int coeff_P1[] = {1,2,5};	//Coefficients for Polynomial P1
	int exp_P1[] = {4,2,0};	//Exponents for Polynomial P1

	int coeff_P2[] = {4,3};	//Coefficients for Polynomial P2
	int exp_P2[] = {6,2};	//Exponents for Polynomial P2

	Polynomial P1(3, coeff_P1, exp_P1);//Creates P1 with 3 terms (P1 = 1x^4 + 2x^2 + 5x^0 )
	Polynomial P2(2, coeff_P2, exp_P2);//Creates P2 with 2 terms (P2 = 4x^6 + 3x^2)

	cout<<"P1 = "<<P1<<endl; //Prints P1 = x^4+2x^2+5
	cout<<"P2 = "<<P2<<endl; //Prints P2 = 4x^6+3x^2
    
	if(!P1)
	cout<<"P1 is zero"<<endl;/*if polynomial has only 1 term and its coeff and exp are zero. i.e. if p1 = 0.*/
	if(P1 != P2)
	cout<<"P1 is Not Equal to P2"<<endl; 
		
	//Polynomial P3 = P1+P2;	//Adds P1 and P2 and saves result in P3.You may consume extra space for resultant Polynomial in Add function 
	//cout<<"P3 = "<<P3<<endl;	//Prints P3 = 4x^6+x^4+5x^2+5

	//P3 = 2 + P1; //Assume P1 already has a constant term, add 2 in it. 
	//cout<<"P3 = "<<P3<<endl;

	////Following is not included in Sec F’s lab. Sec E will do everything in this manual.
	//cout<<++P1<<endl;//adds 1 in all the coefficient.
	//cout<<P1<<endl;
	//cout<<P1++<<endl; //adds 1 in all the coefficient.
	//cout<<P1<<endl;
	system("pause");
	return 0;
}

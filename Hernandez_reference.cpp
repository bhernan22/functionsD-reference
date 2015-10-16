// Bianca Hernandez
// Created: October 15, 2015
// Summary:
//
//**********************************************
#include<iostream> //cin/cout
#include<string> // string manipulation
#include<cmath> // pow
#include<cstdlib>
#include<cassert> // assert testing

using namespace std;

//************************************************************
void sort(int& numA, int&numB, int& numC);
//Pre-Condition: accept values from (0-100)
//Post Condition: numbers are sorted in increasing order and then returned
//
//************************************************************

//************************************************************
void numDigits(int valA, int& n);
//Pre-Condition:  accept values from (-10000 - 10000)
//Post Condition: counts how many digits are in the integers
//
//************************************************************

//************************************************************
void computeSphere(double& a, double& v, double r);
//Pre-Condition: accepts in values of double type numbers between (0-10000)
//Post Condition: returns the value of the area and volume  of a sphere
//
//************************************************************

//************************************************************
void swap(int& A, int&B);
//Pre-Condition: accepts in only positive integers
//Post Condition:values have been swapped and then returned
//
//************************************************************

int main()
{
	int numA = 52;
	int numB = 96;
	int numC = 13;
	int valA = 5002;
	int n = -6352;
	double a = 1526;
	double v = 9999;
	double r = 5;
	int A = 6;
	int B = 42;
	
	
	//sort
	cout<< "numA: " << numA << "\t numB: " << numB << "\t numC: " << numC << endl;
	sort(numA, numB, numC);
	cout<< "numA: " << numA << "\t numB: " << numB << "\t numC: " << numC << endl;
	
	// numDigits
	cout << "valA: " << valA << "\t n: " << n << endl;
	numDigits(valA, n);
	cout << "valA: " << valA << "\t n: " << n << endl;
	
	// computeSphere
	cout << "a: " << a << "\t v: " << v << endl;
	computeSphere(a, v, r);
	cout << "a: " << a << "\t v: " << v << endl;
	
	// swap
	cout << "A: " << A << "\t B: " << B << endl;
	swap(A,B);
	cout << "A: " << A << "\t B: " << B << endl;
	return 0;
}
void sort(int& numA, int& numB, int& numC)
{
	assert(numA >= 0 && numA <= 100 );
	assert(numB >= 0 && numB <= 100 );
	assert(numC >= 0 && numC <= 100 );
	
	int temp;
	
	if(numC < numB && numC < numA)
	{
		temp = numA;
		numA = numC;
		
		if(temp < numB )
		{
			numB = numC;
			numB = temp;
		}
	}
	else if (numB < numC && numB < numA)
	{
		temp = numC;
		numC = numB;
		if( temp < numA)
		{
			numB = numA;
			numA = temp;
		}
	}
	else if( numC < numB)
	{
		temp = numC;
		numC = numB;
		numB = temp;
	}
	return;
}
void numDigits(int& valA, int& n)
{ 
	assert(valA >= -10000 && valA <= 10000);
	assert(n >= -10000 && n <= 10000);
	string digits = to_string(valA);
	int count = digits.length();
	
	return;
}
void computeSphere(double& a, double& v, double r)
{
	assert(a >= 0 && a <= 10000 );
	assert(v >= 0 && v <= 10000 );
	assert(r >= 0 && r <= 10000 );
	
	const double PI = 3.14;
	a = 4 * PI * pow(r,2);
	v = (4.0/3.0) * PI * pow(r,3);
	
	return;
}
void swap(int& A, int& B)
{
	int temp = A;
	A = B;
	B = temp;
	
	return;
}

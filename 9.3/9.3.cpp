// 9.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

float SumaMn(int arr1[9], int arr2[9], const int size )
{
	float  sum= 0;
	for (int i = 0; i < size; ++i)
	{
		
		sum += arr1[i] * arr2[i];
	} 
	return sum;
}


float Suma(int arr1[9], const int size)
{
	float  sum = 0;
	for (int i = 0; i < size; ++i)
	{

		sum += arr1[i] ;
	}
	return sum;
}
int main()
{
	int n;
	cout << "Enter n :  ";
	cin >> n;
	if (n > 0 && n<10)
	{
		int  y[9] = { 4,1,8,5,6,3,7,5,4 };
		int t[9] = { 70,60,80,65,50,45,85,44,68 };
		int p[9] = { 0,12,15,11,14,10,13,16,19 };


		cout << "SumaMn = " << SumaMn(y, p, n)<<endl;
		cout << "Suma = " << Suma(y, n) << endl;
		cout << "Pkr = " << SumaMn(y, p, n) / Suma(y, n) << endl;
		cout <<endl;
		cout << "SumaMn = " << SumaMn(y, t, n) << endl;
		cout << "Suma = " << Suma(y, n) << endl;
		cout << "Tkr = " << SumaMn(y, t, n) / Suma(y, n) << endl;
	}



	else
	{
		cout << "Entered incorrect value  "<<endl;
	}
 system("pause");
    return 0;
}



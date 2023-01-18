#include<iostream>
using namespace std;
void ss(int myarr[])
{
	int j=0;
	int key=0;
	for(int i=0;i<5;i++)
	{
		key=myarr[i];
		j=i-1;
		while(j >=0 && myarr[i]>key)  
		{
			myarr[j+1]=myarr[j];
			j=j-1;
			
		}
		myarr[j+1]=key;
	}
}
	int main()
	{
		int myarr[5];
		cout << "enter the element of array " << endl;
		for (int i = 0; i < 5; i++)
		{
			cin >> myarr[i];

		}
		for (int i = 0; i < 5; i++)
		{
			cout << myarr[i];

		}
		ss(myarr)		;
		cout << "your  sorted array " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << myarr[i];

		}
	}

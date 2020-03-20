#include <iostream>
#include <cstdio>
using namespace std;
int mang[4] = {5,4,6,5};
int mang2[4] = {6,5,3,7};
int  max = 50;

int mangkq[4];
int tongmax = 0; 

void Sinh(int *a)
{

	//cout << a[0] << " " << a[1] << " " << a[2] <<  " "<< a[3]<< " " << a[4] << endl;
	int tong = 0;
	for(int i = 0; i < 4; i++)
	{
		tong = tong + a[i]*mang[i]; 
	}
	if(tong <= 10)
	{
		for(int i = 0; i < 4; i++)
		{
		
			if(a[i] != 0)
				cout << mang[i] << "  ";
		}
		cout << endl;
		int tong2 = 0;
		for(int i = 0; i < 4; i++)
		{
			cout << a[i] << "     ";
			tong2 = tong2 + a[i] * mang2[i];
		}
		cout << endl;
		cout <<"Tong la: " <<  tong2 << endl;
		
		if(tong2 > tongmax)
		{
			tongmax = tong2;
			for(int i = 0; i < 4; i++)
			{
				mangkq[i] = a[i];
			}
		}
	}
	for(int i = 3; i >= 0; i--)
	{
		if(a[i] == 0)
		{
			a[i] = 1;	
			break;	
		}
		else
			a[i] = 0;
		//a[i] == 1;
			
	}
		if(a[0] == a[1] && a[1] == a[2] && a[3] == a[2] && a[0] == 0)
		return;		

			
		Sinh(a);	
}

int main()
{
	int *a = new int[4];
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	
	Sinh(a);
	
	
	cout << "KET QUA CUOI LA: " << endl;
	cout << tongmax << endl;
	for(int i = 0; i < 4; i++)
		cout << mangkq[i] << " ";
}

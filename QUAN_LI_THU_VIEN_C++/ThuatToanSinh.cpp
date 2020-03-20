#include <iostream>
#include <cstdio>
using namespace std;
int mang[5] = {5,10,15,20,25};
int  max = 50;

void Sinh(int *a)
{

	//cout << a[0] << " " << a[1] << " " << a[2] <<  " "<< a[3]<< " " << a[4] << endl;
	int tong = 0;
	for(int i = 0; i < 5; i++)
	{
		tong = tong + a[i]*mang[i]; 
	}
	if(tong == 50)
	{
		for(int i = 0; i < 5; i++)
		{
			if(a[i] != 0)
				cout << mang[i] << "  ";
		}
		cout << endl;
	}
	for(int i = 4; i >= 0; i--)
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
		if(a[0] == a[1] && a[1] == a[2] && a[3] == a[2] && a[3] == a[4] && a[0] == 0)
		return;		

			
		Sinh(a);	
}

int main()
{
	int *a = new int[5];
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	a[4] = 0;
	Sinh(a);
}

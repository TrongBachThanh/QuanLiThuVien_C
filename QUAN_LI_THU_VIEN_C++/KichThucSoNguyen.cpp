#include<iostream>
using namespace std;

struct ten
{
	int a;
	int b;
	int c;
	string f;
//	char d;
	struct ten *pnext;
	struct ten *ptail;
};
typedef struct ten TEN;
int main()
{
	int a = 5;
	char b = 'a';
	long c;
	cout << "Kich thuc cua so nguyen la: " << sizeof(a) << endl;
	cout << "Kich thuoc cua ki tu la: " << sizeof(b) << endl;
	cout << "Kich thuc cua long la: " << sizeof(c) << endl;
	cout << "Kich thuoc cua struc la: " << sizeof(ten) << endl;
	cout << "Kich thuoc cua struc la: " << sizeof(TEN) << endl;
	TEN *str;
	cout << "Kich thuc cua con tro la: " << sizeof(str) << endl;
	
	int *d;
	cout << "Kich thuoc cua con tro d la: " << sizeof(d) << endl;
	d = &a;
	cout << "Kich thuoc cua con tro d la: " << sizeof(d) << endl;
	
	TEN name = {1,2,3};
	str = &name;
	str->b = 10;
	cout << "Kich thuc cua con tro la: " << sizeof(str) << endl;
	cout << "Gia tri b moi la: " << name.b;
}

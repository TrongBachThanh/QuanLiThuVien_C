
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;
const int MAXLIST=100000;

typedef struct List {
  int n;
  int nodes[MAXLIST+1];
};

void LietKe( List ds)
{
	for(int i = 1 ; i <= ds.n ; i++)
		printf("%8d",  ds.nodes[i]);  
	getch();
}
int Search(List ds, int info)
{
	for ( int i =0 ; i <ds.n ; i++)
  		if (ds.nodes[i] == info) return i;
	 return -1;
}

void TaoDayNN_1 (List &ds, int N , int max){
	ds.n=0 ; int sonn ;
	int dem = 0; srand(time(NULL));
	while (dem < N) {
		sonn = rand() % max + 1; // tu 1 .. n
		if (Search(ds,sonn)==-1){
		  ds.nodes [dem++]=sonn;
		  ds.n++;
	    }
	}
	
}
void Swap (int &a, int &b) {
	int t = a; a=b ; b=t;
}
void TaoDayNN_2 (List &ds, int N , int max){
	ds.n=N ; int sonn ;
	int dem = 2; srand(time(NULL));
	for (int i=1; i<=max ; i++) ds.nodes [i]=i;
	Swap(ds.nodes[1], ds.nodes[max/2]);
	while (dem <= N) {
		sonn = dem+rand() % (max-dem + 1); // tu 1 .. n
		swap(ds.nodes [dem], ds.nodes [sonn]);
		dem++;
    }
}
	

void luuMang(List ds)
{

	fstream outFile;
	outFile.open("MangSoNga.txt", ios::out);
	outFile << ds.n << " ";
	for(int i = 1; i <= ds.n; i++)
	{
		outFile << ds.nodes[i] << " "; 
	}
}

int main () {
	int n , m ;
	List ds; ds.n = 0;
	//printf("Nhap so m = "); scanf("%d", &m);
	//printf("Nhap  so n (voi n >= m) = "); 
	//scanf("%d", &n);
	TaoDayNN_2(ds,100, 10000);
	printf("Day so vua tao :\n");
	LietKe (ds);
	int dem = 0;
	for(int i = 1; i <= ds.n; i++)
	{
		if(ds.nodes[i] > 5000)
		 dem++;
	}
	cout << "Dem bang: " << dem << endl;
	_getch();
	luuMang(ds);
}

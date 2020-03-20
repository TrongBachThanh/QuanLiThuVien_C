#include<iostream>
using namespace std;


void Adjust(int A[], int r, int n)
{
int j=2*r+1;  // vi tri nut con ben trai
  int x=A[r];
  int cont=true;
  while (j<=n-1 && cont)
  {    if (j<n-1)// luc nay r moi co nut con ben phai. Neu j=n-1 thi r khong
		 // co nut con ben phai thi khong can so sanh
           if (A[j] < A[j+1])  // tim vi tri nut con lon hon
                j++;
    if (A[j] <=x)
        cont=false;
    else
    {  // di chuyen nut con j len r
       A[r]= A[j];
       r=j ;      // xem lai nut con co phai la dong khong
       j=2*r+1;
    }
  }
  A[r]=x;
}
void Heap_sort(int A[], int n)
{
  int i, temp;
  for (i=n/2-1; i>=0; i--)  // Tao heap ban dau
    Adjust(A, i,n);

  for (i=n-2; i>=0; i--)
  {
     temp= A[0];           // Cho A[0] ve cuoi heap
     A[0] = A[i+1];
     A[i+1] = temp;
     Adjust(A,0,i+1);       // Dieu chinh lai heap tai vi tri 0
			       // Luc nay, 2 cay con o vi tri 1 va 2 da la heap
			       
			       
	if(i == n - 6)
		break;		       
   }
}
int main()
{
	int a[16] = {2,88,5,10,8,8,8,11,12,19,11,23,34,55,66,12};
	Heap_sort(a,16);
	for(int i = 0; i < 16; i++)
	{
		cout << a[i] << "  ";
	}
}

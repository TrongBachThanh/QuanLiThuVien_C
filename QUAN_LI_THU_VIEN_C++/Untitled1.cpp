#include <iostream>
#include <cstdio>
using namespace std;

struct NgayThang
{
	int ngay;
	int thang;
	int nam;
};
typedef struct NgayThang NGAY_THANG;


int LeapYear(int year)
{
    if (year % 400==0) return 1;
    else if (year % 100!=0 && year % 4==0) return 1;
    return 0;
}

int tinhKhoangCachNgay(NGAY_THANG ngay1, NGAY_THANG ngay2)
{
	 int dateOfYear=0,dateOfMonth=0, date=0;
 
    /* Tinh khoang cach so ngay giua 2 nam */
    for (int i=ngay1.nam;i<ngay2.nam;i++)
        if( LeapYear(i)) dateOfYear+=366;  
        else dateOfYear+=365;
 
    /* Tinh khoang cach so ngay giua 2 thang */
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
//    if ( LeapYear(ngay2.nam)) a[1]=29;           /////
//    if (ngay1.thang>ngay2.thang)
//    {
//        for (int i=ngay1.thang;i<ngay2.thang;i++)
//            dateOfMonth-=a[i-1];
//    }
//    else
//    {
//        for (int i=ngay1.thang;i<ngay2.thang;i++)
//            dateOfMonth+=a[i-1];
//    }
// 
//    /* Tinh khoang cach giua 2 ngay */
//    date=ngay2.ngay-ngay1.ngay;       //Ket qua tinh ca ngay cuoi cung
//    int khoangcachngay = dateOfYear + dateOfMonth + date;
//    return khoangcachngay;


	int lechngaythang1 = 0;
	int lechngaythang2 = 0;
	
	if ( LeapYear(ngay1.nam)) a[1]=29; 
	for(int i = 1; i < ngay1.thang; i++)
	{
		lechngaythang1 += a[i-1];
	}	
	lechngaythang1 = lechngaythang1 + ngay1.ngay - 1;
	
	
	cout << "Lech ngay 1: " << lechngaythang1 << endl;
	
	
	
	if ( LeapYear(ngay2.nam)) a[1]=29; 
	else a[1] = 28;
	for(int i = 1; i < ngay2.thang; i++)
	{
		lechngaythang2 += a[i-1];
	}	
	lechngaythang2 = lechngaythang2 + ngay2.ngay - 1;
	cout << "Lech ngay 2: " << lechngaythang2 << endl;
	int khoangcachngay = dateOfYear + lechngaythang2 - lechngaythang1;
	return khoangcachngay;
}

int main()
{
	NGAY_THANG ngay1 = {15,7,2019};
	NGAY_THANG ngay2 = {8,8,2019};
	cout << "Khoang cach giua hai ngay: " << tinhKhoangCachNgay(ngay1,ngay2);
}

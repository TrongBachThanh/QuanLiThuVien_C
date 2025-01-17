#pragma once
#include <iostream>
#include "Marcro.h"
using std::string;

struct TenHo
{
	string hoten;
	uint MADG;
};
typedef struct TenHo TEN_HO;

struct Temp_List
{
	uint index;
	uint MADG;
};
typedef struct Temp_List TEMP_LIST;

struct NodeTempList
{
	TEMP_LIST tl;
	struct NodeTempList * pNext;
};
typedef struct NodeTempList NODE_TEMPLIST;

struct ListTempList
{
	//so phan tu
	// int n;
	NODE_TEMPLIST *pHead;
	NODE_TEMPLIST *pTail;

};
typedef struct ListTempList LIST_TEMPLIST;

// ..... khoi tao........
void initList_TEMPLIST(LIST_TEMPLIST &l);

//.......get node.........
NODE_TEMPLIST* GetNode_TEMPLIST(uint index, uint MADG);

//...... add tail link list........
void AddTailList_TEMPLIST(LIST_TEMPLIST &l, uint index, uint MADG);

// function to find out middle element
NODE_TEMPLIST * Middle(NODE_TEMPLIST * start, NODE_TEMPLIST * last);

// Function for implementing the Binary Search on linked list
NODE_TEMPLIST * BinarySearch_TEMPLIST(LIST_TEMPLIST l, uint index);

//void XoaHead_TEMPLIST(LIST_TEMPLIST &l)
//{
//	NODE_TEMPLIST * p = l.pHead;
//	l.pHead = l.pHead->pNext;
//	delete p;
//}
//
//void XoaNodeBatKy_TEMPLIST(LIST_TEMPLIST &l, TEMP_LIST tl)
//{
//	if (tl.index == 0)
//	{
//		XoaHead_TEMPLIST(l);
//		return;
//	}
//	//  node p l� node  truoc node can xoa.
//	NODE_TEMPLIST * p  = BinarySearch_TEMPLIST(l, tl.index -1);
//	if (p == NULL || p->pNext == NULL)
//		return;
//	
//	NODE_TEMPLIST * q = p->pNext->pNext;
//	delete (p->pNext); // free memory
//	p->pNext = q; 
//}
//

//............xoa list..................
void ClearAll_TEMPLIST(LIST_TEMPLIST &l);






void initList_TEMPLIST(LIST_TEMPLIST &l)
{
	l.pHead = l.pTail = NULL;

}

NODE_TEMPLIST* GetNode_TEMPLIST(uint index, uint MADG)
{
	NODE_TEMPLIST *p = new NODE_TEMPLIST;
	if (p == NULL) {
		return NULL;
	}
	p->tl.index = index;
	p->tl.MADG = MADG;
	p->pNext = NULL;
	return (p);
}

void AddTailList_TEMPLIST(LIST_TEMPLIST &l, uint index, uint MADG)
{
	// tao Node
	NODE_TEMPLIST *p = GetNode_TEMPLIST(index, MADG);
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;

	}
}

NODE_TEMPLIST * Middle(NODE_TEMPLIST * start, NODE_TEMPLIST * last)
{
	if (start == NULL)
		return NULL;
	NODE_TEMPLIST * slow = start;
	NODE_TEMPLIST * fast = start->pNext;

	while (fast != last)
	{
		fast = fast->pNext;
		if (fast != last)
		{
			slow = slow->pNext;
			fast = fast->pNext;
		}
	}
	return slow;
}

// ne su dung tim kiem tuyen tinh vi cai nao cung bigO(n)
NODE_TEMPLIST * BinarySearch_TEMPLIST(LIST_TEMPLIST l, uint index)
{
	NODE_TEMPLIST *start = l.pHead;
	NODE_TEMPLIST *last = NULL;
	do
	{	//Find middle
		NODE_TEMPLIST * mid = Middle(start, last);
		// if middle is empty
		if (mid == NULL)
			return NULL;

		// if value is present at middle
		if (mid->tl.index == index)
			return mid;
		// if value is more than mid
		else if (mid->tl.index < index)
			start = mid->pNext;
		// if value is less than mid
		else
			last = mid;
	} while (last == NULL || last->pNext != start);
	return NULL; // value not present;
}

void ClearAll_TEMPLIST(LIST_TEMPLIST &l)
{
	NODE_TEMPLIST *p;
	while (l.pHead != NULL)
	{
		p = l.pHead;
		l.pHead = l.pHead->pNext;
		delete p;
	}
}


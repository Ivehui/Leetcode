/*
 * addTwoNumbers.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: chappie
 */

#include "include.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	if(l1 == NULL)
		return l2;
	if(l2 == NULL)
		return l1;
	ListNode lr(l1->val+l2->val);
	lr.next = addTwoNumbers(l1->next,l2->next);
	if(lr.val>9)
	{
		lr.val %= 10;
		if(lr.next==NULL)
		{
			ListNode temp(1);
			lr.next = &temp;
		}else
		{
			lr.next->val++;
		}
	}
	return &lr;
}

void runAdd(void){
	ListNode a1(2);
	ListNode b1(4);
	ListNode c1(3);
	ListNode a2(5);
	ListNode b2(6);
	ListNode c2(4);

	ListNode* l1;
	ListNode* l2;
	ListNode* lr;

	b1.next = &c1;
	a1.next = &b1;
	l1 = &a1;

	b2.next = &c2;
	a2.next = &b2;
	l2 = &a2;

	lr = addTwoNumbers(l1,l2);

}

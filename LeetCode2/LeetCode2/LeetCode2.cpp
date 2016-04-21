// LeetCode2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};



class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* current = new ListNode(0);
		ListNode* l = current;

		for (int flag = 0; l1 != NULL || l2 != NULL;)
		{
			current->val += (l1 != NULL ? l1->val : 0) + (l2 != NULL ? l2->val : 0);
			if (l1)l1 = l1->next;
			if (l2)l2 = l2->next;
			flag = current->val / 10;
			current->val = current->val % 10;
			if (l1 || l2 || flag>0)
			{
				current->next = new ListNode(flag);
				current = current->next;
			}
		}

		return l;
	}
};


int main()
{
	ListNode *l1;
	ListNode *l2;
	ListNode *l;
	int a[3] = { 3,4,2 };
	int b[3] = { 5,6,4 };
	std::cout << "the result is" << std::endl;
	l1 = new ListNode(a[0]);
	l2 = new ListNode(b[0]);
	for (int i = 0; i < 2; i++) {
		l1->next = new ListNode(a[i+1]);
		l2->next = new ListNode(b[i+1]);
		
	}

	Solution S;
	l = S.addTwoNumbers(l1, l2);
	while (l != NULL) {
		std::cout << l->val;
		l = l->next;
	}
    return 0;
}


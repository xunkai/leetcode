/*You are given two non - empty linked lists representing two non - negative integers.The digits are stored in reverse order and each of their nodes contain a single digit.Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
   Output : 7 -> 0 -> 8*/

#include <cstdio>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

int main() {

	freopen("a.txt", "r", stdin);

	return 0;
}


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int num1 = 0,num2 = 0,num=0;
	int pow = 1;
	while (l1->next != NULL) {
		num1 += l1->val*pow;
		pow *= 10;
		l1 = l1->next;
	}
	pow = 1;
	while (l2->next != NULL) {
		num2 += l2->val*pow;
		pow *= 10;
		l2 = l2->next;
	}
	
	num = num1 + num2;
	ListNode* l3;
	ListNode* l=l3;

	return l3;
}


void add(ListNode* l,int x){
	ListNode* temp;
	temp->val = x;
	temp->next = NULL;
	l->next = temp;
}

/**
 * Definition for singly-linked list.
 */

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :
			val(x), next(0) {
	}
};
#define NULL 0;
class Solution {

public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* head = new ListNode(0);
		ListNode* curr = head;
		int carry = 0;
		while ((l1 != 0) && (l2 != 0)) {
			int sum = l1->val + l2->val + carry;
			if (sum > 9) {
				carry = 1;
				sum = sum % 10;
			}

			ListNode* node = new ListNode(sum);
			curr->next = node;
			curr = curr->next;
		}

		return head;
	}
};

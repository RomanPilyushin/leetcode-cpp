/*

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

*/

#include <iostream>

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy, * temp;
        dummy = new ListNode();
        temp = dummy;

        //when both list1 and list2 isn't empty
        while (list1 && list2) {
            if (list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            }
            else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        // we reached at the end of one of the list
        if (list1) temp->next = list1;
        if (list2) temp->next = list2;

        return dummy->next;
    }
};



int main()
{
    ListNode list1 = ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode list2 = ListNode(1, new ListNode(3, new ListNode(4)));

    Solution x = new Solution();

    ListNode res = x.mergeTwoLists(list1, list2);

}

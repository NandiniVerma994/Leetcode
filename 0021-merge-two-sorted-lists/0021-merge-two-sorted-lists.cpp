/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead = new ListNode(-1);
        ListNode* finalHead = dummyHead;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        while(list1 != NULL && list2 != NULL) {
             if(list1->val <= list2->val) {
                //list1 = 1,2
                //list2 = 1
                finalHead->next = list1;
                list1 = list1->next;
            }
            else if(list2->val <= list1->val) {
                    finalHead->next = list2;
                    list2 = list2->next;
                }
                finalHead = finalHead->next;
            }
            if(list1) {
                finalHead->next = list1;
                list1 = list1->next;
            }
            if(list2) {
                finalHead->next = list2;
                list2 = list2->next;
            }
        return dummyHead->next;
    }
};
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete(temp);
        }
        
        ListNode* temp = head;//1
        ListNode* prev = NULL;
        while(temp != NULL) {//1,2,6
            if(temp->val != val) {
                prev = temp;//1, 2
                temp = temp->next;//2,3
            }
            else {
                prev->next = temp->next;
                temp = temp->next;
            }
        }
        return head;
    }
};
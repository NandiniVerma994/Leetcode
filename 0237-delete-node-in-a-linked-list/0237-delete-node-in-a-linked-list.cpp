/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
// 4|200   5|300  1|400   9|NULL
// 100      200    300     400

    void deleteNode(ListNode* node) {
        ListNode* temp = node -> next;//300
         // Copy the value from the next node to the current node
        node->val = temp -> val;//1
        // Update the current node's next pointer to skip the next node
        node->next = temp -> next;//400
        // Delete the next node
        delete temp;//overwritin and then deletig the overwrited one else 1 waala node do baar appear ho jayega
    }
};
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
    ListNode* deleteMiddle(ListNode* head) {
         if (!head) return nullptr; 
        ListNode * fast=head;
        ListNode * slow=head;
        ListNode * del=NULL;
        while (fast && fast->next!=NULL ) {
            del=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode * n=slow;
        del->next=slow->next;
        delete n;
        return del;
        
    }
};

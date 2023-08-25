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
    ListNode* reverseList(ListNode* head) {
        ListNode* nextN = NULL;
        ListNode* prevN = NULL;
        ListNode* cur = head;

        while(cur != NULL){
            nextN = cur->next;     
            cur->next = prevN;     
            prevN = cur;           
            cur = nextN;           
        }
        return prevN;
        
    }
};

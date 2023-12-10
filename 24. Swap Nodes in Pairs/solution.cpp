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
    ListNode* swapPairs(ListNode* head) {
        // base case: empty or only one node
        if(!head || !head->next){
            return head;
        }

        ListNode* newHead = head->next;
        ListNode* third = head->next->next;

        newHead->next = head;
        
        head->next = swapPairs(third);

        return newHead;
        
    }
};

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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = head->next;

        while(odd->next && even->next){
            // all odd connect
            odd->next = even->next;
            // all even connect
            even->next = odd->next->next;

            odd = odd->next;
            even = even->next;
        }
        //connect odd and even
        odd->next = evenHead;
        return head;
        
    }
};

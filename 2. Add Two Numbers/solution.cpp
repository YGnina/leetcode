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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;

        ListNode *dummy = new ListNode(0); // creating an dummy list
        ListNode *cur = dummy;             // intialising an pointer

        while(l1 != nullptr || l2 != nullptr || carry !=0){
            // carry + p1 + p2, then move to the next node
            if(l1 != nullptr){
                carry += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                carry += l2->val;
                l2 = l2->next;
            }
            //add the node to output
            cur->next = new ListNode(carry%10);
            //find if the sum is over 10
            carry /= 10;
            //move to the next node
            cur = cur->next;
        }
        return dummy->next;
    }
};

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
    bool isPalindrome(ListNode* head) {

        //example: 1-2-3-4- 4    -3-2-1
        //                 pre   slow temp 
        // base case: only 1/0 node
        if(head == NULL || head->next == NULL){
            return true;
        }
        ListNode *fast = head;
        ListNode *slow = head;

        // find the middle node = slow
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        // odd number of nodes
        if(fast != NULL && fast->next == NULL){
            slow = slow -> next;
        }

        // reverse the end half
        ListNode *pre = NULL;
        ListNode *temp = NULL;
        while(slow != NULL && slow->next != NULL){
            temp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = temp;
        }

        if(slow != NULL){
            slow->next = pre;
        }

        // compare two parts
        fast = head;
        while(slow != NULL && fast != NULL){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};

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
    ListNode* merge(ListNode* list1, ListNode* list2){
        // empty list
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }

        // set pointer to head node
        ListNode *ptr1 = list1;
        ListNode *ptr2 = list2;

        if(ptr1->val <= ptr2->val){
            ptr1->next = merge(ptr1->next, ptr2);
            return ptr1;
        }else{
            ptr2->next = merge(ptr1,ptr2->next);
            return ptr2;
        }

        // example: [1,4,5],[1,3,4]
        // 1 = 1, next = merge (4,1), 1
        // 4 > 1, next = merge (4,3), 1
        // 4 > 3, next = merge (4,4), 3
        // 4 = 4, next = merge (5,4), 4
        // 5 > 4, next = merge (5,Null), 4
        // null, 5
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){
            return NULL;
        }

        ListNode* ans = NULL;
        int cnt = 0;

        while(cnt < lists.size()){
            ans = merge(ans, lists[cnt]);
            cnt++;
        }
        return ans;
        
    }
};

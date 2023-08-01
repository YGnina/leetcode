class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> list;

        while(temp!=NULL){
            list.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(list.begin() , list.end());
        temp = head;

        int index = 0;

        while(temp!=NULL){
            temp->val = list[index];
            temp = temp->next;
            index++;
        }
        return head;
    }
};

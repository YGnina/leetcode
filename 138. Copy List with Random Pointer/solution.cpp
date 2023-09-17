/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return nullptr;
        }

        Node *cur = head;
        unordered_map<Node*,Node*> mp;

        // store value
        while(cur){
            mp[cur] = new Node(cur->val);
            cur = cur->next;
        }

        // reset cur to the head
        cur = head;
        
        // update next and random
        while(cur){
            mp[cur]->next = mp[cur->next];
            mp[cur]->random = mp[cur->random];
            cur = cur->next;
        }

        return mp[head];
        
    }
};

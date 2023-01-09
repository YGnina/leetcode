/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
public class Solution {
    public ListNode deleteDuplicates(ListNode head) {

        //base case
        if(head==null||head.next==null){
            return head;
        }
        
        //if not duplicate
        if(head.val!=head.next.val){
            //recursive to find all unique element
            head.next=deleteDuplicates(head.next);
            return head;
        }
        else{   //have duplicate elements

            while(head.next!=null&&head.val==head.next.val){
                //remove
                head=head.next;
            }
            
            return deleteDuplicates(head.next);
        }
        
    }
}

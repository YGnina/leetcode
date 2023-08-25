/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public void deleteNode(ListNode node) {
        // change value first
        node.val = node.next.val;
        // connect to next node
        node.next = node.next.next;
        
    }
}

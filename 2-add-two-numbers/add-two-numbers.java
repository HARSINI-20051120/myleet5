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

       class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        int carry = 0;

        // Loop through both lists
        while (l1 != null || l2 != null) {
            // Get values from each list or 0 if null
            int x = (l1 != null) ? l1.val : 0;
            int y = (l2 != null) ? l2.val : 0;

            // Sum + carry
            int sum = x + y + carry;
            carry = sum / 10;

            // Create new node with current digit
            current.next = new ListNode(sum % 10);
            current = current.next;

            // Move to next nodes
            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
        }

        // If carry remains
        if (carry > 0) {
            current.next = new ListNode(carry);
        }

        return dummy.next;
    }
}
 
 
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode myList = new ListNode();
        ListNode startNode = myList;

        int carry = 0;
        int current = 0;

        while (l1 != null || l2 != null) {
            current += carry;
            carry = 0;

            if (l1 != null) {
                current += l1.val;
                l1 = l1.next;
            }

            if (l2 != null) {
                current += l2.val;
                l2 = l2.next;
            }

            carry = current / 10;

            startNode.next = new ListNode(current % 10);
            startNode = startNode.next;

            current = 0;

        }

        if (carry > 0) {
            startNode.next = new ListNode(carry);
        }

        return myList.next;

    }
}
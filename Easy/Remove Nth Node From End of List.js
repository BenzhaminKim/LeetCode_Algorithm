//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/603/
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    
    let dummy = new ListNode();
    let count = 0;
    
    dummy.next = head;
    let first = head;
    
    while(first != null){
        count++;
        first = first.next;
    }
 
    count -= n;
    first = dummy;
    while(count>0){
        count--;
        first = first.next;
    }
    first.next = first.next.next;
    return dummy.next;
};
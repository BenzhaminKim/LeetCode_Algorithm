/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/560/
 /**
 * @param {ListNode} head
 * @return {ListNode}
 */
// a->b->c
// c->b->a
var reverseList = function(head) {
    let prev = null;
    let current = head;
    
    while(current !== null){
        let next = current.next;
        
        current.next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
};
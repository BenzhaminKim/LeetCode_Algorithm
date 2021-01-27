//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/773/
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
    let cache = [];
    
    while(head != null){
        if(cache.includes(head)){
            return true;
        }
        cache.push(head);
        head = head.next;
    }
    return false;
};
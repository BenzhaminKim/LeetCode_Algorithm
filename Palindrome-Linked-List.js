/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    let temp = head;
    let cache = [];
    
    while(head != null){
        cache.push(head.val);
        head = head.next;
    }
    while(temp != null){
        if(temp.val !== cache.pop()){
            return false;
        }
        temp = temp.next;
    }
    return true;
};
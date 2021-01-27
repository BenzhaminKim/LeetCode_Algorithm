//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/771/

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    let ans = null;
    
    if(l1 === null){
        return l2;
    }
    if(l2 === null){
        return l1;
    }
    if(l1.val > l2.val ){
        ans = l2;
        l2 = l2.next;
    }else{
        ans = l1;
        l1 = l1.next;
    }
    let answer = ans;
    
    while(!(l1 === null && l2 === null)){
        let smaller = null;
        if(l1 === null){
            ans.next = l2;
            break;
        }
        if(l2 === null){
            ans.next = l1; 
            break;
        }
        if(l1.val > l2.val){
            smaller = l2;
            l2 = l2.next;
        }else{
            smaller = l1;
            l1 = l1.next;
        }
        ans.next = smaller;
        ans = ans.next;
    }
    return answer;
        
    
    
};
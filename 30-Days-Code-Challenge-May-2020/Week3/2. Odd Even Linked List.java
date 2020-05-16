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
    public ListNode oddEvenList(ListNode head) {
        
        if(head==null)
            return head;
        
        ArrayList<Integer>arrOdd =  new ArrayList<Integer>();
        ArrayList<Integer>arrEven = new ArrayList<Integer>();
        
        int i=1, odd=0, even=0;
        while(head!=null){
            if(i%2!=0){
                arrOdd.add(head.val);
                head = head.next;
                ++odd;
            }else{
                arrEven.add(head.val);
                head = head.next;
                ++even;
            }
                ++i ;
        }
        
        ListNode answer = new ListNode(arrOdd.get(0));
        ListNode last = answer; 
        
        for(int j=2; j<=odd; j++){
            ListNode new_node = new ListNode(arrOdd.get(j-1));
            last.next = new_node; 
            last=last.next;
        }
         for(int j=1; j<=even; j++){
            ListNode new_node = new ListNode(arrEven.get(j-1));
            last.next = new_node; 
            last=last.next;
        }
              
        return answer;       
    }
    
    
}

//============== Time: O(n), Space: O(1) == LeetCode's Solution
public class Solution {
    public ListNode oddEvenList(ListNode head) {
        if (head == null) return null;
        ListNode odd = head, even = head.next, evenHead = even;
        while (even != null && even.next != null) {
            odd.next = even.next;
            odd = odd.next;
            even.next = odd.next;
            even = even.next;
        }
        odd.next = evenHead;
        return head;
    }
}
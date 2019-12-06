public class Demon1 {


    class ListNode {
      int val;
      ListNode next;
     ListNode(int x) { val = x; }
  }
//    两数相加 II
public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    if(l1 == null){
        return l2;
    }
    if(l2 == null){
        return l1;
    }
    l1 = reverse(l1);
    l2 = reverse(l2);
    ListNode node = new ListNode(1);
    ListNode l3 = node;
    int tem = 0;
    while(l1 != null || l2 != null){
        int x = (l1 == null)? 0:l1.val;
        int y = (l2 == null)? 0:l2.val;
        int sum = x + y + tem;
        tem = sum / 10;
        ListNode node1  = new ListNode(sum % 10);   //头插
        node1.next = l3.next;
        l3.next = node1;
        if (l1 != null) l1 = l1.next;
        if (l2 != null) l2 = l2.next;
    }
    if(tem > 0){
        ListNode node2 = new ListNode(tem);
        node2.next = l3.next;
        l3.next = node2;
    }
    return node.next;

}
    public ListNode reverse(ListNode head){
        ListNode prev = null;
        while(head != null){
            ListNode next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
}

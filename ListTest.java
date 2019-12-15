public class ListTest {
    public static void main(String[] args) {
        LinkedList  headlist = new LinkedList();
        headlist.addLast(2);
        headlist.addFirst(2);
        headlist.addLast(2);
        headlist.addLast(5);
       System.out.println(headlist.addIndex(2,3));
       System.out.println(headlist.contains(1));
       headlist.display();
        headlist.remove(3);
        headlist.addLast(4);
        headlist.addLast(4);
        headlist.addLast(4);
        headlist.display();
        headlist.removeAllKey(4);
        headlist.display();
        System.out.println(headlist.size());
        headlist.clear();
        headlist.display();
    }
}

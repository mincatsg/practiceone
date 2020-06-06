
public class Demoone {
    public static void main(String[] args) {
        int num = 6;
        int num1 = 7;
        num1 = num ^ num1;
        num = num1 ^ num;
        num1 = num1 ^ num;
        System.out.println("num1 = " +num1+  "\tnum = " +num);
    }
}

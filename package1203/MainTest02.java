package package1203;

import java.util.Scanner;

public class MainTest02 {
//    public static void main(String[] args) {
//        Scanner scanner = new Scanner(System.in);
//        String s1 = scanner.next();
//        String s2 = scanner.next();
//        System.out.println(deleteString(s1, s2));
//
//    }
//
//    private static String deleteString(String s1, String s2){
//        StringBuffer sb = new StringBuffer(s1);
//        int num = 0;
//        for(int i = 0; i < s1.length(); i++){
//            for(int j = 0; j < s2.length(); j++){
//                if(s1.charAt(i) == s2.charAt(j)){
//                    sb.deleteCharAt(i - num);
//                    num++;
//                    break;
//                }
//            }
//        }
//        return sb.toString();
//    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(scanner.hasNext()){
            char[] a = scanner.nextLine().toCharArray();
            String s = scanner.nextLine();
            for(int i = 0; i < a.length; i++){
                if(!s.contains((String.valueOf(a[i])))){
                    System.out.print(a[i]);
                }
            }
        }
    }
}

package package1203;

import java.util.Scanner;

public class MainTest03 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            String str = sc.nextLine();
            StringBuffer sb = new StringBuffer(str.charAt(0));
            for(int i = 0; i < str.length(); i++){
                if(!sb.toString().contains(str.valueOf(str.charAt(i)))){
                    sb.append(str.charAt(i));
                }
            }
            System.out.println(sb.toString());
            return;
        }

    }
}

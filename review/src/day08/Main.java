package day08;



//public class Main {
//    private static void method(){
//        System.out.println("no");
//    }

//    public static void main(String[] args) {
//       // ((Main)null).method();
//
//        String s = new String("fun");
//       s = s.toUpperCase();
//        System.out.println(s);
//        String y = s.replace('f','F');
//        y += "xy";
//        System.out.println(y);
//    }
//}
// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
import java.util.Scanner;

public class Main {

    //数字颠倒
//    public static void main(String[] args) {
//        Scanner in = new Scanner(System.in);
//        while (in.hasNextInt()) {// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
//            int a = in.nextInt();
//            String s = new String(a+"");
//           StringBuffer stringBuffer = new StringBuffer(s);
//           stringBuffer = stringBuffer.reverse();
//            System.out.println(stringBuffer.toString());
//        }
//    }


    //末尾0的个数
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextInt()) {// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
            int n = in.nextInt();
            int count = 0;
            for(int i = 1; i <= n; i++){
                int tem = i;
                while (tem % 5 == 0){
                    count++;
                    tem /= 5;
                }
            }
            System.out.println(count);;
        }
    }
}
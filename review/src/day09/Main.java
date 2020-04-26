package day09;

//public class Main {
//    public static void main(String[] args) {
//
//        Object o = new Object(){
//            @Override
//            public boolean equals(Object obj) {
//                return true;
//            }
//        };
//        System.out.println(o.equals("fred"));
//    }


// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
import java.util.Scanner;
public class Main {

    //最小几位达到斐波拉契数列
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextInt()) {// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
            int n = in.nextInt();
            int f1 = 0;
            int f2 = 1;
            int f3 = 0;
            while(f2 <= n){
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;

            }

            System.out.println((f2 - n)>(n - f1)?(n - f1):(f2 - n));


        }
    }
//机器人走方格
    public int countWays(int x, int y) {
        // write code here
        int count = 0;
        if(x == 1 && y == 1){
            count = 1;
            return count;
        }
        if(x - 1 >= 1){
            count++;
            countWays(x-1,y);
        }
        if(y-1 >= 1){
            count++;
            countWays(x,y-1);
        }
        if(x - 1 >= 1 && y-1 >= 1){
            count++;
            countWays(x -1,y-1);
        }
        return count;
    }
}

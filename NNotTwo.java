import java.util.Scanner;
import java.util.*;
public class NNotTwo{
    public static void main(String[] args){
// ��Ҫ��
        Scanner in = new Scanner(System.in);
        int W = in.nextInt(); //��
        int H = in.nextInt();
        int count = 0;
        //Ҳ����( (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) ) = 4
        //Ҳ��ֻ�����ֿ��� 0 4  4 0 �Ǿ����й�2 �й�2
        // ֱ������ ��
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                //��һ�еڶ��� 
               if((i / 2) % 2 == 0){
                   if((j / 2) % 2 == 0){
                       count++;
                   }
               }else{
                   if((j / 2) % 2 == 1){
                       count++;
                   }
               }
            }
        }
        System.out.println(count);
    }
}
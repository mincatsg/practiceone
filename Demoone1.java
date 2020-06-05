import java.util.Random;
import java.util.Scanner;

public class Demoone2 {
    public static void main(String[] args) {
        Getnumber();
        Waterflower();
        //Password();
        Returnone();
        OuQi();
        Int();
        Guess();
    }
    public static void Guess(){
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        int Toguess;
        int number1 = 101;
        int number = random.nextInt(100) + 1;
        while(true) {
            System.out.print("请输入你猜的数字: ");
            Toguess = scanner.nextInt();
            if (Toguess > number) {
                    System.out.println("高了在" + 1 + "~" + Toguess + "之间");
            } else if (Toguess < number) {
                    System.out.println("低了在" + Toguess + "~" + 100 + "之间");
            } else {
                System.out.println("猜对了");
                break;
            }
            number1 = Toguess;
        }
    }
    public static void Int(){
        int num = 1233224;
        for(;num != 0; num /= 10){
            System.out.println(num % 10);
        }
    }
    public static void OuQi(){
        int number = 10;
        int num[] = new int[32];
        int i = 0;
        while(i < 32){
            num[i] = (number >> i) & 1;
            i++;
        }

        for(int j = 31; j >= 0; j -= 2){
            System.out.print(num[j]+ " ");
        }
        System.out.println();
        for(int j = 30; j >= 0; j -= 2){
            System.out.print(num[j]+ " ");
        }
    }
    public static void Returnone(){
        int number = 10;
        int count = 0;
        for(int i = 0;i < 32;i++){
            number = number >>> i;
            if((number & 1) == 1 ){
                count++;
            }
        }
        System.out.println(count);
    }
    public static void Password(){
        String arr = "23545";
        int num = 0;
        String password;
        Scanner scanner = new Scanner(System.in);
        while(num < 3) {
            System.out.print("请输入你的密码: ");
            password = scanner.nextLine();
            if(arr.equals(password)) {
                System.out.println("密码正确");
                break;
            }
            else{
                num++;
                System.out.println("密码错误,你还有"+(3 - num)+ "次机会");
            }
        }
    }
    public static void Waterflower(){
        int bits, ten,hundred;
        for (int number = 100; number <= 999; number++) {
              bits = number % 10;
              ten = number / 10 % 10;
              hundred = number / 100;
              if(number == bits * bits * bits + ten * ten *ten + hundred * hundred * hundred){
                  System.out.println(number);
              }
        }
    }
    public static  void Getnumber() {
        int count = 0;
        for (int number = 1; number <= 100; number++) {
            if (number % 10 == 9) {
                count++;
            }
            if (number / 10 == 9) {
                count++;
            }
        }
        System.out.println(count);
    }
}

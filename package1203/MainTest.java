package package1203;

import java.util.Scanner;

public class MainTest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(countNumber(n));
    }
    private static int countNumber(int n){
        int count = 0;
        if(n % 8 == 0){
            return n/8;
        }
        for(int i = 1; i < n / 8; i++){
            for(int j = 1; j < n / 6; j++){
                if(8*i+6*j == n){
                    return i + j;
                }
            }
        }
        return -1;
    }
}

package com.student;

import java.util.*;
import java.io.*;

public class FirstTest {
    public static void main(String args[]) throws Exception {
        File file = new File("E:" + File.separator + "test.txt");
        DataOutputStream dataOutputStream = new DataOutputStream(
                new FileOutputStream(file));
        DataInputStream dataInputStream = new DataInputStream(
                new FileInputStream(file));
        Random random = new Random();
        int a[] = new int[5000];
        int b[] = new int[5000];
        int sum = 0;
        for (int i = 0; i < 5000; i++) {
            a[i] = (int) random.nextInt(10000);
            if (a[i] == 0) {
                i--;
                continue;
            } else {
                sum += a[i];
                dataOutputStream.writeInt(a[i]);
                b[i] = dataInputStream.readInt();
            }
        }
        dataOutputStream.close();
        dataInputStream.close();
        Arrays.sort(b);
        System.out.println("最小值：" + b[0]);
        System.out.println("最大值：" + b[4999]);
        System.out.println("平均值：" + (sum / 5000));
    }
}

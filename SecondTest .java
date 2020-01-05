package com.student;

import java.util.*;
import java.io.*;

public class SecondTest {
    public static void main(String args[]) throws Exception {
        File file = new File("E:" + File.separator + "test.txt");
        DataOutputStream dataOutputStream = new DataOutputStream(
                new FileOutputStream(file));
        DataInputStream dataInputStream = new DataInputStream(
                new FileInputStream(file));
        Scanner scanner = new Scanner(System.in);
        String name[] = new String[1024];
        long id[] = new long[1024];
        double score[] = new double[1024];
        long l[] = new long[1024];
        double b[] = new double[1024];
        double sum = 0.0;
        int i = 0;
        while (true) {
            System.out.print("������������");
            name[i] = scanner.nextLine();
            if (name[i].equals("")) {
                i--;
                break;
            }
            dataOutputStream.writeChars(name[i]);
            System.out.print("������ѧ�ţ�");
            id[i] = scanner.nextLong();
            dataOutputStream.writeLong(id[i]);
            scanner.nextLine();
            System.out.print("������ɼ���");
            score[i] = scanner.nextDouble();
            scanner.nextLine();
            dataOutputStream.writeDouble(score[i]);
            char s[] = new char[(int) name[i].length()];
            for (int j = 0; j < name[i].length(); j++) {

                s[j] = dataInputStream.readChar();
            }
            l[i] = dataInputStream.readLong();
            b[i] = dataInputStream.readDouble();
            sum += b[i];
            i++;
        }
        double c[] = new double[i];
        for (int j = 0; j < i; j++) {
            c[j] = b[i];
        }
        Arrays.sort(c);
        System.out.println("��Сֵ��" + b[0]);
        System.out.println("���ֵ��" + b[i]);
        System.out.println("ƽ��ֵ��" + (sum / (i + 1)));
        dataOutputStream.close();
        dataInputStream.close();
    }
}

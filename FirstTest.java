package com.student;

import java.io.*;

public class FirstTest {
    public static void main(String args[]) throws IOException {
        char a[] = new char[5];
        try {
            for (int i = 0; i < 5; i++) {
                char c = (char) System.in.read();
                a[i] = c;
                System.out.print(a[i]);
            }

        } catch (ArrayIndexOutOfBoundsException e) {
            e.printStackTrace();
        }

    }
}

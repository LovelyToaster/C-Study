package 字符串;

import java.util.Scanner;
import java.util.Vector;

public class 字符串统计排列 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector v = new Vector() {
            int i = 0;
            String str = null;
        };
        String str = sc.nextLine();
        int some = 0;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            for (int j = i; j < str.length(); j++) {
                char ch1 = str.charAt(j);
                if (ch == ch1)
                    some++;
            }
            some = 0;
        }

    }
}

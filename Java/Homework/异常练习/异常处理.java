package 异常练习;

import java.util.InputMismatchException;
import java.util.Scanner;

public class 异常处理 {
    public static void main(String[] args) {
        int i = 0;
        String str = null;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("Please enter an integer:");
            str = null;
            try {
                str = sc.next();
                i = Integer.parseInt(str);
                System.out.println("Program terminated normally");
                break;
            } catch (NumberFormatException e) {
                System.out.println("The value you entered is:" + str);
            }
        }
    }
}

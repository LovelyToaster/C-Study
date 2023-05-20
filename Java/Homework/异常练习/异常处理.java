package 异常练习;

import java.util.InputMismatchException;
import java.util.Scanner;

public class 异常处理 {
    public static void main(String[] args) {
        int i;
        Scanner sc = new Scanner(System.in);
        while (true) {
            try {
                i = sc.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("X 重试");
            }
        }
    }
}

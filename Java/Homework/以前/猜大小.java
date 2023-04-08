package 以前;

import java.util.Random;
import java.util.Scanner;

public class 猜大小 {
    public static void main(String[] args) {
        Random rd = new Random();
        Scanner sc = new Scanner(System.in);
        int an = rd.nextInt(100) + 1;
        int in;
        while (true) {
            in = sc.nextInt();
            if (in > an)
                System.out.println("大了");
            else if (in < an)
                System.out.println("小了");
            else if (in == an) {
                System.out.println("对了");
                break;
            }
        }
    }
}

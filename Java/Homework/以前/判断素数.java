package 以前;

import java.util.Scanner;

public class 判断素数 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int j = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                j++;
            }
        }
        if (j > 2)
            System.out.println(n + " is not prime");
        else
            System.out.println(n + " is prime");

    }
}

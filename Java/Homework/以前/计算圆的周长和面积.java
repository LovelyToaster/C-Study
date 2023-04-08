package 以前;

import java.util.Scanner;

public class 计算圆的周长和面积 {
    public static void main(String[] args) {
        double PAI = 3.14;
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        System.out.print((int) (2 * PAI * r));
        System.out.print(" ");
        System.out.println((int) (r * PAI * r));
    }
}

package 常用类;

import java.util.Scanner;

public class 停车场计费 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double hour = sc.nextDouble();
        int money = 0;
        if (hour <= 3)
            System.out.println("5");
        else {
            money = (int) (hour - 2) * 1 + 5;
            if (money >= 20)
                System.out.println("20");
            else
                System.out.println(money);
        }
    }
}

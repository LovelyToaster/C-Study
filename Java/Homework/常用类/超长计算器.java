package 常用类;

import java.math.BigInteger;
import java.util.Scanner;

public class 超长计算器 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String num1 = sc.next();
        String str = sc.next();
        String num2 = sc.next();
        BigInteger a = new BigInteger(num1);
        BigInteger b = new BigInteger(num2);
        if (str.equals("+"))
            System.out.println(a.add(b));
        else if (str.equals("-"))
            System.out.println(a.subtract(b));
        else if (str.equals("*"))
            System.out.println(a.multiply(b));
        else if (str.equals("/"))
            System.out.println(a.divide(b));
        else if (str.equals("%"))
            System.out.println(a.remainder(b));
    }
}

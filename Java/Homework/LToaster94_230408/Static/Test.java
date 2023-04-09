package LToaster94_230408.Static;

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        String b1 = null;
        String b2 = null;
        String b3 = null;
        Scanner sc = new Scanner(System.in);
        b1 = sc.nextLine();
        b2 = sc.nextLine();
        b3 = sc.nextLine();
        Book bk = new Book(b1, b2, b3);
        bk.show();
    }
}

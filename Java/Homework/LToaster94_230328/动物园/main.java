package LToaster94_230328.动物园;

import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Panda pd = new Panda(null);
        Tiger tg = new Tiger(null);
        Lion li = new Lion(null);
        String str = sc.nextLine();
        String[] strs = str.split("，");
        pd.name = strs[0];
        pd.age = Integer.parseInt(strs[1]);
        tg.name = strs[2];
        tg.age = Integer.parseInt(strs[3]);
        li.name = strs[4];
        li.age = Integer.parseInt(strs[5]);
        pd.show();
        tg.show();
        li.show();
    }
}

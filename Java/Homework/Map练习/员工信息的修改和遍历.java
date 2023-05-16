package Map练习;

import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

public class 员工信息的修改和遍历 {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        String s;
        String s3;
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        char[] ch = s.toCharArray();
        int j = 0;
        int i2 = 0;
        for (int i = 0; i < ch.length; i++) {
            s = null;
            if (ch[i] != ' ' && ch[i] > 'a' && ch[i] < 'z') {
                s += String.valueOf(ch[i]);
            }
            s3 = s;
            if (ch[i] != ' ' && ch[i] > '0' && ch[i] < '9') {
                s += String.valueOf(ch[i]);
                i2 = Integer.valueOf(s);
            }
            if (j == 0) {
                map.put(s, 0);
                j = 1;
            }
            if (j == 1) {
                map.put(s3, i2);
            }

        }
        Set<String> s1 = map.keySet();
        for (String s2 : s1) {
            map.put(s2, map.get(s2) + 100);
        }
        for (String s2 : s1) {
            System.out.print(s2);
            System.out.print("--");
            System.out.println(map.get(s2));
        }
    }

}

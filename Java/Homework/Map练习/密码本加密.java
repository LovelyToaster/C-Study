package Map练习;

import java.util.HashMap;
import java.util.Scanner;

public class 密码本加密 {
    public static void main(String[] args) {
        HashMap<Character, Character> map = new HashMap<Character, Character>();
        map.put('a', 'r');
        map.put('b', 'h');
        map.put('c', 't');
        map.put('d', 'a');
        map.put('e', 'e');
        map.put('f', 'f');
        map.put('g', 'z');
        map.put('h', 'y');
        map.put('i', 'x');
        map.put('j', 'w');
        map.put('k', 'v');
        map.put('l', 'u');
        map.put('m', 's');
        map.put('n', 'q');
        map.put('o', 'p');
        map.put('p', 'o');
        map.put('q', 'n');
        map.put('r', 'm');
        map.put('s', 'l');
        map.put('t', 'k');
        map.put('u', 'j');
        map.put('v', 'i');
        map.put('w', 'g');
        map.put('x', 'd');
        map.put('y', 'c');
        map.put('z', 'b');
        String s;
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        char[] ch = s.toCharArray();
        for (int i = 0; i < ch.length; i++) {
            if (ch[i] >= 'a' && ch[i] <= 'z') {
                ch[i] = map.get(ch[i]);
            }
            System.out.print(ch[i]);
        }
    }

}

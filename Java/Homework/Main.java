import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static int same_set(int a[], int b[], int len) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < len; i++) {
            int key = a[i];
            int value = map.getOrDefault(key, 0);
            map.put(key, value + 1);
        }

        for (int i = 0; i < len; i++) {
            int key = b[i];
            if (map.containsKey(key)) {
                int value = map.get(key);
                if (value == 1) {
                    map.remove(key);
                } else {
                    map.put(key, value - 1);
                }
            } else {
                return 0;
            }
        }

        return map.isEmpty() ? 1 : 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int[] a = new int[len];
        int[] b = new int[len];

        for (int i = 0; i < len; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < len; i++) {
            b[i] = sc.nextInt();
        }

        Arrays.sort(a);
        Arrays.sort(b);
        System.out.println(same_set(a, b, len));
    }
}

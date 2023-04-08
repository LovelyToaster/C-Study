package 以前;

public class 完数 {
    public static void main(String[] args) {
        int i1 = 0;
        for (int i = 1; i <= 1000; i++) {
            int sum = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    sum = sum + j;
                }
            }
            if (sum == i) {
                System.out.print("wangshu:" + i);
                i1++;
                if (i1 <= 2)
                    System.out.println();
            }
        }
    }
}

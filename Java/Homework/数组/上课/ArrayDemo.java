package 数组.上课;

public class ArrayDemo {
    public static void main(String[] args) {
        int[][] arr = { { 1, 2, 3, 4, 5 }, { 100, 6, 7, 8, 9 }, { 10, 11, 12, 13, 14 }, { 15, 16, 17, 18, 19 } };
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (arr[i][j] > max)
                    max = arr[i][j];
            }
        }
        System.out.println(max);
    }
}

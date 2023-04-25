package 数组.ArrayList;

import java.util.ArrayList;
import java.util.Scanner;

public class 求差集 {
    public static void main(String[] args) {
        ArrayList<String> A = new ArrayList<String>();
        ArrayList<String> B = new ArrayList<String>();
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String[] arr = str.split("\\s+");
        for (int i = 0; i < arr.length; i++) {
            A.add(arr[i]);
        }
        str = sc.nextLine();
        arr = str.split("\\s+");
        for (int i = 0; i < arr.length; i++) {
            B.add(arr[i]);
        }
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < B.size(); j++) {
                if (A.get(i).equals(B.get(j))) {
                    A.remove(i);
                }
            }
        }
        for (int i = 0; i < A.size(); i++)
            System.out.print(A.get(i) + " ");
    }
}

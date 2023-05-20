package Map练习;

import java.util.*;

public class 员工信息的修改和遍历 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 实例化Map对象m
        Map<String, Integer> m = new HashMap<>();

        // 添加员工信息
        for (int i = 0; i < 3; i++) {
            String name = scanner.next();
            int salary = scanner.nextInt();
            m.put(name, salary);
        }

        // 将jack的工资更改为2600元
        m.put("jack", 2600);

        // 为所有的员工工资加薪100元
        for (String key : m.keySet()) {
            int salary = m.get(key);
            m.put(key, salary + 100);
        }

        // 遍历集合中所有的员工
        for (String key : m.keySet()) {
            System.out.println(key + "--" + m.get(key));
        }
    }
}

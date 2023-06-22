package 学院宿舍管理系统;

import java.io.*;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

public class Login {
    HashMap<String, String> login_map = new HashMap<>(); // 保存用户账号密码

    public void password_verify() { // 账号密码验证

        int i = 0;
        Scanner sc = new Scanner(System.in);
        Set<String> user = login_map.keySet();
        System.out.print("输入用户名：");
        String name = sc.next();
        String thisname = null;
        while (i == 0) { // 验证用户名
            for (String s : user) {
                thisname = s;
                if (name.equals(thisname)) {
                    i = 1;
                    break;
                }
            }
            if (i == 0) {
                System.out.println("这里返回账号错误，要求重新输入");
                name = sc.next();
            }
        }
        System.out.print("输入密码：");
        String password = sc.next();
        String thispassword = login_map.get(thisname);
        while (!password.equals(thispassword)) { // 验证密码
            System.out.println("这里返回密码错误，要求重新输入");
            password = sc.next();
        }

    }

    public void user_register() { // 注册
        Scanner sc = new Scanner(System.in);
        System.out.println("注册");
        System.out.print("输入用户名:");
        String new_name = sc.next();
        while (login_map.containsKey(new_name)) { // 判断重复
            System.out.println("重复");
            new_name = sc.next();
        }
        System.out.print("输入密码:");
        login_map.put(new_name, sc.next()); // 前面用户名，后面密码
    }

    public void user_in() throws IOException { // 用户密码写入文件
        FileOutputStream fos = new FileOutputStream("password");
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        oos.writeObject(login_map);
    }

    public void user_out() throws IOException, ClassNotFoundException { // 用户密码写出文件
        FileInputStream fis = new FileInputStream("password");
        ObjectInputStream ois = new ObjectInputStream(fis);
        login_map = (HashMap<String, String>) ois.readObject();

    }
}

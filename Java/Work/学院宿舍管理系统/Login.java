package 学院宿舍管理系统;

import java.io.*;
import java.util.HashMap;
import java.util.Set;

public class Login {
    HashMap<String, String> login_map = new HashMap<>(); // 保存用户账号密码

    public void password_verify(String frame_name, String frame_password) throws IOException, ClassNotFoundException { // 账号密码验证

        user_out();
        int i = 0;
        Set<String> user = login_map.keySet();
        if (frame_name.equals("")) {
            System.out.println("请输入用户名");
            return;
        }
        String thisname = null;
        for (String s : user) {
            thisname = s;
            if (frame_name.equals(thisname)) {
                i = 1;
            }
        }
        if (i == 0) {
            System.out.println("这里返回账号错误，要求重新输入");
            return;
        }
        String thispassword = login_map.get(thisname);
        if (!frame_password.equals(thispassword)) { // 验证密码
            System.out.println("这里返回密码错误，要求重新输入");
        }

    }

    public void user_register(String frame_new_name, String frame_new_password) throws IOException { // 注册
        System.out.println("注册");
        System.out.println(frame_new_name);
        System.out.println(frame_new_password);
        if (login_map.containsKey(frame_new_name)) { // 判断重复
            System.out.println("重复");
            return;
        }
        login_map.put(frame_new_name, frame_new_password); // 前面用户名，后面密码
        user_in();
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

package 学院宿舍管理系统;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        System.setProperty("sun.java2d.noddraw", "true");
        Student stu = new Student();
        Gui gui=new Gui();
        stu.student_out();
        gui.Login_Frame(stu);
//        stu.add_student();
//        gui.Login_Frame(stu );
//        login.user_register();
//        login.password_verify();
//        login.user_in();
    }
}


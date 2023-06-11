package 学院宿舍管理系统;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Login login = new Login();
        login.user_out();
        // login.user_out();
        // login.user_register();
        login.password_verify();
        /*
         * ArrayList<Student> student_manage = new ArrayList<>();
         * Student stu = new Student();
         * student_manage.add(stu.addstudent());
         * stu = student_manage.get(0);
         * stu.getstudent();
         */
        login.user_in();
    }
}

package 学院宿舍管理系统;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Login login = new Login();
        if (true)
            login.password_verify();
        ArrayList<Student> student_manage = new ArrayList<>();
        Student stu = new Student();
        student_manage.add(stu.addstudent());
        stu = student_manage.get(0);
        stu.getstudent();
    }
}

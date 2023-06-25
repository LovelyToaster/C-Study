package 学院宿舍管理系统;

import java.util.ArrayList;
import java.util.Scanner;

public class Student {
    int no;
    String name;
    String sex;
    String institute;
    String dormitory;
    int dormitory_number;
    int phone;
    ArrayList<Student> student_manage = new ArrayList<>();


    public void add_student() { // 添加学生
        Student stu=new Student();
        Scanner sc = new Scanner(System.in);
        System.out.println("输入学号：");
        stu.no = sc.nextInt();
        System.out.println("输入姓名：");
        stu.name = sc.next();
        System.out.println("输入性别：");
        stu.sex = sc.next();
        System.out.println("输入院部：");
        stu.institute = sc.next();
        System.out.println("输入宿舍楼：");
        stu.dormitory = sc.next();
        System.out.println("输入宿舍号：");
        stu.dormitory_number = sc.nextInt();
        System.out.println("输入电话：");
        stu.phone = sc.nextInt();
        student_manage.add(stu);
    }

    public Object[] get_student(Student s) { // 获取学生信息
        Object[] stu_data = new Object[0];
        stu_data = new Object[]{s.no, s.name, s.sex, s.institute, s.dormitory, s.dormitory_number, s.phone};
        return stu_data;
    }

    public void search_student() { // 查找学生信息

    }

    public void modify_student() { // 修改学生信息

    }

}
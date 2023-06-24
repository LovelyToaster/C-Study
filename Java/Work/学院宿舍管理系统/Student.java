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
        Scanner sc = new Scanner(System.in);
        System.out.println("输入学号：");
        this.no = sc.nextInt();
        System.out.println("输入姓名：");
        this.name = sc.next();
        System.out.println("输入性别：");
        this.sex = sc.next();
        System.out.println("输入院部：");
        this.institute = sc.next();
        System.out.println("输入宿舍楼：");
        this.dormitory = sc.next();
        System.out.println("输入宿舍号：");
        this.dormitory_number = sc.nextInt();
        System.out.println("输入电话：");
        this.phone = sc.nextInt();
        student_manage.add(this);
    }

    public String get_student() { // 获取学生信息
        String stu=null;
        for(Student s:student_manage){
            stu=s.dormitory+" "+s.sex;
        }
        return stu;
    }

    public void search_student() { // 查找学生信息

    }

    public void modify_student() { // 修改学生信息

    }

}
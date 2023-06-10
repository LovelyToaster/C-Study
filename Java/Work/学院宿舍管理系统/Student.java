package 学院宿舍管理系统;

import java.util.Scanner;

public class Student {
    int no;
    String name;
    String sex;
    String institute;
    String dormitory;
    int dormitory_number;
    int phone;

    Student addstudent() { //添加学生
        Student stu = new Student();
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
        return stu;
    }

    public void getstudent() { //获取学生信息
        System.out.println(
                no + " " + name + " " + sex + " " + institute + " " + dormitory + " " + dormitory_number + " " + phone);
    }
    public void sreachstudent() { //查找学生信息

    }
    public void modifystudent(){ //修改学生信息

    }
}
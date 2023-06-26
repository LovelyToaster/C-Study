package 学院宿舍管理系统;

import java.io.*;
import java.util.ArrayList;

public class Student {
    String no;
    String name;
    String sex;
    String institute;
    String dormitory;
    String dormitory_number;
    String phone;
    ArrayList<Student> student_manage = new ArrayList<>();

    public int add_student(Student stu) { // 添加学生
        student_manage.add(stu);
        try {
            student_in();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
        return 0;
    }

    public Object[] get_student(Student s) { // 获取学生信息
        return new Object[] { s.no, s.name, s.sex, s.institute, s.dormitory, s.dormitory_number, s.phone };
    }

    public void search_student() { // 查找学生信息

    }

    public void modify_student() { // 修改学生信息

    }

    public void student_in() throws IOException { // 学生写入文件
        BufferedWriter bw = new BufferedWriter(new FileWriter("student"));
        for (Student s : student_manage) {
            bw.write(s.no);
            bw.newLine();
            bw.write(s.name);
            bw.newLine();
            bw.write(s.sex);
            bw.newLine();
            bw.write(s.institute);
            bw.newLine();
            bw.write(s.dormitory);
            bw.newLine();
            bw.write(s.dormitory_number);
            bw.newLine();
            bw.write(s.phone);
            bw.newLine();
        }
        bw.close();
    }

    public void student_out() throws IOException { // 学生写出文件
        File file = new File("student");
        if (!file.exists()) {
            file.createNewFile();
        }
        BufferedReader br = new BufferedReader(new FileReader("student"));
        String str;
        while ((str = br.readLine()) != null) {
            Student stu = new Student();
            stu.no = str;
            str = br.readLine();
            stu.name = str;
            str = br.readLine();
            stu.sex = str;
            str = br.readLine();
            stu.institute = str;
            str = br.readLine();
            stu.dormitory = str;
            str = br.readLine();
            stu.dormitory_number = str;
            str = br.readLine();
            stu.phone = str;
            student_manage.add(stu);
        }
        br.close();

    }

}
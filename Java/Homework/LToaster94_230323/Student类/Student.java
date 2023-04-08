package LToaster94_230323.Student类;

import java.util.jar.Attributes.Name;

public class Student {
    String name;
    int no;
    String studentclass;
    public static int count = 2;

    public Student(String name1, int no1, String studentclass1) {
        name = name1;
        no = no1;
        studentclass = studentclass1;
    }

    public static void main(String[] args) {
        Student s1 = new Student("s1", 17101, "171");
        Student s2 = new Student("s2", 17102, "171");
        System.out.println(s1.name + ", " + s1.no + ", " + s1.studentclass + "; " + s2.name + ", " + s2.no + ", "
                + s2.studentclass + "; " + "count=" + count);
    }
}

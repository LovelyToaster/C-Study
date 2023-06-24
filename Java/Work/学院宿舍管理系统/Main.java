package 学院宿舍管理系统;

public class Main {
    public static void main(String[] args) {
        System.setProperty("sun.java2d.noddraw", "true");
        Student stu = new Student();
//        stu.add_student();
        Gui gui=new Gui();
        gui.Login_Frame(stu );
//        login.user_register();
//        login.password_verify();
//        login.user_in();
    }
}

package LToaster94_230328.Person;

public class Person {
    String name;
    int age;

    public static void main(String[] args) {
        Worker wk1 = new Worker();
        Worker wk2 = new Worker("李四", 45, 1500);
        wk1.show();
        wk2.show();
    }
}

class Worker extends Person {
    int money;

    public Worker() {
        this("张三", 25, 3200);
    }

    public Worker(String name, int age, int money) {
        this.name = name;
        this.age = age;
        this.money = money;
    }

    public void show() {
        if (this.money < 2200) {
            System.out.println(this.name + "小于最低工资2200!");
        }
        System.out.println(this.name + " " + this.age + " " + this.money);
    }
}

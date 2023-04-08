package LToaster94_230328.动物园;

public class animals {
    String variety;
    int age;
    String name;
    String gardenname = "JAVA动物园";

    public animals(String variety) {
        this.variety = variety;
    }

    public void show() {
        System.out.println(gardenname + ": " + "我是" + variety + ", " + "我今年" + age + "岁，" + "我的名字叫" + name);
    }
}

class Panda extends animals {

    public Panda(String variety) {
        super("熊猫");
    }

}

class Tiger extends animals {
    public Tiger(String variety) {
        super("老虎");
    }
}

class Lion extends animals {
    public Lion(String variety) {
        super("狮子");
    }
}
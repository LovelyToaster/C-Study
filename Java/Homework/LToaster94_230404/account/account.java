package LToaster94_230404.account;

public abstract class account {
    int balance = 0;

    public abstract void show();

    public static void main(String[] args) {
        account a = new CurrentAccount();
        a.show();
    }
}

class CurrentAccount extends account {
    int balance = 2500;

    public void show() {
        System.out.println("lixizhi:" + balance*0.002 );
    }
}
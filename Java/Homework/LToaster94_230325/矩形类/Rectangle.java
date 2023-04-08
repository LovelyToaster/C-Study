package LToaster94_230325.矩形类;

public class Rectangle {
    int relong;
    int rewidth;
    String recolor;
    public static int count = 2;

    public Rectangle() {
        this(5, 2, "red");
    }

    public Rectangle(int relong, int rewidth, String recolor) {
        this.relong = relong;
        this.rewidth = rewidth;
        this.recolor = recolor;
    }

    public static void main(String[] args) {
        Rectangle re1 = new Rectangle();
        Rectangle re2 = new Rectangle(3, 4, "green");
        System.out.println(re1.recolor + ", " + re1.relong + ", " + re1.rewidth + ", " + re1.relong * re1.rewidth + "; "
                + re2.recolor + ", " + re2.relong + ", " + re2.rewidth + ", " + re2.relong * re2.rewidth + "; "
                + "count=" + count);
    }
}

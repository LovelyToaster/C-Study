package LToaster94_230325.Point;

public class PointTest {
	public static void main(String[] args) {
		Point p1 = new Point();
		p1.x = 3;
		p1.y = 5;
		p1.show();
		Point p2 = new Point();
		p2.setX(45);
		p2.setY(67);
		System.out.println(p2.getX() + "  " + p2.gexY());
		// 使用有参构造方法，新建一个坐标为（100，200）的对象
		Point p3 = new Point(100, 200);
		p3.show();
		p3.up();
		p3.show();
		p3.up(5);
		p3.show();
	}

}

class Point {

	int x;
	int y;

	public Point() {

	}

	public Point(int i, int j) {
		x = i;
		y = j;
	}

	public void setX(int i) {
		x = i;
	}

	public void setY(int j) {
		y = j;
	}

	public int getX() {
		return x;
	}

	public int gexY() {
		return y;
	}

	public void show() {
		System.out.println("横坐标" + x + "，纵坐标" + y);
	}

	public void show(int i) {
		System.out.println("横坐标" + x + "，纵坐标" + (y + i));
	}

	public void up() {
		y -= 1;
	}

	public void up(int i) {
		y = y - i;
	}
}
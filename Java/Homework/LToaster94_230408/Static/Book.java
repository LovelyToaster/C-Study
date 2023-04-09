package LToaster94_230408.Static;

public class Book {
    static String book1;
    static String book2;
    static String book3;
    static int books;

    public Book(String book1, String book2, String book3) {
        this.book1 = book1;
        books++;
        this.book2 = book2;
        books++;
        this.book3 = book3;
        books++;
    }

    public void show() {
        System.out.println("总共销售" + books + "本图书，书名分别为：");
        System.out.println(book1 + "，" + book2 + "，" + book3);
    }

}

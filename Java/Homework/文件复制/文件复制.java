package 文件复制;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class 文件复制 {
    public static void main(String[] args) throws IOException {
        FileInputStream input = new FileInputStream("/home/pi/VScode/Java/Homework/文件复制/filein.txt");
        FileOutputStream output = new FileOutputStream("/home/pi/VScode/Java/Homework/文件复制/fileout.txt");
        int i = -1;
        while ((i = input.read()) != -1) {
            output.write(i);
        }
        output.close();
        input.close();
    }
}

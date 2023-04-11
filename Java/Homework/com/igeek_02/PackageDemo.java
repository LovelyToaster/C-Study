package com.igeek_02;

public class PackageDemo {
    public static void main(String[] args) {
        java.lang.String s = "使用类全名访问JRE提供更好的类";
        System.out.println(s);
        com.igeek_02.Person person = new com.igeek_02.Person("使用类全名访问同包下的其他类");
        person.setName("使用类全名访问不同包（跨包）下的其他类");
        System.out.println(person.getName());
        com.igeek_02.other.Person person2 = new com.igeek_02.other.Person("使用类全名访问不同包（跨包）下的其他类");
        System.out.println(person2.getName());

    }
}

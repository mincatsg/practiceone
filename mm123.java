﻿//3 设计一个圆形类
class yuan{
    public String rd;
    public int r;
    public double t=3.14;
    public void set(String a,int b){
        rd = a;
        r = b;
    }
    public void get(){
        double zhouchang;
        double mianji;
        zhouchang=2*r*t;
        mianji=t*r*r;
        System.out.println("zhouchang:"+zhouchang);
        System.out.println("mianji:"+mianji);
    }}
class yuanzhuti extends yuan{
    public int h;
    public int geth(){
        return h;
    }
    public void xet(){
        double biaomianji;
        double tiji;
        biaomianji=2*t*r*r+2*r*t*h;
        tiji=t*r*r*h;
        System.out.println("mianji:"+biaomianji);
        System.out.println("tiji:"+tiji);
    }
}
public class mm123{
    public static void main(String args[]){
        yuan yuan1=new yuan();
        yuanzhuti yuanzhuti1=new yuanzhuti();
        yuanzhuti1.r=4;
        yuan1.get();
        yuanzhuti1.xet();
        System.out.println("h of yuanzhuti1:"+yuanzhuti1.geth());
        yuan1.set("(1,2)",2);
        yuanzhuti1.xet();
    }
}



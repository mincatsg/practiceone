import java.util.Scanner;
public class Jiadian {
	public static void main(String[] args) {
	dianqi dq1=new dianqi();
	dq1.jizai();
	dq1.jizai1();
	dq1.jizai2();
	dq1.jizai3();
	
	}

}
class dianqi{
	String a[][]=new String[3][3];
	String b[][]=new String[3][3];
	String c[][]=new String[3][3];
	String d[][]=new String[3][3];
	public void jizai(){
   System.out.println("��һ��ҵ������");
	Scanner in=new Scanner(System.in);
	for(int i=0;i<3;i++){
		System.out.print("�������"+(i+1)+"�������ĵ����ͺ�:");
		a[i][0]=in.nextLine();
		System.out.print("�������"+(i+1)+"�������ļ۸�:");
		a[i][1]=in.nextLine();
		System.out.print("�������"+(i+1)+"�������Ŀ��:");
		a[i][2]=in.nextLine();
		}
	}
	public void jizai1(){
		   System.out.println("�ڶ���ҵ������");
			Scanner in=new Scanner(System.in);
			for(int j=0;j<3;j++){
				System.out.print("�������"+(j+1)+"�������ĵ����ͺ�:");
				b[j][0]=in.nextLine();
				System.out.print("�������"+(j+1)+"�������ļ۸�:");
				b[j][1]=in.nextLine();
				System.out.print("�������"+(j+1)+"�������Ŀ��:");
				b[j][2]=in.nextLine();
}
	}

	public void jizai2(){
			   System.out.println("������ҵ������");
				Scanner in=new Scanner(System.in);
				for(int i=0;i<3;i++){
					System.out.print("�������"+(i+1)+"�������ĵ����ͺ�:");
					c[i][0]=in.nextLine();
					System.out.print("�������"+(i+1)+"�������ļ۸�:");
					c[i][1]=in.nextLine();
					System.out.print("�������"+(i+1)+"�������Ŀ��:");
					c[i][2]=in.nextLine();
	}
	  }
	
	public void jizai3(){
		   System.out.println("������ҵ������");
			Scanner in=new Scanner(System.in);
			for(int i=0;i<3;i++){
				System.out.print("�������"+(i+1)+"�������ĵ����ͺ�:");
				d[i][0]=in.nextLine();
				System.out.print("�������"+(i+1)+"�������ļ۸�:");
				d[i][1]=in.nextLine();
				System.out.print("�������"+(i+1)+"�������Ŀ��:");
				d[i][2]=in.nextLine();
			}
	}
	public void jisuan(){
		
	}
}
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
   System.out.println("第一类家电的数据");
	Scanner in=new Scanner(System.in);
	for(int i=0;i<3;i++){
		System.out.print("请输入第"+(i+1)+"个电器的电器型号:");
		a[i][0]=in.nextLine();
		System.out.print("请输入第"+(i+1)+"个电器的价格:");
		a[i][1]=in.nextLine();
		System.out.print("请输入第"+(i+1)+"个电器的库存:");
		a[i][2]=in.nextLine();
		}
	}
	public void jizai1(){
		   System.out.println("第二类家电的数据");
			Scanner in=new Scanner(System.in);
			for(int j=0;j<3;j++){
				System.out.print("请输入第"+(j+1)+"个电器的电器型号:");
				b[j][0]=in.nextLine();
				System.out.print("请输入第"+(j+1)+"个电器的价格:");
				b[j][1]=in.nextLine();
				System.out.print("请输入第"+(j+1)+"个电器的库存:");
				b[j][2]=in.nextLine();
}
	}

	public void jizai2(){
			   System.out.println("第三类家电的数据");
				Scanner in=new Scanner(System.in);
				for(int i=0;i<3;i++){
					System.out.print("请输入第"+(i+1)+"个电器的电器型号:");
					c[i][0]=in.nextLine();
					System.out.print("请输入第"+(i+1)+"个电器的价格:");
					c[i][1]=in.nextLine();
					System.out.print("请输入第"+(i+1)+"个电器的库存:");
					c[i][2]=in.nextLine();
	}
	  }
	
	public void jizai3(){
		   System.out.println("第四类家电的数据");
			Scanner in=new Scanner(System.in);
			for(int i=0;i<3;i++){
				System.out.print("请输入第"+(i+1)+"个电器的电器型号:");
				d[i][0]=in.nextLine();
				System.out.print("请输入第"+(i+1)+"个电器的价格:");
				d[i][1]=in.nextLine();
				System.out.print("请输入第"+(i+1)+"个电器的库存:");
				d[i][2]=in.nextLine();
			}
	}
	public void jisuan(){
		
	}
}
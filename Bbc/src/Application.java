import java.util.Scanner;

public class Application {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	  System.out.println("�������ַ���:" );
	   Scanner in =new Scanner(System.in);
	   String text=in.nextLine();
	  System.out.println(text);
	    int q=0;
        for(int i=0;i<text.length();i++) {
        	 char e=text.charAt(i);
	       if (e>='A'&&e<='Z') {
	    	 System.out.println(e);
	    	  q++;
	    	  if (i==(text.length()-1)){
	    	  System.out.println(q);}
	       } else if(e>='a'&&e<='z') {
	    	   if(i==0) {
	    		 System.out.println("��һ����ĸ���Ǵ�д��ĸ!");
	    		      break;
	    		   
	    	   }
	       }   
        }
	}

	}

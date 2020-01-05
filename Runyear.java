public class Runyear {
    public static void main(String args[]) {
      for(int year = 1000; year <= 2000; year++){
          if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
              System.out.println(year + "是闰年\n");
          }
      }
    }
}

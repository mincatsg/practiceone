interface shengwu{
    public void breath();
   }
  interface dongwu{
    public void hassex();
    public void eat();
  } 
  interface ren{
     public void think();
     public void study();
 } 
  class jj implements shengwu,  dongwu, ren{
       public void breath(){
         System.out.println("生物: 生物所三s");
     }
       public void hassex(){
          System.out.println("dongwu: dongwuwusdi");
     }
       public void eat(){
          System.out.println("dongwu: donssssw2");
   }
       public void think(){
           System.out.println("ren: meiyouxiangfa");
   } 
      public void study(){
            System.out.println("ren: henhao");
    } }
 public    class FF{
     public static void main (String args[]){
        jj jj1=new jj();
        jj1.breath();
        jj1.hassex();
        jj1.eat();
        jj1.think();
        jj1.study();
}}
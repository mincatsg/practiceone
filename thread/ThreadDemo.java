package thread;

public class ThreadDemo implements Runnable{
    int tickets = 100;
    @Override
    public void run() {
      while(true){
        method();
       }
    }
    private synchronized void method(){
        if(tickets > 0) {
            System.out.println(Thread.currentThread().getName() + ":" + tickets--);
        }
    }
}

public class Age {
    public static void main(String[] args) {
    int age = 100;
    if(age > 0 && age < 19){
        System.out.println("少年");
    }
    else if(age > 18 && age < 29){
        System.out.println("青年");
    }
    else if(age > 28 && age < 56){
        System.out.println("中年");
    }
    else if(age > 55 && age < 101){
        System.out.println("老年");
    }
    else{
        System.out.println("你的输入有误");
    }
    }
}

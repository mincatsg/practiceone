package package2;

import javafx.scene.transform.Rotate;
import package1.Animal;

public class Test {
    public static void main(String[] args) {
        Cat cat = new Cat("小猫");
        walk(cat);
        Duck duck = new Duck("小鸭子");
        walk(duck);
        Robot robot = new Robot();
        walk(robot);
    }

    public static void walk(IRunning buddy) {
        System.out.println("我带着伙伴去散步");
        buddy.run();
    }
}

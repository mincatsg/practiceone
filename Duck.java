package package2;

import package1.Animal;

public class Duck extends Animal implements IRunning, ISwimming, IFlying {
    public Duck(String name) {
        super(name);
    }

    @Override
    public void fly() {
        System.out.println(name + "用翅膀飞");
    }

    @Override
    public void run() {
        System.out.println(name + "一晃一晃的走");
    }

    @Override
    public void swim() {
        System.out.println(name + "正在水上漂");
    }
}

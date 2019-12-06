package package2;

import package1.Animal;

public class Bird extends Animal implements IFlying, IRunning {
    public Bird(String name) {
        super(name);
    }

    public void fly() {
        System.out.println(name + "使用两个翅膀飞");
    }

    @Override
    public void run() {
        System.out.println(name + "使用两个爪子跑");
    }

    // 注解
    @Override
    public void eat(String food) {
    }
}


package package4;

public class test1 {
    public static void main(String[] args) {
        drawShapes();
    }

    public static void drawShape(Shape s) {
        s.draw();
    }

    public static void drawShapes() {
        // 不使用多态的方式
        Cycle cycle = new Cycle();
        Rect rect = new Rect();
        Flower flower = new Flower();

        String[] shapes = {
                "cycle", "rect", "cycle", "rect", "flower"
        };
        for (String shape : shapes) {
            if (shape.equals("cycle")) {
                cycle.draw();
            } else if (shape.equals("rect")) {
                rect.draw();
            } else if (shape.equals("flower")) {
                flower.draw();
            }
        }
    }

    public static void drawShapes2() {
        // 使用多态来完成
        Shape[] shapes = {
                new Rect(),
                new Cycle(),
                new Rect(),
                new Cycle(),
                new Flower()
        };
        for (Shape shape : shapes) {
            shape.draw();
        }
    }

}

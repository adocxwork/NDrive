class Mother {
    int x;
    void show() {
        System.out.println("Value of x : " + x);
    }
    Mother() {
        x = 10;
    }
}

class Child extends Mother {
    // c
}

class Application {
    public static void main(String[] args) {
        Mother m = new Mother();
        m.show();

        Child ch = new Child();
        ch.show();
    }
}
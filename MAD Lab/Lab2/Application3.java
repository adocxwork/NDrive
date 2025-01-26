class Mother {
    static void show() {
    // void show() {
        System.out.println("Hello World");
    }
}

class Child extends Mother {
    static void show() {
    // void show() {
        System.out.println("Hello JUET");
    }
}

class Application3 {
    public static void main(String args[]) {
        Mother m = new Mother();
        m.show();
        
        Child ch = new Child();
        ch.show();

        Mother m1 = new Child ( );
        m1.show();
    }
}

// make table..
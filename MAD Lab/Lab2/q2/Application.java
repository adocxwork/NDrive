class Application {
    public static void main(String[] args) {
        Mother m = new Mother();
        m.x = 10;
        m.show();

        Child ch = new Child();
        ch.x = 20;
        ch.show();
    }
}

// Hello World
// Value of x: 10
// Hello JUET
// Value of x: 20
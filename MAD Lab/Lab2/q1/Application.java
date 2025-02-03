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

// Mother class.
// Value of x: 10
// Mother class.
// Value of x: 20
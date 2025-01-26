class Two extends One {
    // Class Two does not have its own constructor
    // It tries to call the constructor of One, but since One's constructor is parameterized, this will cause an error.
    Two(int x) {
        super(x);  // Explicitly calling the superclass constructor with the argument 'x'
        System.out.println("Two's value of x: " + x);
    }
}
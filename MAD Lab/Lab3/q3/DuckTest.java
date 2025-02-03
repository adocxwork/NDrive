// Interfaces for behaviors
interface FlyBehavior {
    void fly();
}

interface QuackBehavior {
    void quack();
}

interface SwimBehavior {
    void swim();
}

// Concrete behavior classes
class CanFly implements FlyBehavior {
    public void fly() {
        System.out.println("I can fly!");
    }
}

class CannotFly implements FlyBehavior {
    public void fly() {
        System.out.println("I cannot fly!");
    }
}

class Squeak implements QuackBehavior {
    public void quack() {
        System.out.println("Squeak!");
    }
}

class Mute implements QuackBehavior {
    public void quack() {
        System.out.println("I am mute.");
    }
}

class Quack implements QuackBehavior {
    public void quack() {
        System.out.println("Quack!");
    }
}

class Swim implements SwimBehavior {
    public void swim() {
        System.out.println("I am swimming!");
    }
}

// Duck classes
abstract class Duck {
    FlyBehavior flyBehavior;
    QuackBehavior quackBehavior;
    SwimBehavior swimBehavior;

    void performFly() {
        flyBehavior.fly();
    }

    void performQuack() {
        quackBehavior.quack();
    }

    void performSwim() {
        swimBehavior.swim();
    }

    abstract void display();
}

class RubberDuck extends Duck {
    RubberDuck() {
        flyBehavior = new CannotFly();
        quackBehavior = new Squeak();
        swimBehavior = new Swim();
    }

    void display() {
        System.out.println("I am a Rubber Duck.");
    }
}

class WoodenDuck extends Duck {
    WoodenDuck() {
        flyBehavior = new CannotFly();
        quackBehavior = new Mute();
        swimBehavior = new Swim();
    }

    void display() {
        System.out.println("I am a Wooden Duck.");
    }
}

class RedHeadDuck extends Duck {
    RedHeadDuck() {
        flyBehavior = new CanFly();
        quackBehavior = new Quack();
        swimBehavior = new Swim();
    }

    void display() {
        System.out.println("I am a RedHead Duck.");
    }
}

class LakeDuck extends Duck {
    LakeDuck() {
        flyBehavior = new CanFly();
        quackBehavior = new Quack();
        swimBehavior = new Swim();
    }

    void display() {
        System.out.println("I am a Lake Duck.");
    }
}

// Main class to test
public class DuckTest {
    public static void main(String[] args) {
        Duck rubberDuck = new RubberDuck();
        rubberDuck.display();
        rubberDuck.performFly();
        rubberDuck.performQuack();
        rubberDuck.performSwim();

        System.out.println();

        Duck woodenDuck = new WoodenDuck();
        woodenDuck.display();
        woodenDuck.performFly();
        woodenDuck.performQuack();
        woodenDuck.performSwim();

        System.out.println();

        Duck redHeadDuck = new RedHeadDuck();
        redHeadDuck.display();
        redHeadDuck.performFly();
        redHeadDuck.performQuack();
        redHeadDuck.performSwim();

        System.out.println();

        Duck lakeDuck = new LakeDuck();
        lakeDuck.display();
        lakeDuck.performFly();
        lakeDuck.performQuack();
        lakeDuck.performSwim();
    }
}


/*
I am a Rubber Duck.
I cannot fly!
Squeak!
I am swimming!

I am a Wooden Duck.
I cannot fly!
I am mute.
I am swimming!

I am a RedHead Duck.
I can fly!
Quack!
I am swimming!

I am a Lake Duck.
I can fly!
Quack!
I am swimming!

*/
class Pandav extends Bharatvanshi {
    void fight() {
        System.out.println("Pandavs are skilled fighters!");
    }

    void obey() {
        System.out.println("Pandavs are obedient!");
    }

    void kind() {
        System.out.println("Pandavs are kind!");
    }
}

class Arjun extends Pandav {
    void kind() {
        System.out.println("Arjun is very kind!");
    }
}

class Bheem extends Pandav {
    void kind() {
        System.out.println("Bheem is less kind but still good-hearted.");
    }
}

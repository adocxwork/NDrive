public class Mahabharat {
    public static void main(String[] args) {
        // Pandavs
        Arjun arjun = new Arjun();
        Bheem bheem = new Bheem();

        // Kauravs
        Duryodhan duryodhan = new Duryodhan();
        Vikarn vikarn = new Vikarn();

        System.out.println("Arjun:");
        arjun.fight();
        arjun.obey();
        arjun.kind();

        System.out.println("Bheem:");
        bheem.fight();
        bheem.obey();
        bheem.kind();

        System.out.println("Duryodhan:");
        duryodhan.fight();
        duryodhan.obey();
        duryodhan.kind();

        System.out.println("Vikarn:");
        vikarn.fight();
        vikarn.obey();
        vikarn.kind();
    }
}


/*
Arjun:
Pandavs are skilled fighters!
Pandavs are obedient!        
Arjun is very kind!
Bheem:
Pandavs are skilled fighters!
Pandavs are obedient!
Bheem is less kind but still good-hearted.
Duryodhan:
Kauravs are strong fighters!
Kauravs are disobedient!
Kauravs are cruel!
Vikarn:
Kauravs are strong fighters!
Vikarn is obedient!
Vikarn is kind and noble!
*/
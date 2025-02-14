// Create a class HybridAnimal that inherits both Mammal and Reptile classes, demonstrating multiple inheritance concepts.
interface Mammal {
    void Birth();
    void Sound();
}

interface Reptile {
    void Eggs();
    void Skin();
}

class lab implements Mammal, Reptile {
    private String name;

    lab(String name) {
        this.name = name;
    }

    public void Birth() {
        System.out.println(name + " gives birth to live young.");
    }

    public void Sound() {
        System.out.println(name + " makes a mammal sound.");
    }

    public void Eggs() {
        System.out.println(name + " lays eggs.");
    }

    public void Skin() {
        System.out.println(name + " sheds its skin.");
    }

    public void Traits() {
        System.out.println(name + " has mixed traits: Warm-blooded and Cold-blooded.");
    }

    public static void main(String[] args) {
        lab hybrid = new lab("Dragon");
        hybrid.Birth();   
        hybrid.Eggs();     
        hybrid.Skin();    
        hybrid.Sound();   
        hybrid.Traits();  
    }
}

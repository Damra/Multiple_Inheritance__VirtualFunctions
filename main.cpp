#include <iostream>
#include <string>
using namespace std;

// Temel karakter sınıfı
class Character {
protected:
    string name;
public:
    Character(const string& name) : name(name) {}
    virtual ~Character() {}

    virtual void display() const {
        cout << "Character: " << name << endl;
    }
};

// Fighter arayüzü
class Fighter {
public:
    virtual void attack() const = 0;
    virtual ~Fighter() {}
};

// Mage arayüzü
class Mage {
public:
    virtual void castSpell() const = 0;
    virtual ~Mage() {}
};

// Human sınıfı
class Human : public Character {
public:
    Human(const string& name) : Character(name) {}

    void display() const override {
        cout << "Human: " << name << endl;
    }
};

// Elf sınıfı
class Elf : public Character, public Mage {
public:
    Elf(const string& name) : Character(name) {}

    void display() const override {
        cout << "Elf: " << name << endl;
    }

    void castSpell() const override {
        cout << name << " casts a powerful spell!" << endl;
    }
};

// Orc sınıfı
class Orc : public Character, public Fighter {
public:
    Orc(const string& name) : Character(name) {}

    void display() const override {
        cout << "Orc: " << name << endl;
    }

    void attack() const override {
        cout << name << " attacks with a brutal swing!" << endl;
    }
};

// Hem Fighter hem Mage olan bir karakter
class BattleMage : public Character, public Fighter, public Mage {
public:
    BattleMage(const string& name) : Character(name) {}

    void display() const override {
        cout << "Battle Mage: " << name << endl;
    }

    void attack() const override {
        cout << name << " attacks with a magical sword!" << endl;
    }

    void castSpell() const override {
        cout << name << " casts a fireball!" << endl;
    }
};

int main() {
    Human human("John");
    Elf elf("Legolas");
    Orc orc("Grommash");
    BattleMage battleMage("Gandalf");

    // Karakterleri ekrana yazdır
    human.display();
    elf.display();
    orc.display();
    battleMage.display();

    // Yetenekleri kullan
    cout << "\nUsing abilities:\n";
    elf.castSpell();
    orc.attack();
    battleMage.attack();
    battleMage.castSpell();

    return 0;
}
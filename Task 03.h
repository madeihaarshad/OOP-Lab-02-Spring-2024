#include<iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Lion : public Animal {
public:
    void makeSound() override {
        cout << "Lion: !!ROAR!!" << endl;
    }
};

class Elephant : public Animal {
public:
    void makeSound() override {
        cout << "Elephant: !!TRUMPET!!" << endl;
    }
};

class Monkey : public Animal {
public:
    void makeSound() override {
        cout << "Monkey: !!SCREECH!!" << endl;
    }
};

class Bird : public Animal {
public:
    void makeSound() override {
        cout << "Bird: !!CHIRP!!" << endl;
    }
};

// Function to hear the sound of an animal
void hearSound(Animal& animal) {
    animal.makeSound();
}



#include"Task 03.h"
int main() {
    Lion l;
    Elephant e;
    Monkey m;
    Bird b; // New instance of Bird

    // Demonstrate polymorphism by using hearSound function
    hearSound(l);
    hearSound(e);
    hearSound(m);
    hearSound(b); // Demonstrate the addition of Bird without changing hearSound function

    return 0;
}

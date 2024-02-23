#include"Task 04.h"

int main() {
    Flower f(10);
    Tree t(20);
    Bush b(15);

    for (int i = 0; i < 30; ++i) {
        f.grow();
        t.grow();
        b.grow();
    }

    // Display final heights
    cout << "After 30 days:" << endl;
    f.displayHeight();
    t.displayHeight();
    b.displayHeight();

    return 0;
}


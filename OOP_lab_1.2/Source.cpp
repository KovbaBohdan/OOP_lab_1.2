#include "Vector.h"
#include <iostream>

Vector makeVector(int size)
{
    Vector z;
    if (!z.Init(size))
        cout << "Wrong arguments to Init!" << endl;
    return z;
}

int main() {
    Vector m = makeVector(3);
    Vector v;
    v.Read();
    v.Display();

    int element = v.get_element();
    if (element != -1) {
        cout << "Your element: " << element << endl;
    }
    cout << "Euclidean norm: " << v.euclidean_norm() << endl;
    return 0;
}

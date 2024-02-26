#include "Vector.h"
#include <iostream>

using namespace std;

bool Vector::setSize(int value)
{
    if (value > 0) {
        size = value;
        return true;
    }
    else {
        size = 0;
        return false;
    }
}

bool Vector::setError_code(int value)
{
    error_code = value;
    return true;
}

void Vector::memory(int n) {
    size = n;
    data = new int[size];
}

void Vector::set_element(int index, int value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
    else {
        cout << "Index out of range" << endl;
    }
}

int Vector::get_element() const {
    int index;
    cout << "Enter the index of the element you want to get: ";
    cin >> index;
    if (index >= 0 && index < size) {
        return data[index];
    }
    else {
        cout << "Index out of range" << endl;
        return -1;
    }
}

void Vector::Display() const {
    cout << "Vector elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

double Vector::euclidean_norm() const {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += data[i] * data[i];
    }
    return sqrt(sum);
}

void Vector::Read() {
    cout << "Enter the size of the vector: ";
    cin >> size;

    memory(size);

    cout << "Enter the elements of the vector:" << endl;
    for (int i = 0; i < size; ++i) {
        int element;
        cout << "Element " << i << ": ";
        cin >> element;
        set_element(i, element);
    }
};

bool Vector::Init(int size) {
    if (setSize(size)) {
        data = new int [size];
        return true;
    }
    else
    return false;
}

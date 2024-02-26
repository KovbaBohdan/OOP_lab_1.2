#pragma once
using namespace std;

class Vector {
private:
    int* data;
    int size;
    int error_code;

public:
    int getError_code() const { return error_code; }
    int getSize() const { return size; }
    
    bool setSize(int);
    bool setError_code(int);
    
    bool Init(int size);
    void Display() const;
    void Read();

    void memory(int n);
    void set_element(int index, int value);
    int get_element() const;
    double euclidean_norm() const;
};




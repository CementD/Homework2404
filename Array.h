#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    int size;

    void resize(int newSize) {
        T* newData = new T[newSize];
        for (int i = 0; i < newSize; i++) {
            if (i < size) {
                newData[i] = data[i];
            }
            else {
                newData[i] = T();
            }
        }
        delete[] data;
        data = newData;
    }


public:
    Array(int initialSize = 0, int initialCapacity = 10, int growFactor = 1) : size(initialSize) {
        data = new T[initialCapacity];
    }

    ~Array() {
        delete[] data;
    }

    T& operator[](int index) {
        return data[index];
    }

    void Add(const T& element) {
        if (size >= capacity()) {
            resize(capacity() + grow());
        }
        data[size++] = element;
    }

    int GetSize() const {
        return size;
    }

    void SetSize(int newSize, int newGrow = 1) {
        if (newSize < size) {
            size = newSize;
        }
        else {
            resize(newSize + newGrow);
            size = newSize;
        }
    }

    int capacity() const {
        return size;
    }

    int grow() const {
        return 1;
    }
};










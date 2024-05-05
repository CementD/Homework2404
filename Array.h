#include <iostream>

template <class T>
class Array {
private:
    T* data;
    int size;
    int capacity;
    int grow;

    void resize(int newSize);

public:
    Array(int initialSize = 0, int initialCapacity = 10, int growFactor = 1);

    ~Array();

    T& operator[](int index);

    void Add(const T& element);

    int GetSize() const;

    void SetSize(int newSize, int newGrow = 1);

    int Capacity() const;

    int Grow() const;

    void Print() const;
};

template<class T>
Array<T>::Array(int initialSize, int initialCapacity, int growFactor)
    : size(initialSize), capacity(initialCapacity), grow(growFactor) {
    data = new T[initialCapacity];
}

template<class T>
Array<T>::~Array() {
    delete[] data;
}

template<class T>
T& Array<T>::operator[](int index) {
    return data[index];
}

template<class T>
void Array<T>::Add(const T& element) {
    if (size >= capacity) {
        resize(capacity + grow);
    }
    data[size++] = element;
}

template<class T>
int Array<T>::GetSize() const {
    return size;
}

template<class T>
void Array<T>::SetSize(int newSize, int newGrow) {
    if (newSize < size) {
        size = newSize;
    }
    else {
        resize(newSize + newGrow);
        size = newSize;
    }
}

template<class T>
int Array<T>::Capacity() const {
    return capacity;
}

template<class T>
int Array<T>::Grow() const {
    return grow;
}

template<class T>
void Array<T>::Print() const {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}










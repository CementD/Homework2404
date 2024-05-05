#include "Array.h"
#include <iostream>
using namespace std;

int main() {
    Array<int> arr;
    arr.Add(1);
    arr.Add(2);
    arr.Add(3);

    cout << "Size: " << arr.GetSize() << endl;
    arr.Print();

    arr.SetSize(5, 5);

    cout << "Size after SetSize: " << arr.GetSize() << endl;
    arr.Print();

    return 0;
}


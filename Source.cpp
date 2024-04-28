#include "Array.h"
#include <iostream>
using namespace std;

int main() {
    Array<int> arr;
    arr.Add(1);
    arr.Add(2);
    arr.Add(3);
    arr.Add(4);

    cout << "Array size: " << arr.GetSize() << endl;

    for (int i = 0; i < arr.GetSize(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.SetSize(8, 8);

    cout << "Array size: " << arr.GetSize() << endl;

    for (int i = 0; i < arr.GetSize(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



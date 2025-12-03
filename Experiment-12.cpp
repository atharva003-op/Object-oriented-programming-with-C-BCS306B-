#include <iostream>
#include <stdexcept>
using namespace std;

class ArrayHandler {
private:
    const static int arraySize = 5;
    int myArray[arraySize];

public:
    ArrayHandler() {
        for (int i = 0; i < arraySize; ++i) {
            myArray[i] = i + 1;
        }
    }

    int getValueAtIndex(int index) {
        if (index < 0 || index >= arraySize) {
            throw out_of_range("Index out of bounds!");
        }
        return myArray[index];
    }
};

int main() {
    try {
        ArrayHandler arrayHandler;

        int index;
        cout << "Enter the index to access: ";
        cin >> index;

        int value = arrayHandler.getValueAtIndex(index);
        cout << "Value at index " << index << " : " << value << endl;
    }
    catch (const out_of_range &e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unexpected exception occurred." << endl;
    }

    return 0;
}

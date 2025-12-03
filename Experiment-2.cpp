#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int size = 5;   
    int arr[size];

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    cout << "\nAscending Order:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, arr + size, greater<int>());

    cout << "\n\nDescending Order:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

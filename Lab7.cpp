// Task # 1
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // Dynamically allocate array
    int* arr = new int[size];

    // Input values
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display values
    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}



// Task # 2
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}












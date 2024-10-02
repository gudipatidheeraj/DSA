#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if( arr[i] == key) {
            return i;
        }
    }
    return 0;
}

int main() {
    int arr[50];
    int array_size;
    cout << "Enter size of array:" << endl;
    cin >> array_size;
    cout << "Enter elements in array: " << endl;
    for(int i = 0; i < array_size; i++) {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter search key to be found: ";
    cin >> key;
    int result = linearSearch(arr, size, key);
    if(result != 0) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found";
    }
}
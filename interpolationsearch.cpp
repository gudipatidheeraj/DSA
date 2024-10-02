#include<iostream>
using namespace std;

int interpolationsearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while(low <= high && key >= arr[low] && key << arr[high]) {
        if( low == high) {
            if(arr[low] == key) {
                return low;
            }
        return 0;
        }
        int mid = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));

        if ( arr[mid == key]) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return 0;
}

int main() {
    int arr[50];
    int array_size;
    cout << "Enter size of array: " << endl;
    cin >> array_size;
    cout << "Enter array elements of size: " << array_size << endl;
    for(int i = 0; i < array_size; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key to be searched: " << endl;
    cin >> key;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = interpolationsearch(arr, size, key);
    if( result != 0) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found..";
    }
}
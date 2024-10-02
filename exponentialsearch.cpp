#include<iostream>
using namespace std;

int binarysearch(int arr[], int low, int high, int key) {
    while( low <= high) {
        int mid = (low + high) / 2;

        if ( arr[mid] ==  key) {
            return mid;
        }

        else if ( arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}





int exponentialsearch(int arr[], int size, int key) {
    if (arr[0] == key) {
        return 0;
    }

    int i = 1;
    while(i < size && arr[i] <= key) {
        i *= 2;
    return binarysearch(arr, i / 2, min(i, size - 1), key);    
    }
}


int main() {
    int arr[] = { 1,2,3,4,11,12,13,14,23,24,34,44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    int result = exponentialsearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
}
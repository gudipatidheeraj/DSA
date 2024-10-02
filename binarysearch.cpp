#include<iostream>
using namespace std;


int binarysearch(int arr[], int size, int searchelement) {
    int low = 0;
    int high = size - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == searchelement) {
            cout << "Element found..";
            return mid;
        }
        else if ( arr[mid] < searchelement) {
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
    cout << "Enter elements in array:" << endl;
    for(int i = 0; i < array_size; i++) {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchkey;
    cout << "Enter search element you wanted to find: " << endl;
    cin >> searchkey;
    int result = binarysearch(arr, size, searchkey);
    
    if(result != 0) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found.." << endl;
    }
}
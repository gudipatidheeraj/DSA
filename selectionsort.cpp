#include<iostream>
using namespace std;


void selectionsort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minterm = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minterm]) {
                minterm = j;
            }
        }
        swap(arr[minterm], arr[i]);
    }
}
int main() {
    int arr[] = {9,1,4,2,5,34,55,11,44,33,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
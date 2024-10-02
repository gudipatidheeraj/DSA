#include<iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i + 1);
}

int quicksort(int arr[], int low, int high) {
    if( low < high) {
        int parti = partition(arr, low, high);
        quicksort(arr,low, parti - 1);
        quicksort(arr, parti + 1, high);
    }
}

int main() {
    int arr[] = {1,12,3,4,11,5,43,13};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, size - 1);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
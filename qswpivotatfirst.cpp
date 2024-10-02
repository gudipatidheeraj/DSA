#include<iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    for(int j = low + 1; j <=high; j++) {
        if(arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[low],  arr[i - 1]);
    return (i - 1);
}


int quicksort(int arr[], int low, int high) {
    if(low < high) {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}
int main() {
    int arr[] = {4,3,1,6,5,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, size - 1);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
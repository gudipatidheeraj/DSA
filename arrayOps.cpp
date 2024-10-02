#include<iostream>
using namespace std;

void insert(int arr[], int &size, int element, int position) {
    if (size < 0 || position > size) {
        cout << "invalid position! " << endl;
        return;
    }  
    for(int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

void traverse(int arr[], int size) {
    for(int i = 0; i <= size; i++) {
        cout << arr[i] << " " << endl;
    }
}

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position!";
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
    cout << endl;
    size--;
}

void searchingElement(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element) {
            cout << "Element Found";
        }
    }
}
int main() {
    int arr[100] = {1,2,3,4,5};
    int size = 5;
    insert(arr,size,0,3);
    for(int i = 0; i < size; i++) {
        cout << arr[i];
    }
    // traverse(arr, size - 1);
    //deleteElement(arr,size,3);
    // traverse(arr, size - 1);
    // searchingElement(arr,size,6);
}
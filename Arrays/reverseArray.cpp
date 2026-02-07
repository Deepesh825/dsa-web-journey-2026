#include <iostream>
using namespace std;
// Function to reverse array
void reverse(int arr[], int size) {
    int start =  0;
    int end = size-1;

    while(start<=end){
        // 1. Method 1
        swap(arr[start], arr[end]);
        // 2. Method 2
        // int temp = arr[end];
        // arr[end] = arr[start];
        // arr[start] = temp;
        start ++;
        end --;
    }
}
// function to print array
void printArray(int arr[], int size){
    for (int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// main function
int main() {
    // Declaration of array
    int arr1[5] = {1, 6, 7, -4, -2};
    int arr2[7] = {2, 57, 65, 89, 74, -9, 1};
    // reversal of array
    reverse(arr1, 5);
    reverse(arr2, 7);

    printArray(arr1, 5);
    printArray(arr2, 7);

    return 0;
}
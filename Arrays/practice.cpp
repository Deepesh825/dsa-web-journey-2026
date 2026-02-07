#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i]<< " ";
    }
}

int main(){
    int array[4] = {5 , 6 , 7};
    printArray(array, 4);
    return 0;
}
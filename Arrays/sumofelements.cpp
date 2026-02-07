#include <iostream>
using namespace std;

void sumOfelements(int arr[] , int size){
    int sum = 0;
    for ( int i = 0; i < size ; i++){
        sum += arr[i];
    }
    cout << "Sum of all elements of the array is: "<< sum;

}

int main(){
    int Array[] = {1, 10 , 8 ,9, 7, 5, 6, 5, 7};
    sumOfelements(Array, 7);
    return 0;
}
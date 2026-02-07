#include <iostream>
using namespace std;

bool search(int arr[] , int size , int key , int& foundIndex){

    for (int i = 0 ; i  < size  ; i++){

        if (arr[i] == key){
            foundIndex = i;
            return 1;
        }
    }
    return 0;
}
int main(){

    int array[5] = { 1, 6 ,7 ,-1 , 5};
    int index = -1;
   
    cout << "Enter Key to be searched"<< endl;
    int key;
    cin >> key;

    bool found = search(array, 5, key, index);
        if (found){
            cout << key << " exists at " << index << endl;
        }
        else{
            cout<< " Key is absent " << endl;
        }
 
    return 0;
}
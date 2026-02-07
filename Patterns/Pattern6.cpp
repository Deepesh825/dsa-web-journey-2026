#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    int row = 1;
    while(row <= n){

        int count = 1 ;
        while(count <= row){
            cout <<row<< " ";
            count++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
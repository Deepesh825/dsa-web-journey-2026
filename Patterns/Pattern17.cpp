#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int space = n - i;
        while(space){
            cout << " " << " ";
            space--;
        }
        int col = 1;
        while(col <= i){
            cout << "*" << " ";
            col++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
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
        int star = n - i + 1;
        while(star){
            cout << "*" << " ";
            star--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
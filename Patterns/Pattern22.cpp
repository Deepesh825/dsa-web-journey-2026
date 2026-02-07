#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    int i = 1;
    while( i <= n){
        int left_triangle = 1;
        while(left_triangle <= n - i + 1){
            cout << left_triangle << " ";
            left_triangle++;
        }
        int stars = 2;
        while( stars <= i ){
            cout << "*" << " ";
            stars++;
        }

        int right_triangle = n - i + 1;
        while(right_triangle >= 1){
            cout << right_triangle << " ";
            right_triangle--;
        }

        cout << endl;
        i++;
    }
    return 0;
}
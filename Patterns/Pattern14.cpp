#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int row = 1;
    char value = 'A';
    while (row <= n){
        int col = 1;
        while (col <= row){
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
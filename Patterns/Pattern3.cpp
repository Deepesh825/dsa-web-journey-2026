#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 12345
// 12345
// 12345
// 12345
// 12345
int main() {
    int n;
    cout << "Enter the no. of rows and columns";
    cin >> n;
    int i = 1;
    while(i <= n){

        int j = 1;
        while(j <= n){
            cout << j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
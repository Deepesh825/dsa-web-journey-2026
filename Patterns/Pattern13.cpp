#include <iostream>
using namespace std;

int main() {
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row -1;
            std::cout << ch << " ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
    return 0;
}
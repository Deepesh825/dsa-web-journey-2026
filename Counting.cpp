#include <iostream>
using namespace std;

void printCounting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{

    int n;
    cout << "Enter till where you want to rpint the countings: ";
    cin >> n;

    cout << "Counting till " << n << " are :" << endl;
    printCounting(n);

    return 0;
}
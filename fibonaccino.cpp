#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1;

    int nextTerm;

    for (int i = 1; i < n; ++i)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}
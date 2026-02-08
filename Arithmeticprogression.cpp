#include <iostream>
using namespace std;

int nthTerm(int n, int a, int d)
{
    int Tn = a + (n - 1) * d;
    return Tn;
}

int main()
{

    int a, d, n;
    cout << "Enter first term: ";
    cin >> a;
    cout << "Enter Common difference: ";
    cin >> d;
    cout << "Enter which term you want to find out: ";
    cin >> n;

    cout << "The " << n << "th term of given AP is: " << nthTerm(n, a, d);

    return 0;
}
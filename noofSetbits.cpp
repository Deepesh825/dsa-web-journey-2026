#include <iostream>
using namespace std;

int nofSetbits(int a, int b)
{
    int count = 0;
    while (a > 0)
    {
        if (a % 2 == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int main()
{
    int num1, num2;
    cout << "enter num 1";
    cin >> num1;
    cout << "enter num 2";
    cin >> num2;

    cout << "No. of set bits including " << num1 << " & " << num2 << " is " << nofSetbits(num1, num2);

    return 0;
}
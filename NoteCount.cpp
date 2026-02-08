#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: " << endl;
    cin >> amount;

    int num = 1;
    int note = 0;

    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (100 * note);
        cout << note << " 100 rs note required" << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount - (50 * note);
        cout << note << " 50 rs note required" << endl;

    }
    case 3:
    {
        note = amount / 20;
        amount = amount - (20 * note);
        cout << note << " 20 rs note required" << endl;

    }
    case 4:
    {
        note = amount / 10;
        amount = amount - (10 * note);
        cout << note << " 10 rs note required" << endl;

    }
    case 5:
    {
        note = amount / 1;
        amount = amount - (1 * note);
        cout << note << " 1 rs note required" << endl;

    }
    default: cout << "enter a valid amount"<<endl;
    }

    return 0;
}
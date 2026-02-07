#include <iostream>
#include <vector>
#include <string>
using namespace std;
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        // Inbuilt  Swap Function
        // {
        //     swap(arr[i], arr[i + 1]);
        // }

        // Manually Coding swap part
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int array[] = {1, -9, 5, 63, 78, 47, 56};

    swapalternate(array, 7);
    printArray(array, 7);
    return 0;
}
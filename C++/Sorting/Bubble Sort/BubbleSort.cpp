#include <iostream>
#include <windows.h>
using namespace std;
int bubbleSort(int[], int);
int main()
{
    system("cls");
    int n;
    cout << "How many numbers you want to enter" << endl;
    cin >> n;
    int value[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " value" << endl;
        cin >> value[i];
        cout << endl;
    }
    bubbleSort(value, n);
    cout << "Sorted Array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << value[i] << endl;
    }
    return 0;
}
int bubbleSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
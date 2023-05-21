#include <iostream>
#include <windows.h>
using namespace std;
int linearSort(int[], int);
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
    linearSort(value, n);
    cout << "Sorted Array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << value[i] << endl;
    }
    return 0;
}
int linearSort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int value = array[i];
        for (int j = 0; j < n; j++)
        {
            if (value < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
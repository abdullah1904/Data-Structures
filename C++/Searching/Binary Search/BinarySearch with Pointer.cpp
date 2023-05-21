#include <iostream>
using namespace std;
void bubbleSort(int *, int);
void binarySearch(int*, int, int);
int main()
{
    int array[5] = {901,947,425,130,463};
    binarySearch(array,5,955);
    return 0;
}
void bubbleSort(int *ptrarr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(ptrarr + j) > *(ptrarr + j + 1))
            {
                int temp = *(ptrarr + j);
                *(ptrarr + j) = *(ptrarr + j + 1);
                *(ptrarr + j + 1) = temp;
            }
        }
    }
}
void binarySearch(int* ptr, int length, int x){
    bubbleSort(ptr,length);
    int left = 0;
    int right = length-1;
    while(left<=right){
        int mid = (left + right)/2;
        if(*(ptr+mid) == x){
            cout<<"Yes! it is in our record"<<endl;
            return;
        }
        else if(*(ptr+mid) < x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<"No! it is not in our record"<<endl;
    return;
}
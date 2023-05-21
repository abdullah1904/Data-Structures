#include <iostream>
using namespace std;
int bubbleSort(int[], int);
bool binarySearch(int[], int,int);
int main(){
    int arr[5] = {130,425,463,901,947};
    int check = 901;
    if(binarySearch(arr,check,5)){
        cout<<"Yes!";
    }
    else{
        cout<<"No!";
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
bool binarySearch(int array[], int x, int length){
    bubbleSort(array, length);
    int left = 0;
    int right = length - 1;
    while(left<=right){
        int mid = (left+right)/2;
        if(array[mid]== x){
            return true;
        }
        else if(array[mid]<x){
            left = mid +1;
        }
        else{
            right = mid-1;
        }
    }
    return false;
}
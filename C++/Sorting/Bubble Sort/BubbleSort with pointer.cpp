#include <iostream>
using namespace std;
void takeValue(int*, int);
void bubbleSort(int*,int);
void print(int*,int);
int main(){
    cout<<"Bubble Sort using Pointers"<<endl;
    int n = 5, array[n], *arrptr = array;
    takeValue(arrptr,n);
    bubbleSort(arrptr,n);
    print(arrptr,n);
    return 0;
}
void takeValue(int* arptr, int n){
    for(int i = 0; i<n;i++){
        cout<<"Enter the number "<<i+1<<" value of array: ";
        cin>>*arptr;
        arptr++;
    }
}
void bubbleSort(int* ptrarr, int n){
    for(int i = 0 ; i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
            if(*(ptrarr+j) > *(ptrarr + j + 1)){
                int temp = *(ptrarr + j);
                *(ptrarr + j) = *(ptrarr + j + 1);
                *(ptrarr + j + 1) = temp;
            }
        }
    }
}
void print(int* ptr, int n){
    for(int i = 0 ; i<n; i++){
        cout<<*ptr<<endl;
        ptr++;
    }
}
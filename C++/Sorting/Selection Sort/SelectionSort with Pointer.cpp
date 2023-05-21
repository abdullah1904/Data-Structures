#include <iostream>
using namespace std;
void takeValue(int*, int);
void selectionSort(int*,int);
void print(int*,int);
int main(){
    cout<<"Selection Sort using Pointers"<<endl;
    int n = 5, array[n], *arrptr = array;
    takeValue(arrptr,n);
    selectionSort(arrptr,n);
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
void selectionSort(int* ptrarr, int n){
    for(int i = 0 ; i<n;i++){
        for(int j = i + 1; j<n;j++){
            if(*(ptrarr + i)>*(ptrarr + j)){
            int temp = *(ptrarr + i);
            *(ptrarr+i) = *(ptrarr + j);
            *(ptrarr + j) = temp;
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

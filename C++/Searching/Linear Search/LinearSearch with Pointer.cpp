#include <iostream>
using namespace std;
int linearSearch(int*,int*,int);
int main(){
    int n = 5, number;
    int array[n] = {425,947,463,901,130};
    int* arrptr = array, *vptr;
    cout<<"Enter a number to check its record\n";
    cin>>number;
    vptr = &number;
    linearSearch(arrptr, vptr, n);
    return 0;
}
int linearSearch(int *arrptr, int *value, int n){
    for(int i = 0 ; i<n;i++){
        if(*value == *arrptr){
            cout<<"Yes it is in our record";
            return 0;
        }
        else{
            arrptr++;
        }
    }
    cout<<"No it is not in out record";
    return 0;
}
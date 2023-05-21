#include <iostream>
using namespace std;
void binarySearch(int arr[], int l,int r, int x){
    int left = l;
    int right = r-1;
    while(left<=right){
        int mid = (left + right)/2;
        if(x == arr[mid]){
            cout<<"Yes! it is in our record"<<endl;
            return;
        }
        else if(x>arr[mid]){
            binarySearch(arr,mid+1,r,x);
        }
        else{
            binarySearch(arr,left,mid,x);
        }
    }
    cout<<"No! it is not in our record"<<endl;
    return;
}
int main(){
    int array[5] = {130,425,463,901,947};
    int x = 947;
    binarySearch(array,0,5,x);
    return 0;
}
#include <iostream>
using namespace std;
void linearSearch(int*, int, int);
void bubbleSort(int*,int);
class DSA{
    private:
    int* arrptr = NULL, length;
    public:
    DSA(int n): arrptr(new int[n]), length(n){
        // Empty
    }
    ~DSA(){
        delete []arrptr;
        arrptr = NULL;
        cout<<"CLEANED";
    }
    void get(){
        cout<<"Enter the values of Data Structure: "<<endl;
        for(int i = 0; i<length; i++){
            cout<<"Enter the "<<i + 1<<" value: ";
            cin>>*(arrptr+i);
        }
    }
    void print(){
        cout<<"Values of Data Structure is: "<<endl;
        for(int i = 0; i < length;i++){
            cout<<*(arrptr+i)<<endl;
        }
    }
    void search(){
        int value;
        cout<<"Enter the value to search: ";
        cin>>value;
        linearSearch(arrptr, value, length);
    }
    void sort(){
        bubbleSort(arrptr, length);
    }
};
int main(){
    int n;
    cout<<"Enter the length of Data Structure"<<endl;
    cin>>n;
    DSA dsa(n);
    dsa.get();
    dsa.print();
    dsa.sort();
    dsa.print();
    return 0;
}
void bubbleSort(int*ptr , int n){
    for(int i =0; i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                int temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
}
void linearSearch(int* ptr,int value,int n){
    for(int i = 0; i<n;i++){
        if(value == *(ptr+i)){
            cout<<"Yes! it is in our record"<<endl;
            return;
        }
    }
    cout<<"No! it is not in our record"<<endl;
    return;
}
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
bool linearSearch(string [], string);
int main(){
    system("cls");
    string value, data[9] = {"Abdullah" , "Moaz", "Wali", "Saif", "Ghani", "Naheel" , "Farhan", "Adil", "Usama"};
    cout<<"Enter the name to check"<<endl;
    cin>>value;
    bool flag = linearSearch(data, value);
    if(flag == 1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
bool linearSearch(string array[], string check){
    for(int i = 0; i<9;i++){
        if(array[i] == check){
            return true;
        }
    }
    return false;
}
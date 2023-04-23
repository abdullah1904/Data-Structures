#include <iostream>
using namespace std;
struct link{
    int data;
    link* next;
};
class linklist{
    private:
    link* first;
    public:
    linklist(){
        first = NULL;
    }
    void additem(int d){
        link* newlink = new link;
        newlink->data = d;
        newlink->next  = first;
        first = newlink;
    }
    void display(){
        link* current = first;
        while(current != NULL){
            cout<<current->data<<endl;
            current = current->next;
        }
    }
};
int main(){
    linklist list;
    list.additem(130);
    list.additem(425);
    list.additem(947);
    list.display();
    return 0;
}
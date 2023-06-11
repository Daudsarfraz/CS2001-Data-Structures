#include <iostream>
using namespace std;
class node{
    public:
        node(double val){
            int val=NULL;
            int *next=NULL;
        }

};
class item{
    item()
    {
        int *head=NULL;
    }
    int insert(double val){
        node1 = node(val);
        if(*head -> NULL){
            *head=node1;
            *head->next=NULL;
        }
    }
};
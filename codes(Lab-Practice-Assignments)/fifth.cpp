#include <iostream>
using namespace std;
int main(){
    // int arr[5] = {1,2,3,4,5};
    // int *ptr = arr;
    // int *p1 = arr[1];
    // int *p2 = arr[2];
    // int *p3 = arr[3];
    // int *p4 = arr[4];
    // int *p5 = arr[5];
    int x = 100;
int * p1 = &x; // non-const pointer to non-const int
x = 20;
const int * p2 = &x; // non-const pointer to const int
x = 30;
int * const p3 = &x; // const pointer to non-const int
x = 50;
const int * const p4 = &x; // const pointer to const int
    cout << *p1 <<endl;
    cout << *p2 <<endl;
    cout << *p3 <<endl;
    cout << *p4 <<endl;
    

    
    
    return 0;

}
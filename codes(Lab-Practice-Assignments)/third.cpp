#include <iostream>
using namespace std;
int main(){
    int arr[5]= {6,7,8,9,10};
    int *ptr = arr;

    cout << "The value is = " << *ptr++ <<" Address is = " << ptr++ <<endl;
    cout << "The value is = " << ++*ptr <<" Address is = " << ptr++ <<endl;
    cout << "The value is = " << *ptr++ <<" Address is = " << ptr++ <<endl;
    cout << "The value is = " << *ptr++ <<" Address is = " << ptr++ <<endl;
    cout << "The value is = " << *ptr++ <<" Address is = " << ptr++ <<endl;
    return 0;
}
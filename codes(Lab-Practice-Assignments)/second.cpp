#include <iostream>
using namespace std;
int main(){
    int numbers[5];
    int *ptr;

    ptr = numbers;
    *ptr = 10;
    ptr++;
    *ptr = 20;
    ptr = &numbers[2];
    *ptr = 30;
    ptr = numbers + 3;
    *ptr = 40;
    ptr = numbers;
    *(ptr + 4) = 50;
    for(int n = 0; n<5 ;n++ ){
        cout<<numbers[n]<<endl;
    }
    return 0;
}
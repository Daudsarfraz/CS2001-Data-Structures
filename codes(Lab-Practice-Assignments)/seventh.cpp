#include <iostream>
using namespace std;
void table(int i = 0){
   // cout << i << endl;
    i++;
    
    int j = 10;
    cout << j << " * " << i << " = " << j * i << endl; 
    table(i);
}
int main(){
    table();
    return 0;
}
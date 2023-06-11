#include <iostream>
using namespace std;
int addition(int num);
int main(){ 
    int num;
    cout <<"Please enter the number.  ";
    cin>> num;  
    cout << "Addition is. " << addition(num) <<endl;

    
    return 0;
}
int addition(int num){
     if(num == 0){
         return num;
     }
     else 
     return num + addition(num-1);

 }
#include <iostream>
using namespace std;
int factorial(int num);
int main(){ 
    int num;
    cout <<"Please enter the number.  ";
    cin>> num;  
    cout << "Factorial is. " << factorial(num) <<endl;

    
    return 0;
}
int factorial(int num){
     if(num == 0 || num == 1){
         return 1; 
     }
     else 
     return num * factorial(num-1);

 }
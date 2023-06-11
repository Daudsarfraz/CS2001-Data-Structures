#include <iostream>
using namespace std;
int main(){
float FirstNo,SecondNo;
string operation;
cout<<"Enter the firstNo ";
cin>>FirstNo;
cout<<"Enter the operation you want to perform"<<endl<<"Press '+' for Addition "<<endl<<"press '-' for subtraction "<<endl<<"press '*' for multiplication "<<endl<<"press '/' for division"<<endl<<"Please select ";
cin>>operation;
cout<<"Enter the SecondNo ";
cin>>SecondNo;
if(operation=="+"){
    cout<<"The sum of "<<FirstNo<<" and "<<SecondNo<<" is "<<FirstNo+SecondNo;
    }
else if(operation=="-"){
    cout<<"The subtraction of "<<FirstNo<<" and "<<SecondNo<<" is "<<FirstNo-SecondNo;
    }
else if(operation=="*"){
    cout<<"The Multiplication of "<<FirstNo<<" and "<<SecondNo<<" is "<<FirstNo*SecondNo;
    }
else if(operation=="/")  {
    cout<<"The division of "<<FirstNo<<" and "<<SecondNo<<" is "<<FirstNo/SecondNo;
}
else {
    cout<<"Wrong input";
}
}

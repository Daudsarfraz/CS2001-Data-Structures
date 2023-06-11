#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter string:  ";
    getline(cin,str);
    cout << str <<endl;
    string rev = reverse(str.begin(),str.end());
    cout << rev << endl;


    return 0;
}
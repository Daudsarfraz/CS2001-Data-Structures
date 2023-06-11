#include <iostream>
#include <string>
using namespace std;
void reverse(string str);
int main(){
    
    string str;
    //int len =;
    cout << "Enter the string: ";
    getline(cin,str);
    cout << "Entered String is ---> "<< str <<endl;;
    //cout << "The reversed string is ---> " << reverse(str) <<endl;
    //cout << reverse(str) << " is reversed."<<endl;
	cout <<"Reversed string is: ";
	reverse(str);
    return 0;
}
void reverse(string str){
	//int len = 0;
    //len = str.length();
    //cout << "The length is: "<< len << endl;
    
    for(int i = (str.length()-1); i>=0;i--){
    	cout << str[i];
	}
	
}



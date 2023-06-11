#include <iostream>
#include <string>
using namespace std;
void length(string str);
int main(){
	string str;
	cout << "Enter the string: ";
	getline(cin,str);
	cout << "Your Entered String is: "<< str << endl;
	length(str);
	 
	 
	return 0;
}

int length(){
	int i = 0;
	int count = 0;
	for(int i = 0;i!='\0';i++){
		count++;
	}
	cout << count << endl;
}

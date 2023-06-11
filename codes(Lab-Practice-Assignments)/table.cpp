# include <iostream>
using namespace std;
int main () {
int i,l,no;
cout<<"enter the interger you want to calculate the table ";
cin>>no;
cout<<"Enter the table upto ";
cin>>l;
for(i=1;i<=l;i++){
    cout<<no<<"x"<<i<<"="<<no*i<<endl;
}
}


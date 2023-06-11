#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,rem,temp;
    int i=0;
    int des=0;
    cout <<"Enter any binary Number ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        des = des+rem*pow(2,i);
        i++;
        temp = temp/10;
    }
    cout<<"DEcimal Number "<<des;
    return 0;
}

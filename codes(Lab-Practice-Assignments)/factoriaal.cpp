#include<iostream>
using namespace std;
int main()
{
    int number;
    int factorial=1;
    cout<<"Enter the number you want the factorial ";
    cin>>number;
    if(number<0)
    {
        cout<<"factorial of -ve number is not possible";
    }
    else
    {
        for(int counter=number;counter>=1;counter--)
        {
            factorial = factorial*counter;
        }
        cout<<"The factorial of the "<<number<<" is "<<factorial;

    }



}


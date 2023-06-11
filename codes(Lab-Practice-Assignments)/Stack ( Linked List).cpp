#include<iostream>
using namespace std;

struct Node
{
    int info;
    Node *prev;
};

class Stack
{
    Node *top, *temp;

    public:

        Stack()
        {
            top = NULL;
            temp = NULL;
        }

        void push( int x)
        {
            if ( top == NULL)
            {
                top = new Node;
                top -> info = x;
                top -> prev = NULL;
                return;
            }

            temp = new Node;
            temp -> info = x;
            temp -> prev = top;
            top = temp;
            temp = NULL;
        }

        void pop()
        {
            if ( top == NULL)
            {
                cout << "Stack Underflow." << endl;
                return;
            }

            temp = top;
            top = top -> prev;
            delete temp;
            temp = NULL;

        }

        void peek()
        {
            cout << "\n" << top -> info << endl;
        }

        void print()
        {
            while ( top != NULL)
            {
                cout << top -> info << "\t";
                pop();
            }
        }
};

int main()
{
    Stack s1;
    s1.push( 1);
    s1.push( 2);
    s1.push( 3);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.push( 12332);
    s1.push( 12312333);
    s1.print();
    s1.pop();
}
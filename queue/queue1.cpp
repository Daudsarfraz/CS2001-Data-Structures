#include <iostream>
using namespace std;
class queue
{
    private:
        int *rear, *front, *arr, *temp;
        int siz;

    public:
        queue();
        void print();
        void enqueue();
        void dequeue();

};

queue :: queue()
{
    rear = front = NULL;
    cout<<"Enter the size of an array: ";
    cin>>siz;
    arr = new int [siz];
}
void queue :: print()
{
    if(front==NULL)
    {
        cout<<"Queue underflows!!! ";
        return;
    }
    temp = front;
    while(temp != rear)
    {
        if(temp==arr+siz-1)
        {
            temp = arr;

        }
        cout<<*temp<<" ";
        temp++;
        if(temp == rear)
        {
            cout<<*temp;

        }
    }
}

void queue :: enqueue()
{
    if(rear==NULL){
        rear = front = arr;
        cout<<"Enter the first element: ";
        cin>>*rear;
        return;
    }

    if((front==arr) && (rear==arr+siz-1))
    {

        cout<<"Queue overflows!!!";
        return;
    }

    if(rear+1 == front)
    {

        cout<<"Queue overflows!!!";
        return;

    }
    if(rear == arr+siz-1){
        rear = arr;
        cout<<"Enter the element: ";
        cin>>*rear;
        return;
    }
    rear++;
    cout<<"Enter the element: ";
    cin>>*rear;


}

void queue :: dequeue()
{
    if(front == NULL)
    {
        cout<<"Queue Underflows!!! ";
        return;

    }

    if(front == rear)
    {
        front = rear = NULL;
        return;

    }

    if(front == arr+siz-1)
    {
        front = arr;
        return;


    }

    front++;
}


int main()
{
    queue *q;

    q = new queue;

    q->enqueue();
    q->enqueue();
    q->enqueue();
    q->print();
    cout<<endl;
    q->dequeue();
    q->print();



}
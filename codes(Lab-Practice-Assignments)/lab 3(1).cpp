#include<iostream>
using namespace std;

struct node
	{
		int info;
		node *next;
		node *prev;
	};
	
class list
{ 
		node *head;
		node *temp;
		node *temp1;
	public:
	list()
	{
		head  = temp =temp1 = NULL;
	}	
	void insert()
	{
		if(head  == NULL)
		{
			head = new node;
			cout<<"enter a value : "<<endl;
			cin>> head->info;
			head->next = head->prev = head;		
			
			return;	
		}
		temp = head ;
		while(temp->next != head)
		{
			temp = temp->next;
		}
		temp1 = new node;
		cout<<"enter a value : "<<endl;
		cin>>temp1->info;
		temp1->next = temp->next;
		temp1->prev = temp;
		temp->next = temp1;
		return;		
	}
	void remove(int n)
	{
		if(head == NULL)
		{
			cout<< "your node is empty"<<endl;
			return;
		}
		
		if(head->info == n)
		{if (head->next = head)
			{
				delete head ;
				head = NULL;
				return;
			}
		}
		while (temp->info != n)
		{
			temp = temp->next;
		}
		if(head->info == n)
		{
			head = head->next;
			head->prev = temp->prev;
			delete temp;
			temp = NULL;
			return;
		}
		if(temp->prev == head)
		{
			temp->next->prev = head;
			head->next =temp->next;
			delete temp;
			temp = NULL;
			return;
		}
		if(temp->next == head )
		{
			temp->prev->next = head;
			head->prev = temp->prev;
			delete temp;
			temp = NULL;
			return;
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		delete temp;
		temp = NULL;
		return;		
	}
	void print()
	{
		temp = head;
		while(temp->next != head)
		{
			
			cout<<temp->info<<"  ";
			temp=temp->next;
		}
		cout<<temp->info<<endl;
	}
};
int main()
{	
	list l;
	int m;
	l.insert();
	l.insert();
//	l.insert();
//	l.insert();
//	l.insert();
//	l.insert();
	l.print();
	cout<<"enter a value to delete a node"<<endl;
	cin>>m;
	l.remove(m);
	l.print();
	l.insert();
	l.print();
	return 0;
}
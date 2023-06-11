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
	
		temp =head;
		if(head == NULL)
		{
			cout<< "your node is empty"<<endl;
			return;
		}
		if(head->info == n)
		{
			
		
		if (head->next == head)
			{
				cout<<"head condition"<<endl;
				delete head ;
				head = NULL;
				return;
			}
			
			
		}
		while (temp->info != n)
		{
			cout<<"while"<<endl;
			temp = temp->next;
		}
		
		cout<<"temp"<<temp->info<<endl;
		if(temp == head)
	
		{
		cout<<"head second condition"<<endl;
		head= head->next;
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		
		delete temp;
		temp=NULL;
		return;		
		}
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
	int m,n;

	l.insert();
	l.insert();
	l.insert();
	l.insert();
	
	l.print();
	cout<<"enter a value to delete a node"<<endl;
	cin>>m;
	l.remove(m);
	l.print();
	return 0;
}
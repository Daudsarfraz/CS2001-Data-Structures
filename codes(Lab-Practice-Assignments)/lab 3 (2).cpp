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
};
int main()
{
	list l;
	l.insert();
	
}
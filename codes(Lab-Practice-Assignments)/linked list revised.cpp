#include<iostream>
using namespace std;

struct node{
	int info;
	node *next;
};
class list{
	node *head;
	node *temp;
	node *temp1;
	public:
		int count;
		int key ;
		int num ;
		
		list(){
			head = temp = temp1 = NULL;
		}
		void add()
		{ cout << "Add function."<<endl;
			if(head == NULL)
			{
				head = new node;
				cout<<"please enter value"<<endl;
				cin>>head->info;
				head->next = NULL;
				return;				
			}
			temp = head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp1 = new node;
			cout<<"please enter value"<<endl;
			cin>>temp1->info;
			temp1->next = NULL;
			temp->next=temp1;
			temp=temp1;	
			return;		
		}
	void insert()
	{
		int n;
		cout<<"do you want to enter a new head"<<endl;
		cout <<"if yes than press 1 else press 0"<<endl;
		cin>>n;
		if (n==1)
		{
		temp1 =new node;
		cout<<"enter the head value you want to enter"<<endl;
		cin>>temp1->info;
		temp1->next=head;
		head = temp1;
		}
		
		if(head == NULL)
			{
				head = new node;
				cout<<"please enter value"<<endl;
				cin>>head->info;
				head->next = NULL;
				return;				
			}
		
		//count =0;
		cout<< "enter value where you want to enter a node"<<endl;
		cin>>key;
		temp = head;
		while(temp!= NULL)
		{
			if (temp->info == key )
			{
//				cout<<"after how keys you want to insert"<<endl;
//				cin>>num;
//				if (count == num)
//				{
				cout<<"enter node -> value you want to insert"<<endl;
				temp1=new node;
				cin>>temp1->info;
				temp1->next = temp->next;
				temp->next = temp1;
//				}
//				count++;
			}
//			else
//			{
//				if(temp->info == key)
//				{
//					
//				temp1 = new node;
//				cin>>temp->info;
//				temp1->next=head;
//				head = temp1;
//				}
//			}
			temp = temp->next;
		}
			
	}
	
	void print(){
		if (head == NULL)
		{
			cout<<"list is empty"<<endl;			
		}
		temp = head;
		while(temp != NULL)
		{
			cout<<temp->info<<" ";
			temp= temp->next;
		}
	}
};

int main(){
	list l;
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.add();
	l.insert();
	l.print();
	
}

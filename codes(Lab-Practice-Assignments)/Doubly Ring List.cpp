#include<iostream>
using namespace std;

struct node{
		int info;
		node *next;
		node *prev;
		
	};
class DoublyRingList{ 
		node *head;
		node *current;
		node *temp1;
		node *temp2;
	public:
	DoublyRingList(){
		head  = current = temp1 = temp2 = NULL;
	}	
	void InsertNode(){
		if(head == NULL){
			head = new node;
			cout<<"Please enter the value of a HEAD : "<<endl;
			cin>> head->info;
			head->next = head;
			head->prev = head;		
			return;	
		}

		current = head ;
		while(current->next != head){
			current = current->next;
		}		
		temp1 = new node;
		cout<<"Plz enter the a value at NODE : "<<endl;
		cin>>temp1->info;
		temp1->next = current->next;
		temp1->prev = current;
		current->next = temp1;
		return;		
	}
	// Deletion Function
	void deleteNode(){
		current = head;
		int delkey;
		cout << "Enter the which  you want to Remove. " ;
		cin >> delkey;
		
		if(head == NULL){
			cout<< "your LIST is empty"<<endl;
			return;
		}
		if(head->info == delkey){
			if(head->next == head){
				delete head ;
				head = NULL;
				head = head->next;
				return;
			}
		}
		while (current->info != delkey)
		{
			current = current->next;
		}
		
		if(head->info == delkey)
		{
			head = head->next;
			head->prev = current->prev;
			delete current;
			current = NULL;
			return;
		}
		if(current->prev == head){
			current->next->prev = head;
			head->next = current->next;
			delete current;
			current = NULL;
			return;
		}
		if(current->next == head )
		{
			current->prev->next = head;
			head->prev = current->prev;
			delete current;
			current = NULL;
			return;
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;
		delete current;
		current = NULL;
		return;		
	}
	void display()	{
		current = head;
		cout << "Displaying Function is called. " << endl;
		while(current->next != head){	
			cout << current -> info << endl;
			current = current -> next;
		}
		cout << current->info << endl;
	}
	
	
	~DoublyRingList();
};

int main(){	
	DoublyRingList brl;
	int postion;
	brl.InsertNode();
	brl.InsertNode();
	brl.InsertNode();
	brl.InsertNode();
	brl.deleteNode();
	brl.display();
	return 0;
}

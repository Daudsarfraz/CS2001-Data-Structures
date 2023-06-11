#include <iostream>
using namespace std;
struct node{
	
	int info;
	node* next;
	node* pre;
	
};

class doublyRingList{
	private:
		int key;
		int count;
		node* head;
		node* temp;
		node* temp1;
		node* temp2;
		
	public:
	
	doublyRingList(){
		head = temp = temp1 = temp2 = NULL;
	}	
		
	void insertion(){
		if(head == NULL){
			cout << " Head is NULL.Now you are going to insert NODE at head. " << endl;
			head = new node();
			cin>>head->info;
			
			head->next = head;
			head->pre = head;
			return;
			
		}
		
		else{
			temp = head;
		cout <<"Where you want to insert. "<<endl;
		cin>>key;
		while(temp->next != head){
			
			if(temp->info==key){
				
				temp1 = new node();
				temp1->next = temp->next;
				temp1->pre = temp;
				temp->next = temp1;
			
			}
		temp = temp->next;	
		}
			
		}
		
		
	}
	
	
	void delete(int data)
	{
		if(head == NULL)
		{
			cout<< "Ring List is empty."<<endl;
			
			return;
		}
		
		if(head->info == data)
		{
			if (head->next = head)
			{
				delete head ;
				head = NULL;
				return;
			}
		}
		while (temp->info != data)
		{
			temp = temp->next;
		}
		if(head->info == data)
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
	void display(){
		if(head == NULL){
			cout << "Head is Empty." << endl;
			
		}
		while(temp->next!=head){
			cout<<"These are values in Doubly Ring List. "<<endl;
			cout << temp->info;
			cout << "Value are printed." << endl;
			temp = temp->next;
		}
	}
	
};

int main(){
	doublyRingList DRL;
	
	
	DRL.insertion();
	DRL.insertion();
	DRL.insertion();
	DRL.insertion();
	DRL.insertion();
	int postion;
	cout << "From where you want you want to Delete value. " << endl;
	cin >> postion;
	DRL.delete(int postion)
	DRL.display();
	
	return 0;
}

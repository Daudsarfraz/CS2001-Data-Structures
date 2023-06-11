#include <iostream>
using namespace std;

struct node{
	int info;
	node* next;
};

// Class
class list{
	private:
		int key;
		int counter;
		string choice;
		node* head;
		node* temp;
		node* temp1;
		
	public:
		list(){
			head = temp = temp1 = NULL;
			int counter = 0;
		}
		
void add(){
	if(head == NULL){
		cout << "Enter the Value of Head. "<<endl;
		head = new node;
		cin >> head->info;
		head->next = NULL;
		return;	
	}
	
	temp = head;
	
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
		cout << "Plz Add the Value. " << endl;
		temp1 = new node;
		cin >> temp1->info;
		temp1->next = NULL;
		temp->next = temp1;
		temp = temp1;
		return;
	
		
	
//	temp = temp -> next;
}
void insert(){
	int choice;
	cout << "Do you want to enter a NEW HEAD. " << endl;
	cout << "Press YES for new Head elsa press NO. " << endl;
	cin >> choice;
	if(choice == "Yes"){
		temp1 =new node;
		cout<<"enter the head value you want to enter"<<endl;
		cin>>temp1->info;
		temp1->next=head;
		head = temp1;
		
	}
	
	
	if(head == NULL){
				head = new node;
				cout<<"please enter value"<<endl;
				cin>>head->info;
				head->next = NULL;
				return;				
			
	}
	temp = head;
	while(temp!=NULL){
		cout << "At which position you want to enter value. " << endl;
		cin >> key;
		if(temp->info == key){
			temp1 = new node;
			cout << "Enter the value of node ." << endl;
			temp1 = new node;
			temp1->next = temp->next;
			temp->next = temp1;
		}
		if(temp->info!=key){
			cout << "You have entered invalid key ." << endl;
			cout << "Plz enter value again. " << endl;
		//	return;
			
		}
		temp = temp->next;
	}
}


void print(){
	temp = head;
	if (temp == NULL){
		cout << "The list is empty.There is no value to print." << endl;
	}
	while(temp!=NULL){
		cout << temp->info <<" " << endl;
		temp = temp->next;
	}
}

void search(){
	temp = head;
	cout << "Now you are going to search value. " << endl;
	cin >> key;
	if (temp == NULL){
		cout << "The list is empty." << endl;
		return;
	}
	while(temp!=NULL){
	if(temp->info == key){
//		cout <<"The key is found. " << endl;
		cout <<"The key "<< key <<" is found at this position. "<< counter << endl;
		counter++; 
	}
	temp = temp->next;
	}
	
}

void delete(){
	temp = head;
	int delekey;
	if(temp==NULL){
		cout << "List is Empty. " << endl;
		return ;
	}
	
//	cout << "Plz enter value which you want to delete. " << endl;
//	cin >> delekey;
	while(temp!=NULL){
		cout << "Plz enter value which you want to delete. " << endl;
		cin >> delekey;
		if(head->info != key){
			cout << "Key is NOT found. " << endl;
			cout << "Enter a valid key. " << endl;
			return;
		}
		if(head->info == key){
			
		}
		
	} 
}
	
};

int main(){
	list obj;
	obj.add();
	obj.add();
	obj.add();
	obj.add();
	obj.add();
	obj.print();
	obj.insert();
	obj.search();
	obj.search();
	
	return 0;
}

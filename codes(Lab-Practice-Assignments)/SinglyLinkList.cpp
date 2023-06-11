#include <iostream>
using namespace std;

struct node{
    
	int info;
    node *next;
    

};

class SSL{
	private:
		int count;
		int key;
		int length;
		node *head;
    	node *temp;
    	node *temp1;
		
	public:
		SSL(){
			head = temp = temp1 = NULL;
		}
		
		~SSL(){		
		}
		void insertt();
		void insert();
		void print();
		void add();
		void search();
		void delet();
};

/* Insert function start from here */

void SSL:: insert(){
		int n;
		cout<<"do you want to enter a new head"<<endl;
		cout <<"if yes than press 1 else press 0"<<endl;
		cin>>n;
		if (n==1){
		temp1 =new node;
		cout<<"enter the value of New Head."<<endl;
		cin>>temp1->info;
		temp1->next=head;
		head = temp1;
		return;
		}
		if(head == NULL){
				head = new node;
				cout<<"please enter value of HEAD...."<<endl;
				cin>>head->info;
				head->next = NULL;
				return;				
			}
		cout<< "enter value where you want to enter a node"<<endl;
		cin>>key;
		temp = head;
		while(temp->next!= NULL){// if you temp->next!=NULL then will not enter in loop
			if (temp->info == key ){
				cout<<"enter node -> value you want to insert"<<endl;
				temp1=new node;
				cin>>temp1->info;
				temp1->next = temp->next;
				temp->next = temp1;
				return;
		}
			temp = temp->next;
		}
			
	}
	
	/* Add function Call from here */
	
void SSL:: add(){
	//	cout<<"Add function."<<endl;
	if(head==NULL){
		cout << "Head is NULL.You are going to enter the new value of Head."<<endl;
		head = new node;
		cin>>head->info;
		head->next=NULL;
		return;
	}
	
		temp = head;
		while(temp->next!=NULL){ // Not use temp!=NULL otherwise new node will not enter
			temp = temp->next; // for reach at last 
		}
		temp1 = new node;
	
		cout << "Enter the values other than node."<<endl;
		cin>>temp1->info;
		temp->next=temp1;
		temp1->next=NULL;
		return;
	}

	/* Print function Call from here */
	
void SSL :: print(){
	cout << "Print Function is called. " <<endl;
	
	if(head == NULL){
		cout <<"Singly Linked List is Empty."<< endl;
	}
	temp = head;
	while(temp!=NULL){
		cout << temp->info << " " ;
		temp = temp->next;
	}
	cout<<endl;	
}

/* Search Function Start from here */ 

void SSL:: search(){
	int key;
	temp = head;
	count = 1;
	cout << "What you want to search. "<<endl;
	cin>>key;
	if(temp==NULL){
		cout << "Link is empty Nothing to search."<<endl;
	}
	
	while(temp!=NULL){
		if(temp->info == key){
			cout<<" The node value is  "<<temp->info << " At position " << count <<" ."<<endl;
			count++;
			return;
		}
	
		else{
			cout<<" Key Not found at. "<< count <<endl;
			count++;
		}
		
		temp = temp->next;		
	}
	cout<<endl;	
}

		/* Delete Function Start from here */
void SSL:: delet(){
	cout <<"Delete function is called. " <<endl;
	cout<<"You want to Delete head. Press 11 else 00."<<endl;
	int choice;
	temp = head;
	cin>>choice;
	if(choice==11){
		temp = head;
		head = head->next;
		delete temp;
		temp = NULL;
		return ;
		
	}
	else
	cout << "Enter node which you want to delete.  ";
	cin >>key;
	while(temp->next!=NULL){
		if(temp->next->info==key){
			temp1 = temp->next;
		    temp->next = temp1->next;	
		//	temp->next = temp->next->next;
			delete temp1;
			temp1 = NULL;
			return;
			
		}
	temp=temp->next;	
	}
}

		/* Main Function Start from here */
int main(){
	SSL ssl;

	cout << "Who many times you want to call Add function.  " ;
	int add;
	cin>>add;
	for(int j=0;j<add;j++){
	ssl.add();
	}

//		cout <<"How many times you want to call INSERT function.  ";
//	int times;
//	cin>>times;
//	for(int i=0;i<times;i++){
//		ssl.insert();
//	}
	
		ssl.search();	
	
	
		ssl.delet();
		ssl.print();
	

	
	return 0;
}

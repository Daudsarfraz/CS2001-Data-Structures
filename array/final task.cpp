n#include<iostream>
using namespace std;

class list{
	private:
			int * arr;
			int * current;
			int * temp1;
			int size;
			int len;
	public:
		list(){
			size = 10;
			arr = new int[size];
			arr = {2,3,5,7,3,2,6,-1,8}
			current = arr;
			len = 0;
			for(int i=0 ; i<size ; i++)
				{
					current++;
					*current = -1;
				}
			
		}
		void print(){
		current= arr;
		for(int i=0; i <size ; i++){
			cout<<*current << endl;
			current = current++;
		}
	
		
				
		void start(){
			current = arr;		
		}

		
				
		void insert(int val) {
			current = arr ;
				
			for (int i = 0; i < size; i++) 
			{
				if (*current != -1)
					{
					current = (current + 1);
					len++;
					}
				if (*current == -1)
					{
					*current = val;
					}
			}
		}		
		
				
		void add(int index, int val) {
			current = arr ;
		if (index < 0) {
			cout << "Invalid index: " << endl;
			return;
		}
		for (int i = 0; i < size; i++) {
			if (i < index) {
				current = (current + 1); 
			}
			else if (i == index) {
				*current = val;
				break;
			}
		}
	} 
	
	
	void update(int val, int pos) {
			curr = arr ;
		if (pos < 0) {
			cout << "Invalid index " << endl;
			return;
		}
		for (int i = 0; i < size; i++)
		 {
			if (i < pos) {
				current = (current + 1); 
			}
			else if (i == pos) {
				*current = val;
				break;
			}
		}
	} 
	
	
	void get(int index) {
		current = arr ;
		if (index < 0) {
			cout << "Invalid index: " << endl;
			return;
		}
		for (int i = 0; i < size; i++) {
			if (i < index) {
				current = (current + 1); 
			}
			else if (i == index) {
				cout<< *current;
				break;
			}
		}
	} 
	
	void clear(){
			for(int i=0 ; i<size ; i++)
				{
					current++;
					*current = NULL;
				}
	
	void remove(int pos) {
		start();
		for (int i = 0; i < size; i++)
		 {
			if (i < pos) {
				current = (current + 1);
			}
			if (i= pos ){
				temp1 = current ;
				delete temp ;
				curr--;
				size--;
			}
 		}
	}
	
	void length() {
			curr = arr ;	
			for (int i = 0; i < size; i++) 
			{
				if (*current != -1)
					{
					current = (current + 1);
					len++;
					}
				if (*curr == -1)
					{
					break;
					}
			}
		}
		
	void find(int num) {
		curr = arr;
		for (int i = 0; i < size; i++) {
			if (*curr == num) {
				cout<<"found   : "<<*current<<endl;//if we it then no need of further iteration
				break;
			}
				current++;	
		 
	}	
	
	
	void isFull() {
			if (end() != -1)
				cout<< "list is full" << endl;
		}
		
			
	void isEmpty(){
			if (end() == -1)
				cout<< "list is not full" << endl;
		}	
	
	
	}
	void end(){
				for(int i=0 ; i<size ; i++)
				{
					current++;
				}
				return *current;
			}
};

int main(){
	list li;// creating object
	// calling functions
	li.get();
	li.update();
	li.insert();
	li.add();
	li.clear();
	li.print();
	li.find();
	li.isFull();
	li.isEmpty();
	li.length();
	li.remove();
	cout << " Done"<<endl;
	
	return 0;
	}

#include<iostream>
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
			arr = {2,3,5,7,3,2,6,-1,8};
			current = arr;
			len = 0;
			for(int i=0 ; i<size ; i++)
				{
					current++;
					*current = -1;
				}
			
		}
		void DeepCopy();
		void print();
		void start();
		void insert(int value);
		void add(int index, int value) ;
		void update(int value, int position) ;
		void get(int index);
		void clear();
		void remove(int position) ;
		void length() ;
		void find(int num);
		void isFull();
		void isEmpty();
		void end();
};


		void list :: public print(){
		current= arr;
		for(int i=0; i <size ; i++){
			cout<<*current << endl;
			current = current++;
		}
	
		
				
		void list :: public start(){
			current = arr;		
		}

		
				
		void list :: public insert(int value) {
			current = arr ;
				
			for (int i = 0; i < size; i++) {
				if (*current != -1)	{
					current++;
					len++;
					}
				if (*current == -1){
					*current = value;
					}
			}
		}		
		
				
		void list :: public add(int index, int value) {
			current = arr ;
		if (index < 0) {
			cout << "Invalid index: " << endl;
			return;
		}
		for (int i = 0; i < size; i++) {
			if (i < index) {
				current++; 
			}
			else if (i == index) {
				*current = value;
				break;
			}
		}
	} 
	
	
	void list :: public update(int value, int position) {
			current = arr ;
		if (pos < 0) {
			cout << "Invalid index " << endl;
			return;
		}
		for (int i = 0; i < size; i++)
		 {
			if (i < position) {
				current++; 
			}
			else if (i == position) {
				*current = value;
				break;
			}
		}
	} 
	
	
	void list :: public get(int index) {
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
	
	void list :: public clear(){
			for(int i=0 ; i<size ; i++)
				{
					current++;
					*current = NULL;
				}
	
	void list :: public remove(int position) {
		start();
		for (int i = 0; i < size; i++)
		 {
			if (i < position) {
				current = (current + 1);
			}
			if (i= pos ){
				temp1 = current ;
				delete temp1 ;
				current--;
				size--;
			}
 		}
	}
	
	void list :: public length() {
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
					break;
					}
			}
		}
		
	void list :: public find(int num) {
		curr = arr;
		for (int i = 0; i < size; i++) {
			if (*current == num) {
				cout<<"found   : "<<*current<<endl;//if we it then no need of further iteration
				break;
			}
				current++;	
		 
	}	
	
	
	void list :: public isFull() {
			if (end() != -1)
				cout<< "list is full" << endl;
		}
		
			
	void list :: public isEmpty(){
			if (end() == -1)
				cout<< "list is not full" << endl;
		}	
	
	
	}
//	void list : 
	void list :: public end(){
				for(int i=0 ; i<size ; i++)
				{
					current++;
				}
				return *current;
			}

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

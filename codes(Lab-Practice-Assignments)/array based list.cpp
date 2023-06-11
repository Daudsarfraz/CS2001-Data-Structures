/*

ARRAY BASED LIST
*/



#include<iostream>
#include<string>
using  namespace std;

class list{
private:
	int *arr; //will be used to initialize an empty list and will always point to the first position.
	int size; //total capcity of the list
    int len; //number of current elements in the list
    int *current; //pointer to point the current position
    int *temp; //can be used for temporary works
public:

    //Constructor for initializing List
    //You can initialize size to any value
	list(){
	    
	}


    //overloaded constructor
    //user will pass decided the size of the list
    list(int userSize){

    }

    //Deep Copy Constructor
    //write code to create a new list and copy elements of the list passed in the parameter
	list(list& othrList){
	
	
	}


    //Clear Or Empty the List
	void clear(){
	
	
	}


    //Insert a Value at Specific Position
	void insert(int value,int pos){
	

	}

    //Insert the given value in the list at the next available position
    void insert(int value){
	
	}


    //Remove a value at specific position
	void remove(int pos){
	
	

	}



    //Get value stored at a specific position
	int get(int pos){
	
	}

    //Update Existing value at a position
	void update(int value,int pos){
	

	}


    //Find a value in the list
	bool find(int value){
	

	}


    //Return Current Length of the list
	int length(){
	
	}


    //Move to starting position of the list
	void start(){
	
	}

    //Move to the end of the list
	void end(){
	
	}
    

    //checks whehter the list is completely filled or not
    bool isFull(){
    
    }
    
    //checks whehter the list is completely empty or not    
    bool isEmpty(){

    }

};

void main(){

	

	system("pause");
}    

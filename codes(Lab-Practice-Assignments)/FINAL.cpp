#include<iostream>
using namespace std;

struct node{
    int value = NULL;
    node *left,*right;
};

class BST{
    private:
        node *temp;
        node *temp2;
        int key;
    public:
        node *root;
        int value;
        
        
		BST(){
    		root=temp=temp2=NULL;
    		value=key=0;
}

node* createNode(int value){
    node *newNode=new node;
    newNode->value=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void options(){
   	 		cout<<"1-insertion()"<<endl;
   		 	cout<<"2-deletion()"<<endl;
    		cout<<"3-inOrder()"<<endl;
			cout<<"4-successor()"<<endl;
			cout<<"5-search()"<<endl;
			}

void insertion(node* temp){

    if(root==NULL){
        temp=createNode(value);
        root=temp;
        return;      
    }

    if(temp->value==value){
        cout<<"Duplicate found!!!"<<endl;
        return;
    }

    if(value < temp->value){
        if(temp->left!=NULL){
           insertion(temp->left); 
        }else{
            temp->left=createNode(value);
        }
        return;
    }

    if(value > temp->value){
        if(temp->right!=NULL){
           insertion(temp->right); 
        }else{
            temp->right=createNode(value);
        }
        return;
    }
}

void inOrder(node* temp){
    if(root==NULL){
        cout<<endl;
        cout<<"tree is empty!!!"<<endl;
        return;
    }

    if(temp->left!=NULL)
        inOrder(temp->left);
        cout<<temp->value<<" ";
    if(temp->right!=NULL)
        inOrder(temp->right);
    
    return;
}

void deletion(node *leafNode, node* parent, int key){

    if(leafNode==NULL){
        cout<<"tree is empty!!!"<<endl;
        return; 
    }
    
    node* currentParent = leafNode;

    if(key < leafNode->value) {
    	return deletion(leafNode->left, currentParent, key); 
    }

    if(key > leafNode->value) {
    	return deletion(leafNode->right, currentParent, key); 
    }
    
    if(leafNode->right==NULL && leafNode->left==NULL){
        if(parent != NULL) {
            if(parent->left == leafNode) parent->left = NULL;
            else parent->right = NULL;
        }
        
        delete leafNode;
        leafNode=NULL;
        return; 
    }

    
    if(leafNode->left!=NULL && leafNode->right == NULL){
        parent->left = leafNode->left;
        leafNode->left = NULL;
        delete leafNode;
        return; //important to return the flow
    }

    if(leafNode->right!=NULL && leafNode->left == NULL){
        parent->right = leafNode->right;
        leafNode->right = NULL;
        delete leafNode;
        return; 
    }

   
    node* deleteNode=leafNode;
    deleteNode = leafNode->right;

    while(deleteNode->left != NULL) {
        currentParent = deleteNode;
    	deleteNode = deleteNode->left;
    }
    
    leafNode->value = deleteNode->value;
    
    delete deleteNode;
    deleteNode = NULL;
    currentParent->left = NULL;
}


	node* fndsucc(int key )
		{
			temp = search (key,root);
			if (temp == NULL)
			{
				cout<<"tree is null";
				return temp;
			}
			if (temp ->right != NULL)
			{
				if (temp ->right ->left != NULL)
				{
					return temp ->right;
				}
				temp2 = temp ->right;
				while(temp2 ->left != NULL)
				{
					temp2 = temp2 ->left;
				}
				return temp2;
			}	
		}

	node* search(int key , node *& temp)
		{
			if(root == NULL)
			{
				cout<<"tree is empty"<<endl;
				return NULL;
			}
			if(temp->value == key)
			{
				return temp;
			}
			if((temp->right!=NULL)&&(key > temp->value))
			{
				return search(key,temp->right);
			}
			if((temp->left!=NULL)&&(key > temp->value))
			{
				return search(key,temp->left);
			}
			if(((temp->left == NULL) && (temp->right==NULL)) )
			{
				cout<<"input not found"<<endl;
				return NULL;
			}
		}


};

int main(){
    BST obj;
    int choice;
    int key;
    
    do{
        obj.options();
        cout<<"Enter your choice : ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter number to insert: ";
            cin>>obj.value;
            obj.insertion(obj.root);
        }else if(choice==2){
            cout<<"Enter key: ";
            cin>>key;
            obj.deletion(obj.root,NULL, key);
        }
        else if(choice==3){
            obj.inOrder(obj.root);
        }
        else if(choice==5){
            obj.search(key,obj.root);
        }
		else if(choice==4){
        	cout<<"Enter key: ";
        	obj.fndsucc(key);
        }
		else{
            exit(0);
        }
    }while(5);

    return 0;
}


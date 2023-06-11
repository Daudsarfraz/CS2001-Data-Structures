#include<iostream>
using namespace std;

struct node{
    int info;
    node *left;
	node *right;
};

class BinarySearchTree{
    private:
        node *temp1;
        node *temp2;
        int key;
    public:
        node *root;
        int value;
         
		BinarySearchTree(){
    		root=NULL;
			temp1=NULL;
			temp2=NULL;
    		value=0;
			key=0;
}
	node* createNode(int value)
	{
    node *newNode = new node;
    newNode->info = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
	}

	void choices()
			{
			cout<<"\n\t!!!!!-----CHOICES-----!!!!!"<<endl;
   	 		cout<<"\t(A)	-insertion()"<<endl;
   		 	cout<<"\t(B)	-deletion()"<<endl;
    		cout<<"\t(C)	-inOrder()"<<endl;
			cout<<"\t(D)	-successor()"<<endl;
			cout<<"\t(E)	-search()"<<endl;
			}

	void insertion(node* temp1)
	{
    if(root==NULL)
	{
        temp1=createNode(value);
        root=temp1;
        return;      
    }

    if(temp1->info==value)
	{
        cout<<"Duplicate found in Binary Search Tree!!!"<<endl;
        return;
    }

    if(value < temp1->info)
	{
        if(temp1->left!=NULL)
		{
           insertion(temp1->left); 
        }
		else
		{
            temp1->left=createNode(value);
        }
        return;
    }

    if(value > temp1->info)
	{
        if(temp1->right!=NULL)
		{
           insertion(temp1->right); 
        }
		else
		{
            temp1->right=createNode(value);
        }
        return;
    }
}

	void inOrder(node* temp1)
	{
    if(root==NULL)
	{
        cout<<endl;
        cout<<"Tree is empty.Nothing to do In-Order."<<endl;
        return;
    }

    if(temp1->left!=NULL)
        inOrder(temp1->left);
        cout<<temp1->info<<" "<<endl;
    if(temp1->right!=NULL)
        inOrder(temp1->right);
    
    return;
}

	void deletion(node *leafNode, node* parent, int key)
	{
    if(leafNode==NULL)
	{
        cout<<"Tree is empty.Nothing to Deletion!!!"<<endl;
        return; 
    }
    
    node* currentParent = leafNode;

    if(key < leafNode->info)
	{
    	return deletion(leafNode->left, currentParent, key); 
    }

    if(key > leafNode->info) 
	{
    	return deletion(leafNode->right, currentParent, key); 
    }
    
    if(leafNode->right==NULL && leafNode->left==NULL)
	{
        if(parent != NULL) 
		{
            if(parent->left == leafNode) parent->left = NULL;
            else parent->right = NULL;
        }
        
        delete leafNode;
        leafNode=NULL;
        return; 
    }

    
    if(leafNode->left!=NULL && leafNode->right == NULL)
	{
        parent->left = leafNode->left;
        leafNode->left = NULL;
        delete leafNode;
        return;
    }

    if(leafNode->right!=NULL && leafNode->left == NULL)
	{
        parent->right = leafNode->right;
        leafNode->right = NULL;
        delete leafNode;
        return; 
    }

   
    node* deleteNode=leafNode;
    deleteNode = leafNode->right;

    while(deleteNode->left != NULL) 
	{
        currentParent = deleteNode;
    	deleteNode = deleteNode->left;
    }
    
    leafNode->info = deleteNode->info;
    
    delete deleteNode;
    deleteNode = NULL;
    currentParent->left = NULL;
}


	node* successor(int key)
		{
			temp1 = search (key,root);
			if (temp1 == NULL)
			{
				cout<<"tree is Empty.Nothing to do successoring.";
				return temp1;
			}
			if (temp1 ->right != NULL)
			{
				if (temp1 ->right ->left != NULL)
				{
					return temp1 ->right;
				}
				temp2 = temp1 ->right;
				
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
				cout<<"Tree is empty.Nothing to searching."<<endl;
				return NULL;
			}
			
			if(temp1->info == key)
			{
				return temp1;
			}
			
			if((temp1->right!=NULL)&&(key > temp1->info))
			{
				return search(key,temp1->right);
			}
			
			if((temp1->left!=NULL)&&(key > temp1->info))
			{
				return search(key,temp1->left);
			}
			
			if(((temp1->left == NULL) && (temp1->right==NULL)))
			{
				cout<<"input not found"<<endl;
				return NULL;
			}
		}


};

int main(){
    BinarySearchTree bst;
    char choice;
    int key;
    
    do{
        bst.choices();
        cout<<"Enter your choice : ";
        cin>>choice;

        if(choice == 'A')
		{
            cout<<"Enter number to insert: ";
            cin>>bst.value;
            bst.insertion(bst.root);
        }
        
		else if(choice=='B')
		{
            cout<<"Enter key: ";
            cin>>key;
            bst.deletion(bst.root,NULL, key);
        }
        
        else if(choice=='C')
		{
            bst.inOrder(bst.root);
        }
        
        else if(choice=='D')
		{	cout << "Succor"<<endl;
        	cout<<"Enter key: ";
        	bst.successor(key);
        }
        
        else if(choice=='E')
		{
            bst.search(key,bst.root);
        }
		
		else{
            exit(0);
        }
    }
		while(5);

    return 0;
}


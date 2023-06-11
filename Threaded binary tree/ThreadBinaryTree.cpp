#include<iostream>
using namespace std;

struct node // Structure Node
{
	
	node *left;
	node *right;
	int info;
	int LB;
	int RB;

class ThreadBinaryTree{
	private:
		node* left;
		node* right;
		node* temp;
		node* temp2;
	//	node* newnode; 
	public:
	node *root;
	
		ThreadBinaryTree()
		{
		Dummy = new node;
		newnode->left = newnode->right = newnode;
		newnode->LB = newnode->RB = 1;
		root,left,right,temp,temp2 = NULL;
		}
	
	~ThreadBinaryTree(){
	}
	
	void insertion(node *temp,int key){
		if(root==NULL)
		{
			root = new node;
			root->info = key;
			root->left = Dummy;
			root->right = Dummy;
			root->RB = 0;
			root->LB = 0;
			Dummy->left = root;
			return;
		}

		if(key<temp->info)
		{
			if(temp->LB == 0)
			{
				temp2 = new node;
				temp2->info = key;
				Dummy->left = root->left;
				root->left = Dummy;
				Dummy->LB = root->LB;
				root->LB = 1;
				Dummy->right = root;
				return;
			}
		}Dummy
		else
		{
			insertion(temp->left,int key);
		}
		
		if(key>temp->info)
		{
			if(temp->RB == 0)
			{
				temp2 = new node;
				temp2->info = key;
				Dummy->right = root->right;
				root->right = Dummy;
				Dummy->RB = root->RB;
				root->RB = 1;
				Dummy->left = root;
				return;
			}
		}
		else
		{
			insertion(temp->right,key);
		}
	}

	void inOrder(node* temp){
    if(temp == NULL){
        cout<<"Tree is empty!!!"<<endl;
        return;
    }

    if(temp->left!=NULL)
        inOrder(temp->left);
        cout<<temp->info<<" ";
    if(temp->right!=NULL)
        inOrder(temp->right);
    
    return;
}

void del(node *temp,int key)
	{
		if(temp == root);
		if(temp->data==key)
		{
			if((root->leftbit==0) && (root->rightbit == 0)
			delete root;
			root = Null;
			dummy->left=dummy;
			dummy->leftbit=0;
			return;
			if((root->leftbit == 1) && (root->right == 0))
			{
				root->left->right=root->right;
				root->left->rightbit = root->rightbit;
				dummy->left = root->left;
				root=root->left;
				delete temp;
				temp =  null;
				return;

			if((root->rightbit == 1) && (root->left == 0))
			{
				root->right->left=root->left;
				root->right->leftbit = root->leftbit;
				dummy->right = root->right;
				root=root->right;
				delete temp;
				temp=null;
				return;
			}
		}
		
	}


}
	
};

int main()
{
	ThreadBinaryTree TBT;
	TBT.insertion(TBT.root,20);
	TBT.insertion(TBT.root,10);
	TBT.insertion(TBT.root,100);
	TBT.insertion(TBT.root,823);
	TBT.insertion(TBT.root,177);
	TBT.insertion(TBT.root,2);

	TBT.inOrder(TBT.root);
	TBT.inOrder(TBT.root);
	TBT.inOrder(TBT.root);	

return 0;
}
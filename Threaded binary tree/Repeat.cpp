#include<iostream>
using namespace std;

struct node
{
	int data;
	int leftbit;
	int rightbit;
	node *left;
	node *right;
};
class TBST{
	public:
		node *root;
		node *temp, *temp2;
		node *dummy;
		
		TBST()
		{
		dummy= new node;
		dummy->left=dummy->right=dummy;//dummy left and right pointing to dummy
		dummy->leftbit=0;
		dummy->rightbit=1;
		root=temp=temp2=NULL;
		}
		
		
		void insert(node *temp,int key){
		if(root==NULL)
		{
			root = new node;
			root->data=key;
			root->left=dummy;//root left and right pointing to dummy
			root->right=dummy;
			root->rightbit=root->leftbit=0;
			dummy->left=root;//now dummy left pointing to root
			return;
		}
		
		if(key<temp->data)
		{
			if(temp->leftbit == 0)
			{
				temp2=new node;
				temp2->data=key;
				dummy->leftbit=1;
				temp2->left =temp->left ;
				temp->left = temp2;
				temp->leftbit = 1;
				temp2->leftbit=temp2->rightbit=0;
				temp2->right =temp;						
			}
				
				
		else
		{
			insert(temp->left,key);
		}
		}
		
		
		if(key>temp->data)
		{
			if(temp->rightbit == 0)
			{
				temp2=new node;
				temp2->data=key;
				temp2->right =temp->right;
				temp->right = temp2;
				temp->rightbit = 1;
				temp2->leftbit=temp2->rightbit=0;
				temp2->left =temp;				
			}
						
		else
		{
			insert(temp->right,key);
		}	
		}
	}
	 void inorder(node* temp)
    {
        if(temp == NULL)
            return;
        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }
     
};
	
		
	int main()
	{
		TBST o;
		o.insert(o.root,10);
		o.insert(o.root,100);
		o.insert(o.root,823);
		o.insert(o.root,177);
		o.insert(o.root,2);
		o.inorder(o.root);
		return 0;
	}
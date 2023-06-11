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
	node* leftMost( node* temp)
	{
    	if (temp == NULL)
        return NULL;
 
    	while (temp->left != NULL)
        	temp= temp->left;
        	
	    return temp;
	}

	void inorder(node* root)
	{
    	node* temp = leftMost(root);
    	while (temp != NULL)
		{
        	cout<<(temp->data);
 
        
        	if (temp->rightbit)
           		temp=temp->right;
        	else 
        		temp= leftMost(temp->right);
    	}
	}
	
	void del(node *temp,int key)
	{
		if(temp == root)
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
				return;
			if((root->rightbit == 1) && (root->left == 0))
			{
				root->right->left=root->teft;
				root->right->leftbit = root->leftbit;
				dummy->right = root->right;
				root=root->right;
				delete temp;
				return;
			}
		}
		
	}	
	void delete(int key,node* temp)
	{
		if(temp==root)
		{
			cout<<"treee is empty"<<endl;
			return;
		}
		if(temp->left->value==key)
		{
			delete_node(temp->left,temp)
			retrun;
		}
		if(temp!=dummy)&&(temp->right->value==key)
		{
			delete_node(temp->right,temp);
			retrun;
				
		}
		if(temp==dummy){
			delete(key,temp->left):
			return;
		}
		if(key->temp->value)&&(temp->rightbit==1)
		{
			delete(key,temp->right);
			return;
		}
		if(key>temp->value)&&(temp->leftbit==1)
		{
			delete(key,temp->left)
			return;
		}
	}	
node* find_successor(node *temp, node *&parent)
		{
			if(temp->leftbit==0)
			{
				return temp;
			}
			parent = temp;
			return find_successor(temp->left,parent);
		}
		
		void delete_node(node *temp,node *parent)
		{
			if(temp->leftbit==1 && temp->rightbit==1)
			{
				node *successor->parent = temp;
				node *successor = find_successor(temp->right,successor->parent);
				temp->info = successor->info
				delete_node(successor,successor->parent);
				return;
			}
				
			if(temp->leftbit==1 && temp->rightbit==0)
			{
				if(temp->info < parent->info)
				{
					parent->left=temp->left;
					parent->leftbit=temp->leftbit;
				}
				else
				{
					parent->right=temp->left;
					parent->rightbit=temp->leftbit;
				}
				node *temp2 = temp -> left;
				while(temp2->rightbit !=0)
				{
					temp2 = temp2->right;
				}
				temp2->right=temp->right;
				delete temp;		
			
			}	
			if(temp->rightbit==1 && temp->leftbit==0)
			{
				if(temp->info >parent->info)
				{
					parent->right=temp->right;
					parent->rightbit=temp->rightbit;
				}
				else
				{
					parent->left=temp->right;
					parent->leftbit=temp->rightbit;
				}
				node *temp2 = temp -> right;
				while(temp2->leftbit !=0)
				{
					temp2 = temp2->left;
				}
				temp2->left=temp->left;
				delete temp;		
			
			}	
			
				
			if(temp->leftbit==0 && temp->rightbit==0)
			{
				if(parent->left==temp)
				{
					parent->left==temp->left;
					parent->leftbit==0;
				}
				if(parent->right==temp && parent!=dummy)
				{
					parent->right=temp->right;
					parent->rightbit=0;
				}
				if(temp==root)
				{
					root = NULL;
					dummy->left=dummy;
					dummy->leftbit=0;
				}
				delete temp;
			}
		
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

#include<iostream>
using namespace std;

struct node{
    int value;
    node *left,*right;
};

class BST{
    private:
        node *temp;
        int key;
    public:
        node *root;
        int value;
        BST()
		{
   			value=key=0;
			root=temp=NULL;
    		
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

			}
        void insertion(node* temp)
		{
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
        		}
				else{
    	    	    temp->left=createNode(value);
        				}
    		    return;
   				 }

	    if(value > temp->value){
    	    if(temp->right!=NULL){
    	       insertion(temp->right); 
    	    }
			else{
    	        temp->right=createNode(value);
    		    }
    		    return;
    			}
		}
        void inOrder(node* temp)
		{
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
            cout<<"yet not done"<<endl;
        }else if(choice==3){
            obj.inOrder(obj.root);
        }else{
            exit(0);
        }
    }while(3);

    return 0;
}


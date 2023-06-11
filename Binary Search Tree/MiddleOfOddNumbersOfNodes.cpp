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
        int count;
        int traversal_count;

        BST();
        node* createNode(int);
        void options();
        void insertion(node*);
    //    void deletion(node*,node*,int);
        void inOrder(node*);
};

BST::BST(){
    root=temp=NULL;
    value=key=0;
}

node* BST::createNode(int value){
    node *newNode=new node;
    newNode->value=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void BST::options(){
    cout<<"//////////OPTIONS///////"<<endl;
    cout<<"1-Enter Odd numbers of Nodes."<<endl;
    cout<<"2-insertion()"<<endl;
    cout<<"3-inOrder()"<<endl;
    cout<<endl;
}

void BST::insertion(node* temp){

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

void BST::inOrder(node* temp){
    if(root==NULL){
        cout<<endl;
        cout<<"tree is empty!!!"<<endl;
        return;
    }

    if(temp->left!=NULL)
        inOrder(temp->left);
        
        traversal_count++;
        if(traversal_count == (count/2)+1){
            cout<<"Middle Element is " << temp->value<<endl;
            return;
        }

    //    cout<<temp->value<<" ";
    if(temp->right!=NULL)
        inOrder(temp->right);
    
    return;
}



int main(){
    BST obj;
    int choice;
    int key;
    
    do{
        obj.options();
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Odd nodes. ";
            cin>>obj.count;
        }

        else if(choice==2){
            cout<<"Enter number to insert: ";
            cin>>obj.value;
            obj.insertion(obj.root);
       }

		else if(choice==3){
            obj.inOrder(obj.root);
        }else{
            exit(0);
        }
    }while(4);

    return 0;
}

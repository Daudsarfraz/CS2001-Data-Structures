void binary_tree::delete1(node *tem,int key)
{
	
	if(key>tem->data)
	{
		if(tem->right==NULL)
		{
			cout<<"NULL value not found";         
			return;
		}
		if(tem->right->data==key)
		{
	    
		if(tem->right->left==NULL &&tem->right->right==NULL)                               
		{  
		                                                                                                                                                             
		  node *tem1=tem->right;                                           
		  delete tem1;                            //alternative
		  tem1=NULL;
		  tem->right=NULL;
		  return;	
		}
		if(tem->right->left!=NULL && tem->right->right==NULL)
		{
		  node *tem2=tem->right;                                  //itha ponch gya 0
		  tem->right=tem2->left;
		  delete tem2;
		  tem2=NULL;
		  return;	
		}
		
		
		if(tem->right->left==NULL && tem->right->right!=NULL)
		{
		  node *tem2=tem->right;                                  //itha ponch gya 1
		  tem->right=tem2->right;
		  delete tem2;
		  tem2=NULL;
		  return;	
		}
		
		
		
		if(tem->right->left!=NULL && tem->right->right!=NULL)
		{
		  node* tem1=tem->right->right;
		  if(tem1->left==NULL)
		  {
		  	tem->right->data=tem1->data;
		  	if(tem1->right!=NULL)
			  { 
			    tem->right->right=tem1->right;      // if tem->right = NULL
			    delete tem1;
			    tem1=NULL;
			    return;
			  }
			  tem->right->right=NULL;
			  delete tem1;
			  tem1=NULL;
			  return;
			  
		  }
		  while(tem1->left->left!=NULL)
		  {
		    tem1=tem1->left;
		  }
		  tem->right->data=tem1->left->data;
		  if(tem1->left->right!=NULL)
		  {
		  	node* tem2=tem1->left;
		  	tem1->left=tem2->right;
		  	delete tem2;
		  	tem2=NULL;
		  	return;
		  }
		  node* tem2=tem1->left;
		  delete tem2;
		  tem2=NULL;
		  tem1->left=NULL;             //hello
		  return;
		}
    }
		if(tem->right!=NULL)
		{
			delete1(tem->right,key);                            
			return;
		}		
	}
	
	
	if(key<tem->data)
	{
		if(tem->left==NULL)
		{
			cout<<"NULL value not found";
			return;
		}
		if(tem->left->data==key)
	{
	    
		if(tem->left->left==NULL &&tem->left->right==NULL)                               
		{  
		                                                                                                                                                             
		  node *tem1=tem->left;                                           
		  delete tem1;                            //alternative
		  tem1=NULL;
		  tem->left=NULL;
		  return;	
		}
		if(tem->left->left!=NULL && tem->left->right==NULL)
		{
		  node *tem2=tem->left;                                  //itha ponch gya 0
		  tem->left=tem2->left;
		  delete tem2;
		  tem2=NULL;
		  return;	
		}
		if(tem->left->left==NULL && tem->left->right!=NULL)
		{
		  node *tem2=tem->left;                                  //itha ponch gya 1
		  tem->left=tem2->right;
		  delete tem2;
		  tem2=NULL;
		  return;	
		}
		
		
		
		if(tem->left->left!=NULL && tem->left->right!=NULL)
		{
		  node* tem1=tem->left->right;
		  if(tem1->left==NULL)
		  {
		  	tem->left->data=tem1->data;
		  	if(tem1->right!=NULL)
			  { 
			    tem->left->right=tem1->right;      // if tem->right = NULL
			    delete tem1;
			    tem1=NULL;
			    return;
			  }
			  tem->left->right=NULL;
			  delete tem1;
			  tem1=NULL;
			  return;
			  
		  }
		  while(tem1->left->left!=NULL)
		  {
		    tem1=tem1->left;
		  }
		  tem->left->data=tem1->left->data;
		  if(tem1->left->right!=NULL)
		  {
		  	node* tem2=tem1->left;
		  	tem1->left=tem2->right;
		  	delete tem2;
		  	tem2=NULL;
		  	return;
		  }
		  node* tem2=tem1->left;
		  delete tem2;
		  tem2=NULL;
		  tem1->left=NULL;             //hello
		  return;
		}
    }
		if(tem->left!=NULL)
		{
			
			delete1(tem->left,key);
			return;
		}
	}


}

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* left, *right;
};
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
bool dm(struct node *root,int sum){
	if(!root)
	   return false;
	   if(!(root->left && root->right))
	   {
	   	//cout<<sum<<endl;
	   	if(root->data==sum)
	   	  return true;
	   	else
	   	  return false;
	   }
	if(dm(root->left,sum-root->data))
	   {//cout<<sum<<endl;
		 return true;}
	if(dm(root->right,sum-root->data))
	    {//cout<<sum<<endl;
		return true;}
	    
	return false;
}
int main()
{
 int height = 0;
   
   
  /* Constructed binary tree is 
            1
          /   \
        2      3
      /  \
    4     5
  */
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  int sum=5;
  int sumExist=dm(root,sum);
 //int diameter = diameterOpt(root, &height);
 cout<<"sumExist : "<<sumExist;
  //printf("Diameter of the given binary tree is %d\n", diameter(root);
 
  getchar();
  return 0;
}

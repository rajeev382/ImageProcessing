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
 
int diameterOpt(struct node *root, int* height)
{
  /* lh --> Height of left subtree
     rh --> Height of right subtree */
  int lh = 0, rh = 0;
  
  /* ldiameter  --> diameter of left subtree
     rdiameter  --> Diameter of right subtree */
  int ldiameter = 0, rdiameter = 0;
  
  if(root == NULL)
  {
    *height = 0;
     return 0; /* diameter is also 0 */
  }
  
  /* Get the heights of left and right subtrees in lh and rh
    And store the returned values in ldiameter and ldiameter */
  ldiameter = diameterOpt(root->left, &lh);
  rdiameter = diameterOpt(root->right, &rh);
  
  /* Height of current node is max of heights of left and
     right subtrees plus 1*/
  *height = max(lh, rh) + 1;
  
  return max(lh + rh + 1, max(ldiameter, rdiameter));
}
int mm=0;
//int dm(struct node *,int *,int *);
int dm(struct node *root,int *l,int *r){
	int ll=0,rr=0;
	if(!root)
	   return 0;
	if(root->left)
	{
	    ll++;
	    dm(root->left,&ll,&rr);}
	if(root->right)
	{
	    rr++;
	    dm(root->right,&ll,&rr);}
	if(mm<(*l+*r))
	   mm=*l+*r;
	return mm;
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
  int l=0,r=0;
  int diameter=dm(root,&l,&r);
 //int diameter = diameterOpt(root, &height);
 cout<<"diameter : "<<diameter;
  //printf("Diameter of the given binary tree is %d\n", diameter(root);
 
  getchar();
  return 0;
}

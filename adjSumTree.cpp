Given a binary tree with a value associated with each node, we need to choose a subset of these nodes such that sum of
chosen nodes is maximum under a constraint that no two chosen node in subset should be directly connected that is, 
if we have taken a node in our sum then we can’t take its any children in consideration and vice versa.

Example:
Input:
2
11 1 2
1 2 3 4 N 5 6
Output:
11
16

Explanation:
Testcase 1: The maximum sum is sum of node 11.
Testcase 2: The maximum sum is sum of nodes 1 4 5 6 , i.e 16. These nodes are non adjacent.
                                              
// Binary Tree 
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MARKER -1

/* A binary tree Node has key, pointer to left and right children */
struct Node
{
    int key;
    struct Node* left, *right;
};

/* Helper function that allocates a new Node with the 
   given key and NULL left and right pointers. */
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return (temp);
}
int max(int a,int b)
{
    return (a>b)?a:b;
}

int getMaxSum(Node* root);
//This function returns the maximum sum of non-adjacent nodes.
pair<int,int> sumhelper(Node*root){
    if(root==NULL){
        pair<int,int> sum;
        sum.first=0;
        sum.second=0;
        return sum;
    }
    pair<int,int> sum1 = sumhelper(root->left);
    pair<int,int> sum2 = sumhelper(root->right);
    pair<int,int> sum;

    sum.first = root->key + sum1.second + sum2.second;
    cout<<"root->data"<<root->key<<"  "<<sum1.first<<" "<<sum1.second<<"\n"<<sum2.first<<" "<<sum2.second<<"\n";

    sum.second = max(sum1.first,sum1.second) + max(sum2.first,sum2.second);

    return sum;
}

int getMaxSum(Node *root)
{
    // Add your code here
    pair<int,int> sum = sumhelper(root);
    return max(sum.first,sum.second);
}

// A simple inorder traversal used for testing the constructed tree 
void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

/* Driver program to test above functions*/
int main()
{
    // Let us construct a tree shown in the above figure 
    struct Node *root        = newNode(1);
    root->left               = newNode(2);
    root->right              = newNode(3);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(5);
    root->left->right->right = newNode(6);

    inorder(root);
    cout<<getMaxSum(root);

    return 0;
} 


int getMaxSum(Node *root) 
{
// Add your code here
if(root == NULL) return 0;
int include = root->data;
if(root->left != NULL)
include += getMaxSum(root->left->left)+getMaxSum(root->left->right);
if(root->right != NULL)
include += getMaxSum(root->right->left)+getMaxSum(root->right->right);
int exclude = getMaxSum(root->left)+getMaxSum(root->right);
return max(include,exclude);
}

 if(node==null)
        {
            return 0;
        }
        
        int size1 = 1;
        if(node.left!=null)
        {
            size1 = size1+LISS(node.left.left)+LISS(node.left.right);
        
        }
         if(node.right!=null)
        {
            size1 = size1+LISS(node.right.left)+LISS(node.right.right);
            
        }
        int size2 = LISS(node.left)+LISS(node.right);
        
        
        return Math.max(size1,size2);
    }
}

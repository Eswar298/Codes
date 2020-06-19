. Consider Red lines of slope -1 passing between nodes (in following diagram). The diagonal sum in a binary tree is the sum of all node’s
data lying between these lines. Given a Binary Tree of size N, print all diagonal sums.
For the following input tree, output should be 9, 19, 42.
9 is sum of 1, 3 and 5.
19 is sum of 2, 6, 4 and 7.
42 is sum of 9, 10, 11 and 12.


void find(int level,Node *root,int arr[])
{
    if(root)
    {
     find(level+1,root->left,arr);
        arr[level]+=root->data;
        find(level,root->right,arr);
    }
       
}
void diagonalSum(Node* root) {
    // Add your code here
    if(root==NULL)
    {
        return;
    }
    int arr[100005]={0};
    find(0,root,arr);
    for(int i=0;i<100004;i++)
    {
        if(arr[i]==0)
        {
            break;
        }
        cout<<arr[i]<<" ";
    }
   // cout<<"\n";
}


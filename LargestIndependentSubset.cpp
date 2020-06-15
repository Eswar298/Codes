. Given a Binary Tree, find size of the Largest Independent Set(LIS) in it. A subset of all tree nodes is an independent set if there is 
For example, consider the following binary tree. 
The largest independent set(LIS) is {10, 40, 60, 70, 80} and size of the LIS is 5.no edge between any two nodes of the subset

public int sol(Node node)
{
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

//USING DYNAMIC PROGRAMMING

map<int,int> m;
int cal(struct Node *root)
{
    if(root==NULL) return 0;
     
    if(m.find(root->data)!=m.end()){
        return m[root->data];
    }

    int included=0,excluded = 0;
    if(root->left!=NULL){
        included += cal(root->left->left)+cal(root->left->right);
    }
    
    if(root->right!=NULL){
        included += cal(root->right->left)+cal(root->right->right);
    }
    
    included++;
    excluded += cal(root->left)+cal(root->right);
    int ans = max(included,excluded);
    m[root->data] = ans;
    return ans;
}

int LISS(struct Node *root)
{
    m.clear();
    int ans = cal(root);
    return ans; 
}

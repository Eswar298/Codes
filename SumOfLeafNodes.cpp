.Find the sum of leaf nodes in a binary tree.  
      13    
   /     \
12         25
/  \      /     
45  30   20 

Sum=30+20+45=95

 int sumOfLeafNodes(Node *r ){   
 if(r==NULL)
 {
 return 0;
 }
 else if(r->left==NULL && r->right==NULL)
 {
 return r->data; 
 }
 return(sumOfLeafNodes(r->left)+sumOfLeafNodes(r->right));
 } 

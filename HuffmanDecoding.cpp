Given a binary encoded string and a Huffman MinHeap tree, your task is to complete the function decodeHuffmanData(), which decodes the binary encoded string and return the original string. 


Example:

Input Data : AAAAAABCCCCCCDDEEEEE
Frequencies : A: 6, B: 1, C: 6, D: 2, E: 5
Encoded Data : 
0000000000001100101010101011111111010101010
Huffman Tree: '#' is the special character used for 
               internal nodes as character field is 
               not needed for internal nodes. 
               #(20)
             /       \
        #(12)         #(8)
     /      \        /     \
    A(6)     C(6) E(5)     #(3)
                         /     \
                       B(1)    D(2)  
Code of 'A' is '00', code of 'C' is '01', ..
Decoded Data : AAAAAABCCCCCCDDEEEEE

Example:
Input:
2
01110100011111000101101011101000111
1011010011100101101110111
Output:
geeksforgeeks
India

struct MinHeapNode
{
	char data;
	int freq;
	MinHeapNode *left, *right;
};

string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
{
    MinHeapNode *ptr=root;
string ans="";
int n=binaryString.length();
for(int i=0;i<=n;i++){
if(ptr->left==NULL && ptr->right==NULL){
ans+=ptr->data;
ptr=root;
i--;
}
else if(binaryString[i]=='0'){
ptr=ptr->left;
}
else if(binaryString[i]=='1'){
ptr=ptr->right;
}
}
return ans;
}

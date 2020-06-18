Given two numbers represented by two linked lists, write a function that returns Sum list. The sum list is linked list 
representation of addition of two input numbers.

Input:
First line of input contains number of testcases T. For each testcase, first line contains size S1 and size S2, length of 2 numbers. The next 2 lines contain, space separated digits of the 2 numbers.

Output:
Sum the two numbers and return the result.

Input:
2
3 3
2 3 4
3 4 5
1 2
9
8 7
Output:
5 7 9
9 6

Explanation:
Testcase 1: After adding the 2 numbers the resultant number is 5 7 9.
Testcase 2: Add 9 and 7 we get 16. 1 is carry here and is added to 8. So the answer is 9 6

Node* addSameSize(Node* head1, Node* head2, int* carry) 
{ 
	Node*temp;
int car=0;
if (head1==NULL||head2==NULL)
return NULL;
temp=addSameSize(head1->next,head2->next,carry);
car=(head1->data)+(head2->data)+(*carry);
head2->data=(car)%10;
*carry=(car)/10;
return head2;	
}

void addCarryToRemaining(Node* head1, Node* curr, int* carry, Node** result) 
{ 
    if(head1==curr)
        return;
    int car;
    //cout<<head1->data;
    addCarryToRemaining(head1->next,curr,carry,result);
    if(head1->next==curr)
    {
        head1->next=*result;
    }
    car=(head1->data+*carry);
    head1->data=car%10;
    *(carry)=(car)/10;
    *result=head1;
}

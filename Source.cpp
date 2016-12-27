
#include<iostream>;
#include "Header file of code.h";

using namespace std;

//Defining Constructor

photographers::photographers()
{
	head = NULL;

}

void photographers::AddToEnd()
{
	void insert_at_end()
{
struct node *new_node,*current;

new_node=(struct node *)malloc(sizeof(struct node));

if(new_node == NULL)
   cout <<"nFailed to Allocate Memory"<<endl;

 cout<<"nEnter the data : "<<endl;
 scanf("%d",&new_node->data);
 new_node->next=NULL;

 if(start==NULL)
 {
   start=new_node;
   current=new_node;
 }
 else
 {
   temp = start;
     while(temp->next!=NULL)
     {
     temp = temp->next;
     }
   temp->next = new_node;
 }
}

void photographers::AddToPosN(Node head, int data, int position)
{
	Node newNode = new Node();
    newNode.data = data;
    newNode.next = null;

    if (head == null) {
        return newNode;
    }
    if (position == 0) {
        newNode.next = head;
        head = newNode;
        return head;
    }
    Node prev = null;
    Node current = head;
    int i = 0;
    while (current !=null && i < position) {
        prev = current;
        current = current.next;
        i++;
    }
    newNode.next = prev.next;
    prev.next = newNode;
    return head;
}


void photographers::Display()
{
	
    r=head;
    if(r==NULL)
    {
    return;
    }
    while(r!=NULL)
    {
    printf("%d ",r->data);
    r=r->next;
    }
    cout<< "\n"<<endl;
}
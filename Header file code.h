
#include<iostream>;
#include<string>;

struct node{ /*using singly linked list concept */

	int data;
	node *next;
};

class photographers
{
	
	node*head;
public:
	photographers(); // Constructor 

void AddToEnd(); //To add new photographers to the program
void AddToPosN(Node head, int data, int position); //To add senior degree photographers to the program
void RemoveFromEnd(); //To remove any photographer who have registered latest 
void RemoveAtN(int n); //To remove all old photographers who have graduated from college
void Display(); //To display list of all photographers who are currently working/present in the society.

~photographers();

};
//Search for a key and delete it at that moment only 
#include<iostream>
using namespace std;
class Node
{
		public:
	int data;
	Node* next;

	Node(int y)
	{
		data=y;
		next=NULL;
	}
};
class List
{
	Node* head;
	Node* tail;
	public:
		List()
		{
			head=NULL;
			tail=NULL;		
		}

void pushback(int x)
{
Node* newnode=new Node(x);
if(head==NULL)
{
	head=newnode;
	tail=newnode;
}
else
{
	newnode->next=head;
	head=newnode;
}
}
void print()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
			}
			cout<<"NULL"<<endl;
}
void search(int key)
{
	Node* temp=head;
	Node* prev=NULL;
	int c=0;
	while(head!=NULL&&temp->data==key)
	{	Node* del=head;
	head=head->next;
	delete del;

		c++;
	}
	temp=head;
	while(temp!=NULL)
	{
		
		if(temp->data==key)
		{
			prev->next=temp->next;
			delete temp;
			temp=prev->next;
			c++;
		}
	else
	{
		prev=temp;
		temp=temp->next;
	}

	}

	cout<<"Total encountered ="<<c<<endl;
}

void centre()
{
	Node* fast;
	Node* slow;
	fast=head;
	

	slow=head;
	while(fast!=NULL&&fast->next!=NULL)
	{
		slow=slow->next;
	fast=fast->next->next;
	}
	cout<<"Middle="<<slow->data;
}
void reverse()
{
	Node* prev;
	Node* curr;
	Node* next;
	prev=NULL;
	curr=head;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
}
};
int main()
{
	List ll;
	ll.pushback(4);
	ll.pushback(5);
	ll.pushback(1);
	ll.pushback(3);
	ll.pushback(4);
	ll.pushback(2);
	ll.print();
	
	ll.centre();
	ll.reverse();
	ll.print();
}


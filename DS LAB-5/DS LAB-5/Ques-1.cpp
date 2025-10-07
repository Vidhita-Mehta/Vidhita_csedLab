//Linked list basics implmentation 
// creation of the node class
#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node(int val)
	{
		data=val;
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
	void pushfront(int a)//ab push krne ko 2 cases ho skte ek to ki linked list empty hai i.e. head = 0 ya already koi member ho head~=0
	{
		Node* newnode=new Node(a);//dynamically ek naya object banare ; we can also create a static object but vo main mei accessible ni hoga
		if(head==NULL)	//is case mei head aur tail ko new node pe set krdenge
		{
			head=newnode;
			tail=newnode;
			
		}
		else// else case 2 mei head update hoga kyuki the number will be added in the front but tail same rhegi
		{
			newnode->next=head;
			head=newnode;
			
		}
	}
	void pushback(int a)//Again 2 cases honge ya to head is initiallly null orthere r some members; yaha pe last mei hora to tail will be updated
	{
		Node* newnode=new Node(a);//creation of node
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
	}
	void popfront()//To yaha pe basically humko connection todna hai jo pinter me hota hai
	{
		if(head==NULL)//checking ki list empty toni 
		cout<<"LinkedLIst empty";
		else
		{
			Node* temp=head;//ek pointer me head storr krdia taaki jab connection toote to hum ise delete kr skte
			head=head->next;//head update krdia
			delete temp;//dynamically allocate kiya tha to isliye delete krna hai 
		}//agar hum pehle hi delete krdte to fir humari linked list lost hojaati kyuki head deleted mtlb initial hi delete hogya
	}
	void popback()
	{
		Node* temp=head;//hume tail-1 tk traverse krna hai connection todne ke liye to head se shuru hoga traverse
		while(temp->next!=tail)
		{
			temp=temp->next;
		}
		temp->next=NULL;
		delete tail;
		tail=temp;
	}
	void insert(int val,int pos)
	{
		if(pos<0)
		cout<<"invalid";
		if(pos==0)
		pushfront(val);
		Node* temp=head;
		Node* newnode=new Node(val);
		for(int i=0;i<pos-1;i++)
		{
			temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		
	}
	void display()
	{
		Node* temp;
		temp=head;
		while(temp != NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"Null"<<endl;
	}
};
int main ()
{
List l;
l.pushfront(1);
l.pushfront(2);

l.pushfront(1);
l.display();

l.insert(5,2);

l.display();
}


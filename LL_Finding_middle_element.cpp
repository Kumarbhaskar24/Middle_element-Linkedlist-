#include<iostream>
using namespace std;
struct node
{
	int key;
	node *next;
	
}*start,*tem,*newnode,*temp,*ptr,*t;
node *create_new_node(int);
void insert(node*);
void disp(node*);
void middle(node*);
int main()
{
	int data,a,da;
	
	start=NULL;
	char ans;
	do{
	cout<<"Enter 1 to create new node and insert data into it \n";
	cout<<"Enter 2 to Display data \n";
	cout<<"Enter 3 to find middle number \n";
	cout<<"\n\n\nEnter your choice!!!!!\t" ;
	cin>>a;
	switch(a)
	{
		case 1:
			{

cout<<"how many data you want to insert";
cin>>da;
for(int l=0;l<da;l++)
{

	cin>>data;
	newnode = create_new_node(data);
	if(newnode== NULL)
{
	cout<<"Error!! Linkedlist doesn't created \n";
	}	

insert(newnode);
}
cout<<"the inserted linked list is \n";
disp(newnode);

}
break;
case 2:
{
cout<<"the inserted linked list is \n";
disp(newnode);
}
break;

case 3:
	{
		middle(newnode);
	}
	break;
	
}

cout<<"\n\nDo you want to perform the actions again\n";
	cin>>ans;
}while(ans=='y'||ans=='Y');

	 return 0;
}

node *create_new_node(int n)
{
	ptr= new node;
	ptr->key=n;
	ptr->next=NULL;
	return ptr;
}
void insert(node* np)
{
	if(start==NULL)
	{
		start=np;
		temp=start;
	}
	else{
	
		temp->next=np;
		temp=np;
		}
		}
void disp(node* np)
{
	tem=start;
	while(tem!=0)
	{
	cout<<tem->key<<"->";
	tem=tem->next;
	}
	cout<<endl;
}

void middle(node* np)
{
	tem=start;
	t=start;
	int cnt=1;

	int h,i=0,mid;
while(t!=NULL)
{
	t=t->next;
	cnt++;
}
	if(cnt%2==0)
	{
		h=(cnt/2)+1;
		while(i<h)
		{
			mid=tem->key;
			tem=tem->next;
			i++;
		}
		cout<<"\n\n\tMIDDLE element is"<<mid;
	}
	else
	{
		h=(cnt+1)/2;
		while(i<h)
		{
			mid=tem->key;
			tem=tem->next;
			i++;
		}
		cout<<"\n\n\tMIDDLE element is"<<mid;
		}
}

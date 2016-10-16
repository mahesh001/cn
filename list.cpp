#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;

};
void insert(struct node*&L1,int k)
{
	struct node* temp;
	if(L1==NULL)
	{
		L1=new node();
		L1->data=k;
		L1->next=NULL;
		
	}
	else{
		
		temp=L1;
		
		while(temp->next!=NULL) {
		temp=temp->next;
	}
		temp->next=new node();
		temp->next->data=k;
		temp->next->next=NULL;
	
	
	}
}
void len( node*L)
{
	int cnt=0;
	while(L!=NULL)
	{
		cnt++;
		L=L->next;
	}
	cout<<cnt;
}
/*void res(node*L)
{
	node*pre,*curr;
	if(L==NULL)
	return;
	curr=L;
	pre=curr->next;
	if(pre==NULL)
	return ;
	res(pre);
	curr->next->next=curr;
	curr->next=NULL;
	L=pre;
	
}*/
void res(struct node *L)
{
    struct node *p, *q, *r;
 
    p = q = r = L;
    p = p->next->next;
    q = q->next;
    r->next = NULL;
    q->next = r;
 
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    L = q;
}
void print(struct node*L)
{
	while(L!=NULL)
	{
	
	cout<<L->data<<"->";
	L=L->next;
}
	
}
int main()
{
 struct  node*L=NULL;
 char ch;
 int k;
cin>>k;
 while(k!=-1)
 {  
 
 //cout<<"enter the element to insert enter -1 for stop";
 
 	insert(L,k);
 	cin>>k;
 }
 
  print(L);
  
  res(L);
  print(L);
  cout<<"\n";
  len(L);
  return 0;
}

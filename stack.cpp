#include<iostream>
using namespace std;
 int size=10;
 struct stack {
 	int top;
 
 	int arr[100];
 	stack(){
 		top=0;
	 }

 
 
int isFull()
{
			if(top==size)
			return 1;
			else
			return 0;
}
int isEmpty()
{
			if(top==0)
			return 1;
			else
			return 0;
		
}
void push(int k)
{
	if(isFull())
	cout<<"stack is overflow";
	else
	arr[++top]=k;
	cout<<"inserted \n"<<k;
}
void pop()
{
	if(isEmpty())
	cout<<"stack is underflow";
	else
cout<<"deleted \n"<<arr[top--];

}
void show()
{
	if(top<0)
	cout<<"stack is empty";
	else
	for(int i=top;i>0;i--)
	cout<<arr[i]<<"\t";
}
};
int main()
{  stack st;
	int k,n;
	int ch;
	while(1){
		    
             cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice";
             cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element";
                        cin >> ch;
                        st.push(ch);
                        break;
               case 2:  st.pop();  break;
               case 3:  st.show();break;
               case 4:  exit(0);
               }
	}

	return 0;
}

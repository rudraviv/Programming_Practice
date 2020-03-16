#include <iostream>
using namespace std;


void print()
{
	int space,limit=5;
	for(int i=0;i<6;i++)
	{
		space=limit;
		while(space!=0)
		{
			cout<<" ";
			space--;
		}
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
		limit--;
	}
}
void fibonacci(int num)
{
	int a=0,b=1,c=0;
	cout<<a<<" "<<b;
	 for(int i=2;i<=num;i++)
	 {
	  c=a+b;
	  cout<<" "<<c;
	  a=b;
	  b=c;
	 }

}
void if_case()
{
	if(cout<<"Hello"&&0)
	{

	}
	else
	{
		cout<<" DAC guy's";
	}
}
int main() {
	int ch;
	do
	{
		cout<<"\n**********MENU****************";
		cout<<"\n0.Exit\n1.Star(*) printing.\n2.Fibonacci\n3.IF-ELSE";
		cout<<"\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			print();
			break;
		case 2:
			int num;
			cout<<"Enter Number: ";
			cin>>num;
			fibonacci(num);
			break;
		case 3:
			if_case();
			break;
		default:cout<<"Enter Valid Choice";
		}
	}while(ch!=0);
	return 0;
}

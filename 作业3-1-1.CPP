#include<iostream.h>
void main()
{
	int i,r;
    cout<<"piease input i:";
	cin>>i;
	if(i<0)
	{
		cout<<"-";
		i=-i;
	}
	while(i!=0)
	{
		r=i%10;
		cout<<r;
		i=i/10;
	}
	cout<<endl;
}
#include<iostream>
using namespace std;
int main()
{
	int x,y,i,j,z=0;
	cout<<"size of array a and b: ";
	cin>>x>>y;
	int a[x],b[y],c[x+y],d[x+y];
	cout<<"enter elements of array 1: ";
	for(i=1;i<=x;i++)
	{
		cin>>a[i];
		c[i]=a[i];
	}
	cout<<"enter elements of array 2: ";
	for(i=1,j=x+1;i<=y;i++,j++)
	{
		cin>>b[i];
		c[j]=b[i];
	}  
	
	cout<<endl;
	
	
	for(i=1;i<=x+y;i++)
	{
		for(j=i+1;j<=x+y;j++)
		{
			if(c[i]==c[j])
			{
                c[j]='*';
		    }
	    }    	
	}
	
	
	
	for(i=0,j=0;i<x+y+1;i++)
    {
        if(c[i]!='*')
        d[j++]=c[i];
        else
        {
        	z=z+1;
		}
    }
	
	
	
	for(i=1;i<=x+y-z;i++)
	{
		cout<<d[i]<<" ";
	}
	return 0;
}

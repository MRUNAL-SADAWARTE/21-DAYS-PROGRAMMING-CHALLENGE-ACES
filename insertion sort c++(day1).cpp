#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp,a[30];
	cout<<"Enter array size:";
	cin>>n;
	cout<<"\Enter array elements\n";
	
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
			
		}
		a[j+1]=temp;
	}
	cout<<"\nsorted list is as follows\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}

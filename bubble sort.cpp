#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[]={50,10,30,20,40};
	for(i=0;i<=4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				    arr[j]=arr[j+1];
				    arr[j+1]=temp;
				    
			}
			
		}
		cout<<"chadhata kram:"<<arr[i]<<endl;
		
	}
	return 0;
}

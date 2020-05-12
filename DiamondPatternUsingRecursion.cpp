#include<iostream>
using namespace std;

int n;
void pattern(int);
void upper_pattern(int);
void lower_pattern(int);


int main()
	{
		cin>>n;
		pattern(n);
	}
	
void pattern(int n)
	{
		upper_pattern(n-1);
		lower_pattern(n);
	}
	
void upper_pattern(int a)
	{
		
		if(a>=0)
			{
				upper_pattern(a-1);
				for(int j=0; j<=2*n+1; j++)
					{
						if((0<=j && j<n-a)||(j>=n+a+1  && j<=2*n))
							{
								cout<<"*";
							}
						else if(j==n+1)
							{
								cout<<" ";
							}
						else if(j==2*n+1)
							{
								cout<<endl;
							}
						else
							{
								cout<<" ";
							}
					}
			}
		return;
	}
	
void lower_pattern(int b)
	{
		if(b>1)
			{
				lower_pattern(b-1);
				for(int j=0; j<=2*n+1; j++)
					{
						if((j>=0 && j<b)||(j>=(2*n-b+1) && j<=2*n))
							{
								cout<<"*";
							}
						else if(j==2*n-b)
							{
								cout<<" ";
							}
						else if(j==2*n+1)
							{
								cout<<endl;
							}
						else
							{
								cout<<" ";
							}
					}
			}
		return;
	}

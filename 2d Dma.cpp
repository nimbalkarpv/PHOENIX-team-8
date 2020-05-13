#include<iostream>
using namespace std;

class array
{
	int **p ,r,c;
	public:
		void setsize();
		void delsize(); 
		void setarray();
		void showarray();
		
};
	void array::setsize()
	{
		cout<<"enter rows and coloums"<<endl;
		cin>>r>>c;
		
		p = new int*[r]; // new create dynamic memeory of interger type and r number of blocks created
		for(int i=0 ;i<r ; i++)
			p[i] = new int [c]; // create memory for coloums		
	}
	
	void array::delsize()
	{
		for(int i=0 ; i<r ; i++)
		delete p[i]; // deallocate memory of rows
		delete p; // delete array of pointer
		
	}
	void array::setarray()
	{
		for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ;j<c ; j++)
			{
				cin>>p[i][j];
			}
		}
	}
	void array::showarray()
	{
		for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ;j<c ; j++)
			{
				cout<<p[i][j]<<"  ";
			}
			cout<<endl;
		}
	}
	
	int main()
	{
		array obj;
		obj.setsize();
		cout<<"enter the array elements:"<<endl;
		obj.setarray();
		cout<<"2-D array is :"<<endl;
		obj.showarray();
		obj.delsize(); //deallocate
		
		return 0;
	}

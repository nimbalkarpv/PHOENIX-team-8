#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
    {
        int arr[10];
        int a;
        int max=0;
        
        for(int i=0; i<10; i++)
        {
            cin>>a;
            if(a!=0)
            {
                arr[i]=a;
            }
            else
            {
                i=10;
            }
        }
    
        for(int i=0; arr[i]!='\0'; i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    
        for(int i=1; i<=max; i++)
        {
            int flag=0;
            for(int j=0; arr[j]!='\0'; j++)
            {
                if(i==arr[j])
                {
                    flag++;
                }
            }
            
            if(flag==0)
            {
                cout<<i<<" ";
            }
        }
    
        return 0;
    }

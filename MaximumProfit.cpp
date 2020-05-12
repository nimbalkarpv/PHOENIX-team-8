#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int arr[100];
    int N=0,a,sum=0;
    for(int i=0; i<100; i++)
    {
        cin>>a;
        if(a!=0)
        {
            arr[i]=a;
            N++;    
        }
        else
        {
            i=100;
        }
        
    }
    
    
    for(int i=0; i<N; i++)
    {
        int max=0;
        for(int j=0; arr[j]!='\0'; j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        
        sum=sum+max;
        
        for(int k=0; arr[k]!='\0'; k++)
        {
            if(max==arr[k])
            {
                arr[k]=(max-1);
                break;
            }
        }
    }
    
    cout<<sum;
    
    return 0;
}

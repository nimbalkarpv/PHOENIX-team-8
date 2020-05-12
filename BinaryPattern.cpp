#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string binary;
    cin>>binary;
    int i=0,count=0;
    while(binary[i]!='\0')
        {
            if(binary[i]=='1')
                {
                    i++;
                    if(binary[i]!='1')
                    {
                        while(binary[i]=='0')
                            {
                                i++;
                            }
                        if(binary[i]=='1')
                            {
                                count++;
                            }
                    }
                }
            else
                {
                    i++;
                }
        }
    cout<<count;
    return 0;
}

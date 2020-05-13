#include <iostream>
using namespace std ;

int main ( )
{
	int n , org , rem , num = 0 ;
	
	cout << "Enter the number : " << endl ;
	cin >> n ;
	
	org = n ;
	while ( org != 0 )
	{
		rem = org % 10 ;
		num = num + rem * rem * rem ;
		org = org / 10 ;
	}
	
	if ( n == num )
	{
		cout << "Number is Armstrong" << endl ;
	}
	else
	{
		cout << "Number is not Armstrong" << endl ;
	}
	
	return 0 ;
}

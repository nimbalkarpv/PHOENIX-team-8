#include <iostream>
using namespace std ;


int fact ( int n ) ;


int main ( )
{
	int n ;
	
	cout << "Enter an Integer : " << flush ;
	cin >> n ;
	
	cout << endl << "Factorial is : " << fact ( n ) << flush ;
	
	return 0 ;
}


int fact ( int n )
{
	if ( n > 1 )
	{
		return n * fact ( n - 1 ) ;
	}
	else
	{
		return 1 ;
	}
}

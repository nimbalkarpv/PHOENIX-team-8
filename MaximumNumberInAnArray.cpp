#include <iostream>
using namespace std ;


int main ( )
{
	int arr [ 10 ] = { 5 , 9 , 17 , 87 , 199 , 4 , 63 , 49 , 168 , 82 } ;
	int max = arr [ 0 ] ;
	
	for ( int i = 0 ; i <= 9 ; i ++ )
	{
		if ( arr [ i ] > max )
		{
			max = arr [ i ] ;
		}
	}
	
	cout << "Maximum number in an array is : " << max << endl ;
	
	return 0 ;
}

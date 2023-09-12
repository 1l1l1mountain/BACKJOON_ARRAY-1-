#include "io.h"

int& function(int a) {


	return a; // int & a= a;
}

void Level04() 
{
	int Num =1 ;
	int b;
		
	function(Num)=b;
	//b= 1;
	
}
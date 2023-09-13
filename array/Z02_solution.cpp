#include "io.h"
void Level02() 
{

	int Num, X, Array[1000] = {};
	cin >> Num >> X;

	for (int i = 0; i < Num; i++) 
	{
		cin >> Array[i];	
	}

	for (int i = 0; i < Num; i++)
	{

		if (X > Array[i]) 
		{
			cout << Array[i]<<" ";
		}
		
	}
	 
}
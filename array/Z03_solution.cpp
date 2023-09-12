#include "io.h"
void Level03()
{
	int Tmp;
	int Array[31] = {};

	for (int i = 0; i < 28; i++) 
	{
		
		cin >> Tmp;
		Array[Tmp] = 1;
			
	}

	for (int i = 1; i <= 30; i++) {
	
		if (Array[i] == 0) cout << i<<endl;
	}


}
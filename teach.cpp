#include "teach.h"

char i=0;

int main()
{
	init();

start:
	
	if(see()!='i')
	{
		if(see()==' ')
		{
			if(i==2)
				rotate();
			else
				forward();
			i=0;
		}
		else
		{
			rotate();
			i++;
		}

		goto start;
	}

    return 0;
}
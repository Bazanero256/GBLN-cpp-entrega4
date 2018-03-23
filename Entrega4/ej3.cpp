#include "stdafx.h"
#include "ej3.h"

void swap_1(int * p1, int * p2)
{
	int  temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap_2(int & p1, int & p2)
{
	int temp = p1;
	p1 = p2;
	p2 = temp;
	
}

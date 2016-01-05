/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include "poli.h" 


int lerPoli(int * poli)
{
int i=0;
	int polim[10]={0}
	while(scanf("%d", polim[i]) && i<10)
	{
		i++;
	}
	for (i = 0; i < 10; ++i)
	{
		poli[i]=polim[i];
	}

}

void escrevePoli(int * poli, int grau)
{
//TODO
}

void adicionaPoli(int * p1, int * p2, int *pRes, int maiorGrau)
{
//TODO
}

float calc(int * poli, int grau, float x)
{
//TODO
}

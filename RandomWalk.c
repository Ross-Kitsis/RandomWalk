/*
 ============================================================================
 Name        : RandomWalk.c
 Author      : 
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "RandomWalk.h"


int main(int agc, char *argv[])
{
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}


/**
 * Read adjacency file and return the number of nodes.
 */
int getNumNodes(char *fileName)
{

	FILE *file =fopen(fileName,"r");
	int numNode = -1;

	if (file == 0)
	{
		return -1;
	}else
	{
		numNode = 0;
		char *line = NULL;
		int len = 0;
		int read = 0;

		while ((read=getline(&line,&len,&read))!= -1)
		{
			numNode++;
		}
	}

	return numNode;
}

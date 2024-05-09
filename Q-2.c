//Q.2 Write a Program to count the frequency of each character in a given string.

#include<stdio.h>

main()
{
  	char str[100];
  	int i;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	
  	for(i=0; str[i]!='\0'; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i=0; i<256; i++)
  	{
		if(freq[i] != 0)
		{
			printf("Character '%c' Occurs %d Times \n", i, freq[i]);
		}
	}
	
}
//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.

#include<stdio.h>

main() 
{
    char name[100], temp[100];
    int i, count = 0, palindrome = 1;
    
    printf("Enter String Name = ");
    gets(name);
    
    for (i=0; name[i]!='\0'; i++) 
	{
        temp[i] = name[i];
        count++;
    }
    
    printf("\nLength of String = %d\n", count);
    
    for (i=0; i<count/2; i++) 
	{
        char duplicate = temp[i];
        temp[i] = temp[count - i - 1];
        temp[count - i - 1] = duplicate;
    }
    
//    printf("%s\n", temp); 
    
    for (i=0; i<count; i++) 
	{
        if (temp[i] != name[i])
		{
            palindrome = 0;
        }
    }
    
    if (palindrome == 1) 
	{
        printf("Given String is PALINDROME");
    }
	 else 
	{
        printf("Given String is NOT PALINDROME");
    }

}

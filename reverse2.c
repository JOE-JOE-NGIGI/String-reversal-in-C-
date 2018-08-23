#include<stdio.h>
 
#define MAX 1000 // Maximum size of string
 
/* Reverse the String using Recursion */
char* ReverseString(char *str)
{
    static int i=0;
    static char rev[MAX];
 
    if(*str)
	{
         ReverseString(str+1);
         rev[i++] = *str;		
    }
 
    return rev;		// Return index of array every time
}
 
/* Main method */
int main()
{
   	char str[MAX];
	
	printf("Please input String to reverse: \n");//prompt user for string input
   	fgets(str,1000,stdin);
   
    	printf ("The reversed String output is: %s \n", ReverseString(str));
         
	return 0;
}

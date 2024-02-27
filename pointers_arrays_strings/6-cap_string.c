#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;
	int newWord = 0;
	
	while (str[i] != '\0')
	{
		i++;
	
	 if (newWord && (str[i] >= 'a' && str[i] <= 'z'))
                  
                            str[i] -= 32;
                            newWord = 0;
                    }
	  switch (*str) 
	  {
            case ' ':
            case '\t':
            case '\n':
            case ',':
            case ';':
            case '.':
            case '!':
            case '?':
            case '"':
            case '(':
            case ')':
            case '{':
            case '}':

		    {
			    newWord = 1;
		    }
		    
		    {
			    return (str);
	  
	  }  
	  }
}




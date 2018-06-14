#include "RDP_header.h"

/*Grammar: 
S-> aSa | aa
*/

int init()
{
	string = malloc(sizeof(char)*15);
} 


bool get_next(char token) {
    if (*string != '\0')
        return *string++ == token;
    else
        return false;
}


bool s()
{
	//printf(" \n  S\n");
	char* temp = string;
	if (first_alternative())
	{
		return true;
	}
	if(first_alternative() == false)
	{
		printf("backtracking. temp(no of 'a's left): %s\n", temp);
		string = temp;
		if(second_alternative())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


bool first_alternative()
{
	
	if(get_next('a'))
	{
		printf("first_alternative - aSa\n");
		//printf("a\n");
		if(s())
		{
			//printf("aS\n");
			if(get_next('a'))
			{
				//printf("aSa\n");
				return true;
			}
		}
	}
	return false;
}

bool second_alternative()
{
	//printf("  / \\ \n a  a    second_alternative\n");
	
	if(get_next('a'))
	{
		if(get_next('a'))
		{
			printf("second_alternative - aa\n");
			return true;
		}
	}
	return false;
}


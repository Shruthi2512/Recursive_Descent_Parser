#inclulde "RDP_header.h"


/*Grammar: 
S-> aSa | aa
*/

int main() 
{
    //string = "aaaaaa";
    init();
    printf("Enter the input string: ");
    scanf("%s",string);
    char* input = string;
    printf("Beginning: S \n");
    if (s() && *string == '\0') 
    {
        printf("\n\nmatch \n");
    }
    else
    {
        printf("\n\nno match \n");
        printf("Input string: %s\n",input);
        printf("letters left out unmatched in the input string: %s\n\n",string);
    }
}
/* A C program in which you declare a variable of type int and initialize it with a value greater than 100,000. 
Next, print the value of this variable as a decimal, octal and hexadecimal number.
SHOULD PRINT: 
[The original number is 100,001 and in decimal it's 100001.
The original number is 100,001 and in octal it's 303241.
The original number is 100,001 and in hexadecimal it's 186A1.]
*/

#include <stdio.h>

int main(void) {
    int variable = 100001;
    
    // %d decimal is base 10 (it should print out 100,001)
    // %o octal 
    // %X hexadecimal 
   
    printf("The original number is 100,001 and in decimal it's %d. \n", variable);

    printf("The original number is 100,001 and in octal it's %o. \n", variable);
    
    printf("The original number is 100,001 and in hexadecimal it's %X.\n", variable);
    return(0);
}

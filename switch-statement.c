/* A C program that reads from the user input, an integer between 1 and 12, and displays a message that 
informs the user of the name of the corresponding calendar month. 
For example, if the user enters 4, the message should read “The fourth month of the year is April.”
If the user enters a number other than an integer between 1 and 12 the program should print a message 
indicating that the number entered does not correspond to a calendar month.*/

#include <stdio.h>
int main(void)
{
    int month;
    
    printf("Input an integer 1-12:");
    scanf("%d", &month); 
    
    switch(month) {
        case 1:
            printf("The first month of the year is January. \n");
            break;
        case 2:
            printf("The second month of the year is February. \n");
            break;
        case 3:
            printf("The third month of the year is March.\n");
            break;
        case 4: 
            printf("The fourth month of the year is April.\n");
            break;
        case 5:
            printf("The fifth month of the year is May.\n");
            break;
        case 6:
            printf("The sixth month of the year is June.\n");
            break;
        case 7:
            printf("The seventh month of the year is July.\n");
            break;
        case 8:
            printf("The eighth month of the year is August.\n");
            break;
        case 9:
            printf("The ninth month of the year is September.\n");
            break;
        case 10:
            printf("The tenth month of the year is October.\n");
            break;
        case 11:
            printf("The eleventh month of the year is November.\n");
            break;
        case 12:
            printf("The twelfth month of the year is December.\n");
            break;
        default:
            printf("Month doesn't exist.\n");
            break;
    
    }
    return(0);
}

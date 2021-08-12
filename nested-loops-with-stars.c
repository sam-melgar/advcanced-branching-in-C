/* Write a C program that reads from the user input a positive number N (of type integer). 
The program should then output a triangle bordered with stars
ex. N= 3.   *
            * * 
            * * *
 */

#include <stdio.h>
int main(void)
{
    int N, i, j, g;
    
    printf("Please enter a positive number:");
    scanf("%d", &N);
    
    for (i=1; i <= N; i++) {
        if (i<=2 || i==N) {
            for (j=1; j<=i; j++) {
                printf("*");
            }
            
        }else {  
           printf("*");
            for (g=1; g<= (i-2); g++) {
                printf(" "); 
            }
            
            printf("*");
            
        }
        printf("\n");
    } 
    
    
    return(0);
    
}

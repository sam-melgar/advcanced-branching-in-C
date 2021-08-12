/*a C program that reads from the user input the unit price and number of purchased items for three separate machine parts and then outputs an order summary*/

#include <stdio.h>
int main(void) {
    float p1, p2, p3, total1, total2, total3, total; 
    int num1, num2, num3, i, total_num_ordered;
    

    /*num1= 5;
    num2= 2;
    num3= 20;
    p1= 34.50;
    p2= 550.00;
    p3= 0.33;*/
    printf("Enter unit price for part #1: ");
    scanf("%f", &p1);
    
    printf("Enter unit price for part #2: ");
    scanf("%f", &p2);
    
    printf("Enter unit price for part #3: ");
    scanf("%f", &p3);
    
    printf("Enter number of items purchased for parts 1, 2, and 3: ");
    scanf("%d %d %d", &num1, &num2, &num3); 
    
    /* Calculations */ 
    total1 = (num1*p1);
    total2 = (num2*p2);
    total3 = (num3*p3);
    total_num_ordered = num1 + num2 + num3;
    total = total1 + total2 + total3;
    
    /*Summary Heading*/ 
    printf("\nHere is a summary of your order:\n");
    printf("Part#    Unit Price     Number Ordered     Total for this part\n");
    
    for (i=0; i<=61; i++) { //dash line for separation
        printf("_");
    }
    
    
    /*First number row */
    printf("\n");
    printf("%3d ", 1);
    printf("     ");
    printf("$%7.2f", p1);
    printf("       ");
    printf("%8d", num1);
    printf("                 ");
    printf("$%8.2f", total1);
    printf("    ");
    
    /*Second number row*/ 
    printf("\n");
    printf("%3d ", 2);
    printf("     ");
    printf("$%7.2f", p2);
    printf("       ");
    printf("%8d", num2);
    printf("                 ");
    printf("$%8.2f", total2);
    printf("    ");

    /*Third number row*/
    printf("\n");
    printf("%3d ", 3);
    printf("     ");
    printf("$%7.2f", p3);
    printf("       ");
    printf("%8d", num3);
    printf("                 ");
    printf("$%8.2f", total3);
    printf("    ");
    
    printf("\n"); 
    
    for (i=0; i<=61; i++) { //dash line separation
    printf("_");
    }
    
    /*Total row*/ 
    printf("\n");
    printf("Total:");
    
    for (i=0; i<=17; i++) { //spacing
        printf(" ");
    }
    
    printf("%8d", total_num_ordered);
    
    for (i=0; i<=16; i++) { //spacing
        printf(" ");
    }
    
    printf("$%8.2f", total);
    
    for (i=0; i<=3; i++) { //spacing
        printf(" ");
    }
    return(0);
}

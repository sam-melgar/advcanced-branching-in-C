/*a C program that that reads from the user input an integer number (which represents a time elapsed, from a race, for example) 
and then calls a function to do the following: The time should be passed to the function which should then print out how many 
hours, minutes, and seconds this corresponds to. For example, if the user enters 15364 seconds, then the function should output 
"15364 seconds equals 4 hours, 16 minutes and 4 seconds." */

#include <stdio.h> 
//s is seconds 
//m is minutes
// h is hours
int calculate_time(int seconds); 

int main(void) {
    int seconds;
    printf("Please enter the number of seconds:");
    scanf("%d", &seconds);
    
    calculate_time(seconds); // call my function
    return(0);
}

int calculate_time(int seconds) {
    int s,m,h;
        m = seconds/60; 
        s = seconds%60; 

        h = m/60;
        m = m%60;
        
        printf("%d seconds equals to %d hours, %d minutes, and %d seconds", seconds, h,m,s);
        
        return(0);
    
}

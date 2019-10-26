#include<stdio.h>
#include<string.h>
int main(){
int i2;
int i = 4;
double d = 4.0;
char s[100] = "HackerRank ";
double d2;
char s2[100]; // this is not scalable for input of unknown size

// Read inputs from stdin
scanf("%d", &i2);
scanf("%lf", &d2);
scanf("%*[\n] %[^\n]", s2); 

// Print outputs to stdout
printf("%d\n", i + i2);
printf("%.01lf\n", d + d2);
//printf("%s%s", s, s2);
strcat(s,s2);  
puts(s);

return 0;
}
/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int main() { 
int i = 4;
double d = 4.0;
char s[100] = "HackerRank ";
// Declare second integer, double, and String variables.
int j=0;
double F;
double z=0.0;
char String[100];
// Read and save an integer, double, and String to your variables.
scanf("%lf",&F);  
scanf("%d",&j);
fflush(stdin);
fflush(stdout);
scanf("%[^\n]",String);
// Print the sum of both integer variables on a new line.
printf("%S",String) ;   	
printf("%d\n",j+i);
// Print the sum of the double variables on a new line.
z = F+d;
printf("%.1lf \n",z);
// Concatenate and print the String variables on a new line
strcat(s,String);    
// The 's' variable above should be printed first.
puts(s);
    return 0;
}*/
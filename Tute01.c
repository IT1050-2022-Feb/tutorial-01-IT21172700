/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
	int Mark01,Mark02;
	int sum;
	float avg;
	
	printf("Enter your Mark 01:"); 
  scanf("%d", &Mark01); 
	printf("Enter your Mark 02:"); 
	scanf("%d", &Mark02);
	 
	sum= Mark01+Mark02;
	printf("Total of Marks: %d\n",sum);
   
           avg=sum/2.0;
           printf("Average of Marks: %.2f",avg);
    
	return 0;
}       // end of main function




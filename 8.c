#include<stdio.h>

/*

Q.8 Write a Program to print the below pattern using nested for loop.

81
81 82 
81 82 83 
81 82 83 84 
81 82 83 84 85

*/

main()
{  int i,j,k=81;
     for(i=5;i>=1;i--){  
	for(j=i; j<=5;j++){
     		    printf("%d",k++);
		 }
		 
		  
		  
		 printf("\n");
	 }
}

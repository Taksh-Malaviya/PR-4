#include<stdio.h>
/*
Q.2 Write a Program to print the below pattern using nested for loop.
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
*/

main()
{  int i,j,k=11;
     for(i=5;i>=1;i--){  
	for(j=i; j<=5;j++){
     		    printf("%d",k++);
		 }
		 printf("\n");
	 }
}

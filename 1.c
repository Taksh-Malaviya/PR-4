#include<stdio.h>
/*
Q.1 Write a Program to print the below pattern using nested for loop.
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/
main()
{  int i,j,k;
     for(i=5;i>=1;i--){
          for(k=i;k>1;k--){
          	printf(" ");
		  }
          		for(j=i; j<=5; j++){
     		    printf("%d",j);
		 }
		 	for(j=4; j>=i; j--){
     		    printf("%d",j);
		 }
		  
		  
		 printf("\n");
	 }
}

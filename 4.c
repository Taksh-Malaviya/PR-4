#include<stdio.h>

/*
Q.4 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
   1 0 1 0
      1 0 1
         1 0
            1



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
		 printf("\n");
	 }
}

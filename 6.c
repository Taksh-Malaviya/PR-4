#include<stdio.h>
/*

Q.6 Write a Program to print the below pattern using nested for loop.
            5
         4 5 4
      3 4 5 4 3
   3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
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

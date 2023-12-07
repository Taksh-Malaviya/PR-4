#include<stdio.h>
/*
Q.3 Write a Program to print the below pattern using nested for loop.
            5
         4 5
      3 4 5
   2 3 4 5
1 2 3 4 5


*/
main()
{
	 int i,j,k;
	 
	 for(i=1 ; i<=5 ; i++){
	 	for(k=i; k>=1; k--){
		 printf("  ");
		 }
	 	for(j=i; j<=5 ; j++){ 
	 		printf("%d ",j%2);
		 }printf("\n");
	
	 }
}

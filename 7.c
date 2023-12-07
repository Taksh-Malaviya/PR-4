 #include<stdio.h>
/*

Q.7 Write a Program to print the below pattern using nested for loop.
            *
        *     *
      *         *
    *             *
  *                 *



*/

main()
{
	int i,j,k;
	for (i=1 ;i<=5 ; i++){
		for (k=1 ;k>=i ; k--){
			printf(" ");
		}
			for(j=1 ; j<=i ; j++){
				(j==1)printf("*");printf(" ");

			}for(j=1 ; j<=i ; j++){
				(j==i)printf("*");printf(" ");
			}
	
		printf("\n");
		}
	}
 

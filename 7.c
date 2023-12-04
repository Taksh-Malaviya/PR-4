 #include<stdio.h>

main()
{
	int i,j,k=5,l=5;
	for (i=1 ;i<=5 ; i++){
			for(j=1 ; j<=9 ; j++){
				if(j==k || j==l){
					printf("* ");
				}else{
					printf("  ");
				}
		}
		l--;
		k++;
		printf("\n");
		}
	}
 

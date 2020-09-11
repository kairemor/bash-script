#include<stdio.h>
#include<stdlib.h>

int main()
{
	int seconde ;

	puts("ce programme permet de mettre en pause votre ordi") ;
	puts("veullez en entrer le nombre de seconde de pause : ") ;
	scanf("%d" , &seconde ) ;
	
	system("sleep $seconde") ; 

	return 0 ;
}
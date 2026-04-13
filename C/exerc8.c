//exerc 8  
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a,b,c;
	printf("Valores:\n");
	scanf("%d %d %d", &a,&b,&c);

	if (a > b && a > c && b > c) {
		printf("Ordem :%d %d %d\n", a,b,c);
	}
	else if (b > a && b > c && c > a) {
		printf("Ordem :%d %d %d\n", b,c,a);
	} 
	else if (c > a && c > b && b > a ) {
		printf("Ordem :%d %d %d\n", c,b,a);
		}
	else if (b > a && b > c && a > c) {
		printf("Ordem :%d %d %d\n", b,a,c);
		 }
	else if (a > b && a > c && c > b) {
		printf("Ordem :%d %d %d\n", a,c,b);
	} 
	else if (c > a && c > b && a > b) {
 		printf("Ordem :%d %d %d\n", c,a,b);
 	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	

	
	
	return 0;
}

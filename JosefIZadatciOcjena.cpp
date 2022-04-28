#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int k;
	int A1,A2,A3,A4,A5;
	int B;
	int count;
	
	printf("klko ima zad u zbirci");
	scanf ("%d", &n);
	print("klko zad Josef zna");
	scanf("%d", &k);
	printf("koe je prof zad odabrala");
	scanf("%d %d %d %d %d", &A1,&A2,&A3,&A4,&A5);
	
	while(k){
		k--;
		printf("koe zna Josef?");
		scanf("%d",&b);
		count+=b==A1?1:b==A2?1:b==A3?1:b==A4?1:b==A5?1:0;
		
	}
	
	printf(count==0?"Dobio je 1":"Dobio je %d",count);
	
	
}

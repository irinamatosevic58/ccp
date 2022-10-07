#include<stdio.h>
 int profit(int N){
 	return N*(50*0.3);
 }

int main(){
	
	int N;
	scanf("%d", &N);
	printf("profit je %d", profit(N));
	
}

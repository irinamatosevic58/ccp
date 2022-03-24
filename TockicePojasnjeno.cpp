#include<stdio.h>
#include<stdlib.h>

int main()  
{
	int n=-1,i,x;
while (n<0){
	printf("Unesi neki broj\n");
	scanf("%d",&n);
	if(n<0) printf("Error\n");
}
//n=5
for(i=n;i>0;i--){ //i=5, i=4, i=3
	for(x=n;x>0;x--) //x=5, x=4, x=3, x=2, x=1, x=0
		printf(".");//..... new line ..... new line
	printf("\n");
}
	
	
}



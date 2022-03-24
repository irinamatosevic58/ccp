#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int n, i, fac=1, br=0;
do{
	printf("Unesi neki broj\n");
	scanf("%d",&n);
	if(n<0) {
		printf("Err");
		br++;
		if (br>4) printf("pretero si ga, %d puta vec upisujes negativan broj. Prestani!!\n", br);
	}
}while (n<0);

    i=n;

    while(i)
        fac*=i--;

	printf("Faktorijel broja %d je %d",n,fac );
}

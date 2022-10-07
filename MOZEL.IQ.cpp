#include<stdio.h>
int Mozel(int x){
	return (x+7)>170;
}
int main(){

int x;
scanf("%d",&x);
printf(Mozel(x)?"Moze":"Ne moze");
}

#include<stdio.h>

int Hocel(int a, int b,int y,int x){
	return x*y>a*b;
}
int main(){
	int a,b,y,x;
	scanf(" %d %d %d %d",&a, &b, &y, &x);
	printf(Hocel(a,b,y,x)?"Hoce":"Nece");
}

#include<stdio.h>

int sum(int n){
   return n==2?2:n*sum(n-1);
}
 int main(){

 int a;

printf("unesi jedan broj");
scanf("%d", &a);

printf("%d",sum(a));

 }

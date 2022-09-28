#include<stdio.h>

int sum(int a){
    a%2==1?a-1:a;
   return a==2?2:a+sum(a-2);
}

int main(){
    int n;

printf("unesi jdan broj");
scanf("%d",&n);

printf("%d",sum(n));

}

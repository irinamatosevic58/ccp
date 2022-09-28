#include<stdio.h>

  int sum(int a){
  return a==1?1:a+sum(a-1);
  }


  int main(){

  int n;

  printf("unesi jedan broj");
  scanf("%d",&n);

  printf("%d",sum(n));
  }



#include <stdio.h>

int dominik (int x,int y, int z){
if(z<x)
return printf("0");
if(z>=(x+y))
return printf("2");
else
return printf("1");
}

int main(){
int x, y, z;
printf("Unesi cijenu teretane \n");
scanf("%d",&x);	
printf("Unesi cijenu privatong trenera \n");
scanf("%d",&y);	
printf("Unesi Dominikovbudzet mjesecon \n");
scanf("%d",&z);	
dominik (x,y,z);
}

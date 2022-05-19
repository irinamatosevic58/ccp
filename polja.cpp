#include <stdio.h>
int main(){

    int i,n;
    int x[1000];
    
    printf("koliko zelis brojeva u polju?");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
        if(x[i]%2==0) printf("%d ",i);
    }


    return 0;
}

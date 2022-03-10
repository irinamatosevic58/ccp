#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int b;

   printf("Unesi jedan broj:\n");
   scanf("%d",&a);
   printf("Unesi drugi broj:\n");
   scanf("%d", &b);

   if(a > b)
       printf("Prvi broj (%d) je veći od drugog (%d)",a,b);
   else
    printf("Drugi broj (%d) je veći od prvog(%d)",b,a);

    return 0;
}

#iclude <stdio.h>
#iclude <stdlib.hr>

int main()
{
    int a;

    printf("Unesi cijeli broj\n");
    scanf("%d", &a);

    if (a % 2 !=0)
    {
        printf("Broj je neparan");

    }
    if (a % 2==0)
        printf("Broj je paran");

    return 0;
}

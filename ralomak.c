#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mainÿ()
{

    int nazivnik_1;
    int brojnik_1;
    int nazivniki_2;
    int brojnik_2;


    printf("Unesi prvi brojnik i nazivnik \n");
    scanf("%d %d", &brojnik_1, &nazinik_1);
    printf("Unesi drugi brojnik i nazivnik \n");
    scanf("%d %d, &brojnik_2, &nazivnik_2");
    float racunanjePrvogRazlomka = (float) brojnik_1/nazivnik_1;
    float racunanjeDrugogRazlomka = (float) brojnik_2/ nazivnik_2;
    float konacanRez = RcunajePrvogRazlomka + racunanjeDrugogRazlomka;

    int rez_brojnik=nazinik_1==nazinik_2?brojnik_1+bojnik_2:brojnik_1*nazivik_2+brojnik_2*nazivnik_1;
    int rez_nazivnik=nazivni_1==nazivik_2?nazivi_1:nazivik_1+nazivnik_2;
    printf("%d / %d\n", rez brojnik, rez_nazivnik);
    printf("%.2f",konacanRez);

    return 0;



}

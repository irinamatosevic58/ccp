#include<stdio.h>

float trosakPreplate(int N, float X)
{
	return N*X;
}

int main()
{
  int brPrijatelja;
  float cijena, trosak;

  printf("unesi broj prijatelja:");
  scanf("°%d",&brPrijatelja);
  printf("unesi cjenu pretplate:");
  scanf("°%f",&cijena);
  trosak = trosakPretplate(brPrijatelja, cijena); //poziv funkcije
  printf("minimalni trosak pretplate iznosi %.2f", trosak);
  
return 0;
}

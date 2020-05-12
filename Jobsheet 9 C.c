#include <stdio.h>
int main()
{
int i;
char nama[20]={'M','U','K','T','I'};
char nama2[20]="MUKTI";

printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}

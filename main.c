#include <stdio.h>
#include <stdlib.h>


int somme(int a,int b)
{
return a+b;
}
int sous(int a,int b)
{
    return a-b;
}
int multip(int a,int b)
{
    return a*b;
}
float divi(int a,int b){
  return a/b;
}

int main()
{ int x,y,z;
printf(" Calucaltrice :\n");
printf("donner deux entier:");
     scanf("%d%d",&x,&y);

printf("la somme est:%d\n\n",somme(x,y));
printf("la soustraction est:%d\n\n",sous(x,y));
printf("la multiplication  est:%d\n\n",multip(x,y));
printf("la division est:%.2f",divi(x,y));

printf("\n\n\n Fin du programme!\n\n\n\n\n");










    return 0;
}

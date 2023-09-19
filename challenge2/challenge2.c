#include<stdio.h>
int main(){
   int nbr[10];
   int i;
   int min = nbr[0];
   int max =0;
   for(i=0;i<10;i++){
    printf("Entrer un nombre entier:");
    scanf("%d",&nbr[i]);
   }
    for(i=0;i<10;i++)
    {
        if (nbr[i]<= min)
        {
            min = nbr[i];
        }
        if(nbr[i]>max)
        {
            max = nbr[i];
        }
    }
    printf("min =%d\n",min);

    printf("max =%d",max);
   }



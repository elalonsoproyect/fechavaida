#include <stdio.h>
#include <stdlib.h>

void fecha(int dia, int mes, int an)
{
 FILE *ap;
    int op;
    ap=fopen("nombres.txt","a");
    if(ap!=NULL){
    if(dia>=19 && mes>=11 && an>=2021){
            fprintf(ap,"\n\nLa fecha es valida: %d/%d/%d\n\n",dia,mes,an);
            fprintf(ap,"\npuede realizar el examen\n");
            printf("\n\nLa fecha es valida: %d/%d/%d\n\n",dia,mes,an);
            printf("\npuede realizar el examen\n");
    }
     else{

        fprintf(ap,"\nLa fecha no es valida");
          fprintf(ap,"\nimposible realizar el examen\n");
        printf("\nLa fecha no es valida");
          printf("\nimposible realizar el examen\n");
     }
    }
     fclose(ap);
}



int main()
{
int dia,mes,an;
printf("\t\t\tESTE PROGRAMA TE DICE SI LA FECHA ES VALIDA\n\n");
    printf("ingresa el dia:");
    scanf("%d",&dia);
     printf("ingresa el mes:");
    scanf("%d",&mes);
     printf("ingresa el año:");
    scanf("%d",&an);
    fecha(dia,mes,an);
    return 0;
}

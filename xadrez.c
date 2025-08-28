#include <stdio.h>

int main(){

printf("----------Movimento Torre----------\n");

    int torre = 1;

while (torre <= 5)
{
    printf("A torre foi movida para casa A %d \n", torre);
    torre ++;
}

printf("----------Movimento Bispo----------\n");

    int bispo = 1;

do
{
    switch (bispo)
    {
    case 1:
        printf("O bispo foi movido para casa C %d \n",bispo);
        break;
    case 2:
        printf("O bispo foi movido para casa D %d \n",bispo);
        break;
    case 3:
        printf("O bispo foi movido para casa E %d \n",bispo);
        break;
    case 4:
        printf("O bispo foi movido para casa F %d \n",bispo);
        break;
    case 5:
        printf("O bispo foi movido para casa G %d \n",bispo);
        break;


    default:
        break;
    }
    bispo ++;
    
} while (bispo <= 5);

printf("----------Movimento Rainha----------\n");




for (int Rainha = 1; Rainha <= 8; Rainha++)
{

    switch (Rainha)
    {
    case 1:
        printf("A Rainha foi movida para casa H 4 \n");
        break;
    case 2:
        printf("A Rainha foi movida para casa G 4 \n");
        break;
    case 3:
        printf("A Rainha foi movida para casa F 4 \n");
        break;
    case 4:
        printf("A Rainha foi movida para casa E 4 \n");
        break;        
    case 5:
        printf("A Rainha foi movida para casa D 4 \n");
        break;        
    case 6:
        printf("A Rainha foi movida para casa C 4 \n");
        break;
    case 7:
        printf("A Rainha foi movida para casa B 4 \n");
        break;
    case 8:
        printf("A Rainha foi movida para casa A 4 \n");
        break;

    default:
        break;
    }

   
}

 printf(" Xeque Mate!!");
    
    













return 0;
}
#include <stdio.h>

int main(){
printf("\n");
printf("----------Movimento Torre----------\n");
printf("\n");
    int torre = 1;

while (torre <= 5)
{
    printf("A torre foi movida para casa A %d \n", torre);
    torre ++;
}
printf("\n");
printf("----------Movimento Bispo----------\n");
printf("\n");
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

printf("\n");
printf("----------Movimento Rainha----------\n");
printf("\n");
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
printf("\n");
printf("----------Movimento Cavalo----------\n");
printf("\n");
for (int Cavalo = 3; Cavalo <= 3; Cavalo++){
    for (int Cavalo2 = 5; Cavalo2 >= 3; Cavalo2--){
        printf("O Cavalo foi movido para casa E %d \n",Cavalo2);
    }
        printf("O Cavalo foi movido para casa D %d \n", Cavalo);
    }

printf("\n");
printf(" Xeque Mate!!");











return 0;
}
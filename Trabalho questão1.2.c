#include<stdio.h>
#include<math.h>
int main()
{

    int num;
    int cont;
    int result;
    int numEsc;

    int resp;
    cont = 1;
    printf("Qual o numero?\n");
    numEsc = scanf("%d", &num);
    do{
    result = num * cont;
    printf(" %d * %d = %d \n", num,cont,result);
    cont++; 
    } while(cont < 11);

}
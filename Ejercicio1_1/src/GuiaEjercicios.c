/*
 ============================================================================
 Name        : GuiaEjercicios.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumNumber(int numOne, int numTwo, int* total );
int main()
{
	setbuf(stdout, NULL);
    int dateOne;
    int dateTwo;
    int pTotalMain;
    int validateFunc;

    printf("Enter a number >> ");
    scanf("%d",&dateOne);

    printf("Enter a number >> ");
    scanf("%d",&dateTwo);

    validateFunc=sumNumber(dateOne, dateTwo, &pTotalMain);

    if(validateFunc==0){

       printf("The sum total is %d\n",pTotalMain);
       printf("GG_IZI :D  ");

    }else{
        printf("ERROR");
    }


    return 0;
}

int sumNumber(int numOne, int numTwo, int* total){

    int retorno = -1;
     printf("Calculated ... \n ");

    if(total != NULL && numOne > 0 && numTwo > 0){

        *total = numOne + numTwo ;
        retorno=0;
    }
    return retorno;
}

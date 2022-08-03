#include <stdio.h>

main()
{
    int num1, num2, num3, calc;

    while(1)
    {

    printf("Digite um numero:\n");
    scanf("%d",&num1);

    printf("Digite um numero:\n");
    scanf("%d",&num2);

    printf("Digite um numero:\n");
    scanf("%d",&num3);

    calc = num1+num2+num3;

    printf("Resultado = %d\n",calc);


    if(calc==6)
    {
        break;
    }


    calc=0;
    }
    }





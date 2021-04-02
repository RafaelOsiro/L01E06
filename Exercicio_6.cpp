/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B
tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/

#include <stdio.h>
#include<stdbool.h>

int main()
{
    //Variable Declaration
    int i;
    char *c;
    float grade1, grade2, average;
    bool validation;

    //Code
    i = 0;
    validation = false;

    while (validation != true) //Input Validation Grade 1
    {
        //Input grade 1
        printf("Sistema para calcular a m\202dia de duas notas!\n");
        printf("Digite a nota 1: ");
        scanf("%f", &grade1);

        if (grade1 >= 0 & grade1 <= 10)
        {
            validation = true;
        }
        else
        {
            validation = false;
            ++i;
            printf("\nErro %d de 3", i);
            printf("\nNota inv\240lida!");
            printf("\nDigite uma nota entre 0 e 10\n\n");

        }

        if (i == 3)
        {
            printf("\nO sistema ser\240 encerrado!\n\n");
            return 1;
        }

    }

    validation = false;

    while (validation != true) //Input Validation Grade 2
    {
        //Input Grade 2
        printf("\nSistema para calcular a m\202dia de duas notas!\n");
        printf("Digite a nota 2: ");
        scanf("%f", &grade2);

        if (grade2 >= 0 & grade2 <= 10)
        {
            validation = true;
        }
        else
        {
            validation = false;
            ++i;
            printf("\nErro %d de 3", i);
            printf("\nNota inv\240lida!");
            printf("\nDigite uma nota entre 0 e 10\n\n");

        }

        if (i == 3)
        {
            printf("\nO sistema ser\240 encerrado!\n\n");
            return 1;
        }

    }

    average = ((grade1 * 3.5) + (grade2 * 7.5)) / 11;

    //Output
    printf("\n\nA m\202dia do aluno \202: %.2f\n", average);

    scanf("%c", &c);
    return 0;
}

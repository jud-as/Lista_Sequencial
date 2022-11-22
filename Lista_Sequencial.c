#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

void exercicio1()
{
    printf("Hello World!"); 
}

void exercicio2()
{
    
    printf("Caderno de poesias é um belo lugar.\nTantas coisas lindas que eu gostaria de falar.\nEu falo em toda forma de versos para todos poderem escutar.\nAgora você já sabe por que os poetas passam os dias escrevendo em seus\ncadernos de poesia.");
}

void exercicio3()
{
    int n1;
    float f1;
    double f2;
    char c;
    char name[5];
    bool b = true;

    printf("Numero inteiro: ");
    scanf("%d" , &n1);
    printf("\nNumeros reais: \n");
    scanf("%f%lf" , &f1, &f2);
    printf("\nLetra: ");
    scanf(" %c", &c);
    printf("\nString: ");
    fflush(stdin);
    gets(name);

    printf("\nNumero inteiro: %d", n1);
    printf("\nNumeros reais:");
    printf("\n%f", f1);
    printf("\n%lf", f2);
    printf("\nLetra: %c", c);
    printf("\nString: %s", name);
    printf("\nLogico: %d", b);
}

void exercicio4()
{
    float a, b, x;

    printf("Valor de A e B, respectivamente:\n");
    scanf("%f%f", &a, &b);
    x = a + b;
    printf("%.1f + %.1f = %.1f.", a, b, x);

}

void exercicio5()
{
    float a, b, x;

    printf("Valor de A e B, respectivamente:\n");
    scanf("%f%f", &a, &b);
    printf("%.1f + %.1f = %.1f.", a, b, a + b );
}

void exercicio6()
{
    float a = 7.5, b = 10.3, x;
    x = a + b;
    printf("%.1f + %.1f = %.1f.", a, b, x);
}

void exercicio7()
{
    int n1, n2, PROD;
    printf("De dois valores:\n");
    scanf("%d%d", &n1, &n2);

    PROD = n1 * n2;
    printf("PROD = %d.", PROD);

}

void exercicio8()
{
    int a, b, c, d, diferenca;

    printf("Valores de A, B, C e D, respectivamente:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d );

    diferenca = ( a * b ) - ( c * d );
    printf("%d * %d - %d * %d", a, b, c, d);
    printf("DIFERENCA = %d", diferenca);
}

void exercicio9()
{
    char vendedor[32];  
    float vendas, salario, comissao;

    printf("Nome do vendedor: ");
    fflush(stdin);
    gets(vendedor);
    printf("Salario fixo: ");
    scanf("%f", &salario);
    printf("Vendas em dinheiro: ");
    scanf("%f", &vendas);

    comissao = (15*vendas)/100;
    salario = salario + comissao;
    printf("Receberá no total %.2f", salario);

}

void exercicio10()
{
    float x1, x2, y1, y2;
    float distancia;

    printf("De os valores do Ponto 1:\n");
    scanf("%f%f", &x1, &y1);
    printf("\nDe os valores do Ponto 2:\n");
    scanf("%f%f", &x2, &y2);

    system("CLS");
    distancia = sqrt(pow(( x2 - x1 ), 2) + pow((y2 - y1), 2));
    printf("Distancia: %.4f", distancia);

}

void exercicio11()
{
    float area, volume, raio, pi = 3.14159;
    printf("Raio da esfera: ");
    scanf("%f", &raio); 
    area = 4 * pi * pow(raio, 2);
    volume = (4/3.0) * pi * pow(raio, 3);
    printf("\nVolume da esfera: %.3f", volume);
    printf("\nArea da esfera: %.3f", area);
}



int main()
{
    setlocale(LC_ALL, "Portuguese");
    exercicio1();
    return 0;
}
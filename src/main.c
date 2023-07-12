#include <stdio.h>
#include <math.h>
//#include <conio.h> 

double soma();
double subt();
double mult();
double divi();
int rDiv();

int main(void)
{
    double num1, num2;
    int opc;
    char conti = 1;
    do{
        printf("Escolha a Opção Desejada:\n[ 1 ]Soma\n[ 2 ]Subtração\n[ 3 ]Multiplicação\n[ 4 ]Divisão\n[ 5 ]Raiz Quadrada\n[ 6 ]Potencia\n[ 7 ]Log Natural\n[ 8 ]Log de Base 10\n[ 9 ]Seno\n[ 10 ]Cosseno\n[ 11 ]Tangente\n[ 0 ]Sair\n");
        scanf("%i", &opc);
        if (opc == 0)
        {
            conti = 0;
            return 0;
            break;

        }else
        {  
            printf("Insira o Numero Primário ou  Base:\n");
            scanf("%lf", &num1);
            printf("Insira o Numero Secundário ou expoente:\n");
            scanf("%lf", &num2);
            if (opc == 1)
            {
                double result = soma(num1, num2);
                printf("A soma de %lf e %lf é igual a %lf\n", num1, num2, result);
            }else if (opc == 2)
            {
                double result = subt(num1, num2);
                printf("A subtração de %lf e %lf é igual a %lf\n", num1, num2, result);
            }
            else if (opc == 3)
            {
                double result = mult(num1, num2);
                printf("A multiplicação de %lf e %lf é igual a %lf\n", num1, num2, result);
            }
            else if (opc == 4)
            {
                double result = divi(num1, num2);
                int resto = rDiv(num1, num2);
                printf("A divisão de %lf por %lf é igual a %lf e resto %d\n", num1, num2, result, resto);
            }else if (opc == 5)
            {
                double raizq = sqrt(num1);
                printf("A Raiz Quadrada de %lf é igual a %lf\n", num1, raizq);
            }else if (opc == 6)
            {
                double pot = pow(num1, num2);
                printf("%lf elevado a %lg é igual a %lf\n", num1, num2, pot);
            }else if (opc == 7)
            {
                double rlog = log(num1);
                printf("Log de %lf é igual a %lf\n", num1, rlog);
            }else if (opc == 8)
            {
                double rlog10 = log10(num1);
                printf("Log10 de %lf é igual a %lf\n", num1, rlog10);
            }else if (opc == 9)
            {
                double sen = sin(num1);
                printf("O Seno de %lf é igual a %lf\n", num1, sen);
            }else if (opc == 10)
            {
                double coss = cos(num1);
                printf("O Cosseno de %lf é igual a %lf\n", num1, coss);
            }else if (opc == 11)
            {
                double tang = tan(num1);
                printf("A Tangente de %lf é igual a %lf\n", num1, tang);
            }else{
                printf("Saindo ....\n");
                conti = 0;
                break;
            }
        }
    }while (conti == 1);
    return 0;
    
    
}

double soma(double num1, double num2)
{
    double result = num1 + num2;
    return result;
}

double subt(double num1, double num2)
{
    double result = num1 - num2;
    return result;
}

double mult(double num1, double num2)
{
    double result = num1 * num2;
    return result;
}

double divi(double num1, double num2)
{
    double result = num1 / num2;
    return result;
}

int rDiv(int num1, int num2)
{
    int result = num1 % num2;
    return result;
}

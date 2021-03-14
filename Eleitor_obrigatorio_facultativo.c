#include <stdio.h>

int main ()
{
    int nascimento, ano_atual, idade;

    printf("Qual Ano que voce nasceu?:");

    scanf("%d", &nascimento);

    printf ("Digite o Ano Atual:");

    scanf("%d", &ano_atual);

    idade = ano_atual - nascimento;


     if (idade < 16)
     {
          printf ("Sua idade atual eh: %d anos, voce nao eh um eleitor obrigatorio.", idade);
     }
     else if (idade >=18 && idade <= 65)
     {
          printf ("Sua idade atual eh: %d anos, e voce eh um eleitor obrigatorio.", idade);
     }
     else if (idade >= 16 && idade <=17 || idade > 65)
     {
          printf ("Sua idade atual eh: %d anos, e voce eh um eleitor facultativo.", idade);
     }

    return 0;
}

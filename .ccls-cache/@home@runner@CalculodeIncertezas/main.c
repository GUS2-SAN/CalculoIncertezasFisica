#include <stdio.h>

int main(void) {

  float med1, med2, med3, med4, med5;
  float media, desvioPadrao, incA, incB, incC;

  printf("Digite os valores das medidas: ");
  scanf("%f %f %f %f %f", &med1, &med2, &med3, &med4, &med5);
  printf("Digite o valor da incerteza B: ");
  scanf("%f", &incB);

  media = (med1 + med2 + med3 + med4 + med5) / 5;

  desvioPadrao =
      sqrt((pow(med1 - media, 2) + pow(med2 - media, 2) + pow(med3 - media, 2) +
            pow(med4 - media, 2) + pow(med5 - media, 2)) /
           4);

  incA = desvioPadrao / sqrt(5);
  incC = sqrt(pow(incA, 2) + pow(incB, 2));

  printf("\nA média é: \n %.4f", media);
  printf("\nO desvio padrão é: \n %.4f", desvioPadrao);
  printf("\nA incerteza do tipo A é: \n %.4f", incA);
  printf("\nA incerteza do tipo B é: \n %.4f", incB);
  printf("\nA incerteza do tipo C é: \n %.4f", incC);

  printf("\n\nResultado: \n %.4f +- %.4f", media, incC);

  return 0;
}
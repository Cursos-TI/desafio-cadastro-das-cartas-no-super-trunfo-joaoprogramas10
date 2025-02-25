#include <stdio.h>

int main(){


int pontoturistico, pib;
float area, populacao, densidade, capital, media;
char cidade[60];

printf("---Carta 1A01---\n");

printf("nome da cidade: %s\n", cidade);
fgets(cidade, 60, stdin);

printf("populacao: ");
scanf("%f", &populacao);

printf("area: ");
scanf("%f", &area);

printf("pib: ");
scanf("%d", &pib);

printf("pontos turisticos: ");
scanf("%d", &pontoturistico);

densidade = populacao/area;
capital = pib/populacao;

printf("densidade populacional: %2f", densidade);
printf("pib per capta: %.2f", capital);

(media = (float) pontoturistico + pib + area + populacao + densidade + capital / 6);

printf("\n---Dados gerais---\n");

printf("nome da cidade: %s\n", cidade);
printf("area: %f km\n", area);
printf("pib: %d bilhoes de reais\n", pib);
printf("populacao: %f\n", populacao);
printf("ponto turistico: %d na sua cidade\n", pontoturistico);
printf("densidade populacional: %.2f\n", densidade);
printf("pib per capta: %.2f\n", capital);
printf("super trunfo: %.2f (power card)\n", media);

return 0;

}
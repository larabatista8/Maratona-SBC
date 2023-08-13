#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
// função para ler as pontuações dos competidores e armazená-las em um vetor
 void leitura ( int *vet, int n){
 	int i;
 	for(i=0; i<n; i++){
 		scanf("%d", &vet[i]);
 		
	 }	
 }
// função para ordenar os elementos do vetor
void ordena(int *num, int tamanho){
	int i,j, auxi;
	
for(i=0; i<tamanho; i++){
	
	for(j=1;j<tamanho; j++){
		if(num[ j ]<num[j-1]){
			auxi=num[j-1];
			num[j-1]=num[j];
			num[j]=auxi;
					}
				     	}
						}		
}

// função para verificar quantos candidatos possuem pontuação maior ou igual o canditado na posição k
int quantidade(int *vet, int n, int k){
	int total=0, i;
	
	for (i=0; i<n; i++){
		if(vet[i]<= vet[k-1]) total++;
	}
	
	return total;	
}
// função main
int main (){
	int n,k, i, quant, *vet;
	
	scanf("%d", &n);
	scanf("%d", &k);
	vet = (int *) malloc(n*sizeof(int));
	if(!vet) exit(1);
	leitura(vet,n);
	ordena(vet, n);
	quant= quantidade(vet, n,k);
	printf("%d", quant);
return 0;	
}

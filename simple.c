#include <stdio.h>
/*int dbl(int a){
	a= a*2;
	return a;
}



int main() {
	//printf("resultat: %i\n", dbl(4));
int tab[3];
tab[0]=1;
tab[1]=2;
printf("valeur : %i O, %i 1, %i 2, %i 3 \n", tab[0], tab[1], tab[2],
 tab[3]);
}

10

int main() {
int a, *b;
a = 12;
b = &a;
*b = a + 1;
printf("a = %i, b = %i\n", a, b);
}

11
int main() {
int a, *b;
a = 12;
b = &a;
*b = a + 1;
printf("a = %i, b = %lu\n", a, (long unsigned) b);
}

12
 int main(){
int tab[3], taille;
printf("premiere adresse: %lu, deuxieme adresse: %lu\n",(long unsigned) &tab[0], (long unsigned) &tab[1]);
taille= (int)&tab[1]-(int)&tab[0];
printf("taille d'un int: %i\n", taille);
}

13
int main(){
float tab[3], taille;
printf("premiere adresse: %lu, deuxieme adresse: %lu\n",(long unsigned) &tab[0], (long unsigned) &tab[1]);
taille= (int)&tab[1]-(int)&tab[0];
printf("taille d'un int: %i\n", taille);}

14
int main() {
int t[2];
printf("Premiere adresse: %i, seconde adresse: %i\n", (int)t,
(int)(t+1));
}

15
for(int i=1; i<=100;i++){
	printf("-%i-\n", i);
}


16
for(int i=1; i<=100;i++){
	if(i%3!=0 && i%7!=0){
		printf("-%i-\n", i);
	}
}

17
int main(){
	for(int i=1;i>0;i++){
		if(i%2262==0 && i%13195==0){
			printf("%i \n", i);
			break;
		}
	}
}	



18
int main(){
	char chaine[80];
	printf("Entrez une chaine: ");
	fgets(chaine, 80, stdin);	
	fputs(chaine, stdout);
	int i=0;
	while (chaine[i]!='\0'){
	i++;
	}
		i--;
printf("Il y a %i caracteres\n", i);
}

19

int palindrome (char *s){
int i=0;

	while (s[i]!='\0'){
		i++;
	}
	i--;
	for(int j=0;j++) {
		if(s[i-j-1]!=s[j]){
			return 0;
		}
	}
	return 1;
}



20

int main() {
	int i;
	FILE *f;
	f = fopen("message.txt","r");
	while (1) {
		i = fgetc(f);
	if (feof(f)) {
		break;
	}
	fputc(i,stdout);
	}
	printf("\n");
	fclose(f);
}

*/




	

#include <stdio.h>

/*exercice 1*/

/* question1*/
int maximum(int*t,int n){
	int maximum=*t;
	for(int i=1;i<n;i++){
		if (maximum<*(t+i))
		{
		maximum=*(t+i);	
		}

	}
	return maximum;
}	
int minimum(int*t,int n){
	int minimum=*t;
	for(int i=1;i<n;i++){
		if (minimum>*(t+i))
		{
		minimum=*(t+i);	
		}

	}
	return minimum;
}
void minmax(int *t, int n, int *pmin, int *pmax){
	*pmin= minimum(t,n);
	*pmax=maximum(t,n);
}
	
/*question2*/
/*void f(int a, int b, int *s, int *p) {
*s = a + b;
*p = a * b;
}
*/

int main(int argc, char const *argv[]){
	int tab[5]={2,5,4,7,8};
	/*printf("%i\n", maximum(tab,5) );*/

	/*int x, y;
	f(12, 4, &x, &y);
	printf("x = %d, y = %d\n", x, y);*/

	int a,b;
	minmax(tab,5,&a,&b);
	printf("min=%d,max=%d\n",a,b );
}






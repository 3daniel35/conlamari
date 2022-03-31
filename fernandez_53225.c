#include <stdio.h>
#include <conio.h>
#include <math.h>

//Daniel Fernández Rodríguez 53225
int main (void){
int n;
char a, opc, opc1;	
printf("Dibujando triangulos con C.\n\n");

printf("Intruduzca el numero de lineas que va a ocupar la figura\n");
while((scanf("%d", &n))!=1 || (n<0) || (getchar()!='\n')){
	printf("Debe ser un numero natural");
	while(getchar()!='\n');
}

printf("Elija el simbolo que quiere usar en el dibujo\n");
while((scanf("%c", &a)!=1) || (getchar()!='\n')) {
	printf("Un unico simbolo, por favor\n");
	while(getchar()!='\n');
}

do{
	
	printf("\nElija una de las figuras del siguiente menu (0 para salir):\n");
	printf("(1) Triangulo rectangulo\n");
	printf("(2) Piramide\n");
	
	while((scanf("%c", &opc)!=1) || (getchar()!='\n')) {
		printf("Una unica opcion, por favor\n");
		while(getchar()!='\n');
         }		
	switch(opc){
		
		case '1': printf("Elija la orientacion del trianglo segun la posicion del angulo recto.\n\n");
			
				printf(" (1) Arriba a la izquierda\n");
				printf(" (2) Abajo a la izquierda\n");
			while((scanf("%c", &opc1)!=1) || (getchar()!='\n')) {
				printf("Una unica opcion, por favor\n");
				while(getchar()!='\n');
			}
			switch(opc1){
				int i=1;
				int j=1;
				
				case '1' : for(i=n;i>=1;i--){
							printf("\n");
							for(j=i;j>=1;j--){
								printf("%c", a);}
							}
				break;
				
				
				
				break;
				case '2' :  for(i=1;i<=n;i++){
								printf("\n");
								for(j=1;j<=i;j++){
									printf("%c", a);}
							}
				 break;
				default : printf("Introduce una opcion valida"); break;
			}
		break;
				int i=1;
				int j=1;
				int k=1;	
		case '2' :	for(i=1;i<=n;i++){
					printf("\n");
					for(j=n-i;j>=1;j--){
						printf(" ");
						for(k=1;k<=j;k++){
						printf("%c", a);}
					}
				}
								
			break;
		
		break;
		
		default : printf("Introduzca una opcion valida");
		break;
		
		case '0' : printf("Fin del programa"); 
		break;
	}


} while(opc!='0');

}




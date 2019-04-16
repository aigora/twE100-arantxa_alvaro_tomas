#include<stdio.h>
#include <time.h>
#include <stdlib.h>

//valores de las constantes
#define S 100
#define N 20
#define C 6

//estructura de los muebles
 struct articulo {
	
	char nombre[N];
	int precio;
	
	} articulos[C]={  {"Sillas",20},{"Camas",40},{"Mesas",30},{"Armarios",35},{"Librerias",23},{"Sofas",32}};
	
	
struct socio {
	char nombre[N];
	char apellido [N];
	char correo[N];
	int password;
	int cpostal[N];
	char calle [N]; 
	int piso;	
	int pin;
	
}socios[S];

	
 int main(){

//variables	
int menu;
int cantidad [C];
int producto;
int i;
int j;
// codigo del usuario
int pin;
//codigo de factura
int referencia;
//variable error
int r;
char rep1;
//precio articulo
int particulo[C];
//precio total
int ptotal;
//variables para repeticiones
char rep2;
int cont;

cont=0;

//vector cantidad =0
for (i=0;i<C;i++)
cantidad[i]=0;

do{

printf("\n\n Bienvenidos, que deseas hacer\n");
printf("\n 1. Comprar\n");
printf("\n 2. Devoluciones\n");
printf("\n 3. Registro de socios\n");
printf("\n\n Que desea hacer:  ");
scanf("%i",&menu);
fflush (stdin);
printf("\n========================================================================================================================\n");

switch (menu){

//Opcion de compra
case 1:

		do{
		r=0;
		
			
		for (i=0;i<C;i++){
			
			printf("\n%i.\t%s -> %i €", i+1,articulos[i].nombre,articulos[i].precio);
			
		}
		
		printf("\n\n Introducca el numero del articulo que desea comprar:  ");
		scanf("%d",&producto);
		fflush(stdin);
		
		
		switch(producto){
			
			case 1:
					 printf("\nUsted ha seleccionado el articulo:sillas. \n\n¿cuantas sillas quieres comprar?   ");
					scanf("%d",&cantidad[0]);
					fflush(stdin);
					break;
					
			case 2:
					 printf("\nUsted ha seleccionado el articulo:cama. \n\n¿cuantas camas quieres comprar?   ");
					scanf("%d",&cantidad[1]);
					fflush(stdin);
					break;
					
			case 3: 
					printf("\nUsted ha seleccionado el articulo:mesa. \n\n¿cuantas mesas quieres comprar?   ");
					scanf("%d",&cantidad[2]);
					fflush(stdin);
					break;
					
			case 4: 
					printf("\nUsted ha seleccionado el articulo:armario. \n\n¿cuantos armario quieres comprar?   ");
					scanf("%d",&cantidad[3]);
					fflush(stdin);
					break;
					
			case 5: 
					printf("\nUsted ha seleccionado el articulo:libreria. \n\n¿cuantas librerias quieres comprar?   ");
					scanf("%d",&cantidad[4]);
					fflush(stdin);
					break;	
					
			case 6: 
					printf("\nUsted ha seleccionado el articulo:sofa. \n\n¿cuantas sofas quieres comprar?   ");
					scanf("%d",&cantidad[5]);
					fflush(stdin);
					break;		
					
			default:
					printf("\nError!!! No disponemos de este articulo.\n\n ¿ desea volver al menu principal? ");
					r++;
					scanf("%s",&rep1);
					fflush(stdin);		
					
							
		}
		
		
		
		//solo aparece cuando no hay error 
		if(r==0){
			fflush(stdin);
			printf("\n\n Desea comprar algo mas o realiza alguna modificacion (en este caso seleccione el articulo e indique la nueva cantidad) ");
			scanf("%c", &rep1);
			fflush(stdin);
		}
		}while(rep1=='s'||rep1=='S');
		
		
		
		//lista de la compra
		printf("\n========================================================================================================================\n");
		printf("\n\nUsted ha comprado:   ");
		for (i=0;i<C;i++){
			
			if(cantidad[i]!=0)	{
				particulo[i]=cantidad[i]*articulos[i].precio;
				printf("\n\n%i unidades de %s .......%i",cantidad[i],articulos[i].nombre,particulo[i]);
				ptotal+=particulo[i];
			}
		
		}
			printf("\n\n El precio total de la compra es de : %i €", ptotal);
		//archivo
		FILE *ticket;
		ticket=fopen("ticket.txt","w");
		
		
		//Comprobante de que se cree archivo 
		if(ticket==NULL){
			printf("Error!!!");
		}
		else {
			printf("\n\n Copia del ticket creada");
		}
		
		//escritura
		fprintf(ticket, "\t%s\n", "TICKET");
		fprintf(ticket, "\n%s\n\n","Usted ha comprado  ");
		
		for (i=0;i<C;i++){
		
		if(cantidad[i]!=0){
		
			fprintf(ticket, "\n\n %i\t unidades de %s por valor de %i €", cantidad[i],articulos[i].nombre,particulo[i]);
		
	
		}
		}
			fprintf(ticket,"\n\n========================================================================================================================\n");
			fprintf(ticket, "\n\n\nEl precio total de la cuenta es de %i €", ptotal);
			
			
			srand(time(NULL));
			referencia=rand () % 10000000000+1;	
			fprintf(ticket, "\n\n Su codigo de factura es %i",referencia);
			
			
		fclose(ticket);
		
		break;
		
	

//Opcion de devolucion
case 2:
	
	break;
	
//opcion de socios 	
case 3:
i=1;
rep2=0;	
do{
	
//digitalizamos los datos del nuevo socio	
	printf("\n\t REGISTRO DE SOCIOS");
	printf("\n\n Digitalice su nombre:  ");
	scanf("%30[^\n]", socios[i].nombre);
	fflush(stdin);
	printf("\n\n Digitalice su apellido:  ");
	scanf("%30[^\n]", socios[i].apellido);
	fflush(stdin);
	printf("\nIntroduzca su usuario (no numeros):   ");
	scanf("%30[^\n]", socios[i].correo);
	fflush(stdin);
	printf("\nIntroduzca su contraseña (solo numeros):   ");
	scanf("%i", &socios[i].password);
	fflush(stdin);
	printf("\nIntroduzca su localidad:   ");
	scanf("%s",socios[i].cpostal);
	fflush(stdin);
	printf("\n Introduce la calle :   ");
	scanf("%30[^\n]", socios[i].calle);
	fflush(stdin);
	printf("\n Introduce el piso :   ");
	scanf("%i", &socios[i].piso);
	fflush(stdin);
	
	FILE *lista_socios;
	lista_socios=fopen("Socios.txt","w");
	
		//Comprobante de que se cree archivo 
		if(ticket==NULL){
			printf("Error!!!");
		}
		else {
			printf("\n\n Usted se ha registrado con exito");
		}
//se genera un pin aleatorio para el cliente 		
	printf("Se generara aleatoriamente su codigo de cliente, lo que le permitira gozar de descuentos y ofertas Exclusivas:    ");
		
			
				srand(time(NULL));
				socios[i].pin=rand () % 1000+1;	
				printf("%i",socios[i].pin);
		

//introduce los datos en un archivo	
	fprintf(lista_socios,"\t\n%s","LISTA DE SOCIOS");
	fprintf(lista_socios, "\n\n%s", "SOCIO" );
	fprintf(lista_socios, "%i\n", i);
	fprintf(lista_socios,"\n\n %s %s ",socios[i].nombre, socios[i].apellido);
	fprintf(lista_socios,"\n%s","usuario: ");
	fprintf(lista_socios,"%s",socios[i].correo);
	fprintf(lista_socios,"\n%s","contraseña: ");
	fprintf(lista_socios,"%i",socios[i].password);
	fprintf(lista_socios,"\n%s","localidad: ");
	fprintf(lista_socios,"%s",socios[i].cpostal);	
	fprintf(lista_socios,"\n%s","Domicilio en la calle ");
	fprintf(lista_socios,"%s",socios[i].calle);
	fprintf(lista_socios,"%s","  y piso  ");
	fprintf(lista_socios,"%i",socios[i].piso);

	fprintf(lista_socios,"\n%s","PIN:");
	fprintf(lista_socios,"%i",socios[i].pin);
	
	
	fclose(lista_socios);
	printf("\n\nRegistro realizado con exito, disfrute ee las compras");
	
//problema

	fflush(stdin);
	printf("\n\nQuiere crear otro usario  ");
	scanf("%c",&rep2);
	fflush(stdin);


}while(rep2=='S'||rep2=='S');



	break;
	
//error	
default:
	printf("\n\n Error!!!!. vuelta al menu principal....");
	cont++;
	break;
}

}while(cont!=0);












}

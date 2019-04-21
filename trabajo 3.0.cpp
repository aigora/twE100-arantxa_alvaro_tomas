#include<stdio.h>
#include <time.h>
#include <stdlib.h>


//DECLARACION DE FUNCIONES

//Funcion de articulos 
void lista_articulos();//muestra los diferentes articulos que aparecen en la página web
struct lista_articulos 
{
	char tipos_articulos[20];
};

//Funcion sillas
void menu_subcategorias_sillas();//muestra los diferentes tipos de sillas
struct menu_silla{
	char tipo_silla[20];
	int precio;
};

//Funcion camas
void menu_subcategorias_camas();//muestra los diferentes tipos de camas

//Funcion mesas
void menu_subcategorias_mesas();//muestra los diferentes tipos de mesas
struct menu_mesas{
	char tipo_mesa[20];
	int precio;
};

//Funcion armarios
void menu_subcategorias_armario();//muestra los diferentes tipos de armarios
struct menu_armario{
	char tipo_armario[20];
	int precio;
};

//Funcion librerias
void menu_subcategorias_libreria();//muestra los diferentes tipos de librerias
struct menu_libreria{
	char tipo_libreria[20];
	int precio;
};

//Funcion sofas
void menu_subcategorias_sofa();//muestra los diferentes tipos de sofas
struct menu_sofa{
	char tipo_sofa[20];
	int precio;
};

//Funcion color
void menu_color();//muestra los colores con los que se pueden fabricar los muebles
struct lista_color{
	char tipo_color[20];
	
};

//Funcion de Socios
void registro_socios();
struct socio {
	char nombre[20];
	char apellido [20];
	char correo[30];
	int password;
	char ciudad[30];
	char calle [20]; 
	int piso;	
	int pin;
	
}socios[100];


//===========================================================================================================================================================================================================================================


//FUNCION MAIN

 int main(){
 
 
 //variables	
int menu;
char rep_final; 
int opcion;	
char rep;
int referencia;
int psilla;
do{
	
printf("\n\n Bienvenidos, que deseas hacer\n");
printf("\n 1. Comprar\n");
printf("\n 2. Devoluciones(sin programar)\n");
printf("\n 3. Registro de socios\n");
printf("\n\n Que desea hacer:  ");
scanf("%i",&menu);
fflush (stdin);
printf("\n========================================================================================================================\n");

switch (menu){

//Opcion de compra
case 1:	


	
//Variables 
int opcion;	
char rep;


		//Archivo
		FILE *ticket;		
		ticket=fopen("ticket.txt","w");

		//escritura
		fprintf(ticket, "\t%s\n", "TICKET");
		fprintf(ticket, "\n%s\n\n","Usted ha comprado  ");
		fclose(ticket);
do	{
	

		
	
lista_articulos();
printf("\n\n Que desea comprar ?:  ");
scanf("%d",&opcion);
fflush(stdin);

switch(opcion){
	
    case 1:
        printf("\n\nUsted ha seleccionado Sillas \n");
        printf("\nSeleccione el tipo de silla:\n\n ");
        menu_subcategorias_sillas();
        break;
    case 2:
        printf("Usted ha seleccionado Camas \n");
        menu_subcategorias_camas();
        break;
    case 3:
        printf("Usted ha seleccionado Mesas\n");
        printf("\nSeleccione el tipo de Mesa: \n");
        menu_subcategorias_mesas();

        break;
    case 4:
        printf("Usted ha seleccionado Armarios \n");
        printf("\nSeleccione el tipo de Armario: \n");
        menu_subcategorias_armario();
        
        break;
    case 5:
        printf("Usted ha seleccionado Librerias \n");
        printf("\nSeleccione el tipo de Libreria: \n");
        menu_subcategorias_libreria();
        break;
    case 6:
        printf("Usted ha seleccionado Sofas \n");
        printf("\nSeleccione el tipo de Sofa: \n");
        menu_subcategorias_sofa();
        break;

    default:

		printf("El articulo seleccionado no se encuentra en ninguna de nuestras categorias. \n");   
}
fflush(stdin);
printf("\n\n Desea comprar algo mas:  ");
scanf("%c", &rep);
fflush(stdin);
printf("\n\n========================================================================================================================\n\n");

}while(rep=='s'||rep=='S');
   // menu_color();





		ticket=fopen("ticket.txt","a");


		//Comprobante de que se cree archivo 
		if(ticket==NULL){
			printf("Error!!!");
		}
		else {
			printf("\n\n Copia del ticket creada");
		}
		
			srand(time(NULL));
			referencia=rand () % 10000000000+1;	
			fprintf(ticket, "\n\n Su codigo de factura es %i",referencia);
	fclose(ticket);
	
	break;
	 //Opcion de devolucion
case 2:	

//Opcion de socios
case 3:	

printf("\n\n Bienvenido al registro de socios \n\n");

registro_socios();

break;
}




}while(rep_final=='s'||rep_final=='S');
 
 
 

}
 
 
 
 
 //FUNCION ARTICULOS


    void lista_articulos(){//muestra los diferentes articulos que aparecen en la página web
	struct lista_articulos categorias[6]={		
    {"Sillas"},{"Camas"},{"Mesas"},{"Armarios"},{"Librerias"},{"Sofas"}};
    
    printf("\n\n Las categorias que puede encontrar las siguientes: \n");
    
    for(int i=0;i<6;i++)
    {
    printf("\n%d----%s ",i+1,categorias[i].tipos_articulos);
	}
}

//1 FUNCION ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- SILLAS
			
							//estructura	
void menu_subcategorias_sillas(){//muestra los diferentes tipos de sillas

							struct menu_silla sillas[4]={
						    {"Taburete",5},{"Silla de jardin",8},{"Silla de oficina",32},{"Silla de cocina",25}};
						 
						
							//variables	
							int opcion;
							int i;
							int particulo[4];
							int ptotal_sillas;
							int cantidad_sillas [4];
							int error;
							char rep;	
							//vector cantidad =0
							for (i=0;i<4;i++)
							cantidad_sillas[i]=0;
							error=0;
			do{	
			
			   for(int i=0;i<4;i++)
						    {
						    	printf("%d----%s (%i) \n",i+1,sillas[i].tipo_silla,sillas[i].precio);
							}
							
				printf("\n\n Que tipo de silla desea?:  ");
				scanf("%i",&opcion);
				fflush(stdin);

				
				switch(opcion){
					case 1:
						printf("\n\n De que color quiere las sillas");
						menu_color();
						
						printf("\n\nCuantos taburates deseas:  ");
					
						scanf("%d",&cantidad_sillas[0]);
						fflush(stdin);						
						break;
						
					case 2:
						printf("\n\n De que color quiere las sillas");
						menu_color();
						
						
						printf("\n\nCuantas sillas de jardin deseas: ");								
						scanf("%d",&cantidad_sillas[1]);
						fflush(stdin);
						break;
						
					case 3:
						printf("\n\n De que color quiere las sillas");
						menu_color();
									
					
						printf("\n\nCuantas sillas de oficina deseas? ");
						scanf("%d",&cantidad_sillas[2]);
						fflush(stdin);
						break;
						
					case 4:
						printf("\n\n De que color quiere las sillas");
						menu_color();
									
						printf("\n\nCuantas sillas de cocina deseas? ");
						scanf("%d",&cantidad_sillas[3]);
						fflush(stdin);
						break;
						
					default: 
								printf("\nError!!! No disponemos de este articulo.\n\n ¿ desea volver al menu principal? ");
								error++;
								scanf("%s",&rep);
								fflush(stdin);
									printf("\n\n========================================================================================================================\n\n");
								break;	
						}
					if(error==0){	
					fflush(stdin);
					printf("\n\n Desea comprar algo mas o realiza alguna modificacion (en este caso seleccione el articulo e indique la nueva cantidad) ");
					scanf("%c", &rep);
					fflush(stdin);	
				}
				}while(rep=='s'||rep=='S');
						
					
					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<4;i++){
						
						if(cantidad_sillas[i]!=0)	{
							particulo[i]=cantidad_sillas[i]*sillas[i].precio;
							printf("\n\n%i unidades de %s .......%i",cantidad_sillas[i],sillas[i].tipo_silla,particulo[i]);
							ptotal_sillas+=particulo[i];
						}		
					}
					
					printf("%i", ptotal_sillas);
					//return 	ptotal_sillas;		
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_sillas[i]!=0)	{
							particulo[i]=cantidad_sillas[i]*sillas[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s .......%i",cantidad_sillas[i],sillas[i].tipo_silla,particulo[i]);
							
						}		
					}
					
			fclose(ticket);			
			
				
}
		
		
		
		
		
//2 FUNCION ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- Camas			
	void menu_subcategorias_camas(){//muestra los diferentes tipos de camas
		
							//variables	
							int particulo;
							int ptotal_camas;
							int cantidad_camas ;
							char rep;	
							
							particulo=32;							
		
		
		do{
		
		printf("Cuantas camas deseas? \n");
		scanf("%d",&cantidad_camas) ;
		fflush(stdin);	
		
		
		printf("desea realizar alguna modificacion en la compra:  ");
		scanf("%c", &rep);
		fflush(stdin);			
	}while(rep=='s'||rep=='S');
	
					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					
						
						if(cantidad_camas!=0)	{
							ptotal_camas=	particulo*cantidad_camas;
							printf("\n\n%i unidades de camas .......%i",cantidad_camas,ptotal_camas);
							
							
					}
					
				//	printf("%i", ptotal_camas);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
				
						
						if(cantidad_camas!=0)	{
							
							fprintf(ticket,"\n\n%i unidades de camas .......%i",cantidad_camas,ptotal_camas);
							
						}		
					
					
			fclose(ticket);	

	}
	
	
	
	
	
	
//3 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Mesas

void menu_subcategorias_mesas(){//muestra los diferentes tipos de mesas

//Estructura
	struct menu_mesas mesas[3]={
    {"Mesa escritorio",30},{"Mesa de comedor",20},{"Mesita de noche",16}};


							
							//variables	
							int opcion;
							int i;
							int particulo[3];
							int ptotal_mesas;
							int cantidad_mesas [3];
							int error;
							char rep;	
							//vector cantidad =0
							for (i=0;i<3;i++)
							cantidad_mesas[i]=0;
							error=0;	
do{	
error=0;
	    for(int i=0;i<3;i++)
    {
    	printf("\n%d----%s (%i)",i+1,mesas[i].tipo_mesa, mesas[i].precio);
	}
	
	printf("\n Que desea comprar:  ");
	scanf("%d",&opcion);
	fflush(stdin);
	
	switch(opcion){
		case 1:
			printf("\n\n De que color quiere las mesitas");
			menu_color();
			
			printf("\nCuantos mesas de escritorio deseas? ");
			scanf("%d",&cantidad_mesas [0]);
			fflush(stdin);
			
			break;
			
		case 2:
			printf("\n\n De que color quiere las mesitas");
			menu_color();	
				
			printf("\nCuantas mesas de comedor deseas? ");			
			scanf("%d",&cantidad_mesas [1]);
			fflush(stdin);
			
			break;
			
		case 3:
			printf("\n\n De que color quiere las mesitas");
			menu_color();	
			
			printf("\n Cuantas mesitas de noche deseas? ");
			scanf("%d",&cantidad_mesas [2]);
			fflush(stdin);
			
			
	    default: 
	    
			printf("\nError!!! No disponemos de este articulo.\n\n ¿ desea volver al menu principal? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo mas o realiza alguna modificacion (en este caso seleccione el articulo e indique la nueva cantidad) ");
		scanf("%c", &rep);
		fflush(stdin);	
		}
}
}while(rep=='s'||rep=='S');

					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<4;i++){
						
						if(cantidad_mesas[i]!=0)	{
							particulo[i]=cantidad_mesas[i]*mesas[i].precio;
							printf("\n\n%i unidades de %s .......%i",cantidad_mesas[i],mesas[i].tipo_mesa,particulo[i]);
							ptotal_mesas+=particulo[i];
						}		
					}
					
					printf("%i", ptotal_mesas);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_mesas[i]!=0)	{
							particulo[i]=cantidad_mesas[i]*mesas[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s .......%i",cantidad_mesas[i],mesas[i].tipo_mesa,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}


//4 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Armario


    void menu_subcategorias_armario(){//muestra los diferentes tipos de armarios
    
	struct menu_armario armario[2]={
    {"Armario ropero",85},{"Armario cocina",68}};
    
    
    
							//variables	
							int opcion;
							int i;
							int particulo[2];
							int ptotal_armarios;
							int cantidad_armarios [2];
							int error;
							char rep;	
							//vector cantidad =0
							for (i=0;i<2;i++)
							cantidad_armarios[i]=0;
							error=0;    
  do{ 
  error=0; 
    for(int i=0;i<2;i++)
    {
    	printf("\n\n%d----%s(%i) ",i+1,armario[i].tipo_armario,armario[i].precio);
	}
	printf("\n\nQue deseas :   ");
	scanf("%d",&opcion);
	fflush(stdin);

	switch(opcion){
		case 1:
			printf("\n\n De que color quiere las mesitas");
			menu_color();	
						
			printf("Cuantos Armarios roperos deseas? \n");
			scanf("%d",&cantidad_armarios [0]);
			fflush(stdin);			
			break;
			
		case 2:
			printf("\n\n De que color quiere las mesitas");
			menu_color();	
						
			printf("Cuantos armarios de cocina deseas? \n");			
			scanf("%d",&cantidad_armarios [1]);
			fflush(stdin);
			
	    default: 
	    
			printf("\nError!!! No disponemos de este articulo.\n\n ¿ desea volver al menu principal? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo mas o realiza alguna modificacion (en este caso seleccione el articulo e indique la nueva cantidad) ");
		scanf("%c", &rep);
		fflush(stdin);	
		}		
			
			
				
}
}while(rep=='s'||rep=='S');

					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<2;i++){
						
						if(cantidad_armarios[i]!=0)	{
							particulo[i]=cantidad_armarios[i]*armario[i].precio;
							printf("\n\n%i unidades de %s .......%i",cantidad_armarios[i],armario[i].tipo_armario,particulo[i]);
							ptotal_armarios+=particulo[i];
						}		
					}
					
					printf("%i", ptotal_armarios);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_armarios[i]!=0)	{
							particulo[i]=cantidad_armarios[i]*armario[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s .......%i",cantidad_armarios[i],armario[i].tipo_armario,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}

//5 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------librerias
void menu_subcategorias_libreria(){//muestra los diferentes tipos de librerias

	struct menu_libreria libreria[2]={
    {"libreria-estanteria"},{"libreria billy"}};
    
							//variables	
							int opcion;
							int i;
							int particulo[2];
							int ptotal_librerias;
							int cantidad_librerias [2];
							int error;
							char rep;	
							//vector cantidad =0
							for (i=0;i<2;i++)
							cantidad_librerias[i]=0;
							error=0;  
 do{
 error=0;   
    for(int i=0;i<2;i++)
    {
    	printf("\n\n%d----%s(%i) ",i+1,libreria[i].tipo_libreria,libreria[i].precio);
	}
	printf("Que deseas :   ");
	scanf("%d",&opcion);
	fflush(stdin);
	
	switch(opcion){
		case 1:
			printf("\n\n De que color quiere las librerias");
			menu_color();	
						
			printf("Cuantos Armarios roperos deseas? \n");
			scanf("%d",&cantidad_librerias [0]);
			fflush(stdin);			
			break;
			
		case 2:
			printf("\n\n De que color quiere las librerias");
			menu_color();	
						
			printf("Cuantos armarios de cocina deseas? \n");			
			scanf("%d",&cantidad_librerias [1]);
			fflush(stdin);
			
	    default: 
	    
			printf("\nError!!! No disponemos de este articulo.\n\n ¿ desea volver al menu principal? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo mas o realiza alguna modificacion (en este caso seleccione el articulo e indique la nueva cantidad) ");
		scanf("%c", &rep);
		fflush(stdin);	
		}		
}
}while(rep=='s'||rep=='S');

					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<4;i++){
						
						if(cantidad_librerias[i]!=0)	{
							particulo[i]=cantidad_librerias[i]*libreria[i].precio;
							printf("\n\n%i unidades de %s .......%i",cantidad_librerias[i],libreria[i].tipo_libreria,particulo[i]);
							ptotal_librerias+=particulo[i];
						}		
					}
					
					printf("%i", ptotal_librerias);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_librerias[i]!=0)	{
							particulo[i]=cantidad_librerias[i]*libreria[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s .......%i",cantidad_librerias[i],libreria[i].tipo_libreria,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}

//6 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Sofa
void menu_subcategorias_sofa(){//muestra los diferentes tipos de sofas

	struct menu_sofa sofa[3]={
    {"sofa chester",59},{"sofa chaise longue",47},{"sofa cama",85}};
    
    
    							//variables	
							int opcion;
							int i;
							int particulo[3];
							int ptotal_sofas;
							int cantidad_sofas [3];
							int error;
							char rep;	
							//vector cantidad =0
							for (i=0;i<3;i++)
							cantidad_sofas[i]=0;
							error=0;
do{
error=0;							
    for(int i=0;i<3;i++)
    {
    	printf("\n%d----%s (%i)",i+1,sofa[i].tipo_sofa,sofa[i].precio);
	}
		printf("\n\n Que desea:  ");
		scanf("%d",&opcion);
		fflush(stdin);
		
	switch(opcion){
		case 1:
			printf("\n\n De que color quiere las sofas");
			menu_color();
			
			printf("\nCuantos mesas de escritorio deseas? ");
			scanf("%d",&cantidad_sofas [0]);
			fflush(stdin);
			
			break;
			
		case 2:
			printf("\n\n De que color quiere las sofas");
			menu_color();	
				
			printf("\nCuantas mesas de comedor deseas? ");			
			scanf("%d",&cantidad_sofas [1]);
			fflush(stdin);
			
			break;
			
		case 3:
			printf("\n\n De que color quiere las sofas");
			menu_color();	
			
			printf("\n Cuantas mesitas de noche deseas? ");
			scanf("%d",&cantidad_sofas [2]);
			fflush(stdin);
			
			
	    default: 
	    
			printf("\nError!!! No disponemos de este articulo.\n\n ¿ desea volver al menu principal? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo mas o realiza alguna modificacion (en este caso seleccione el articulo e indique la nueva cantidad) ");
		scanf("%c", &rep);
		fflush(stdin);	
		}
}
}while(rep=='s'||rep=='S');

					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<4;i++){
						
						if(cantidad_sofas[i]!=0)	{
							particulo[i]=cantidad_sofas[i]*sofa[i].precio;
							printf("\n\n%i unidades de %s .......%i",cantidad_sofas[i],sofa[i].tipo_sofa,particulo[i]);
							ptotal_sofas+=particulo[i];
						}		
					}
					
					printf("%i", ptotal_sofas);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_sofas[i]!=0)	{
							particulo[i]=cantidad_sofas[i]*sofa[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s .......%i",cantidad_sofas[i],sofa[i].tipo_sofa,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}



//FUNCION DEL COLOR ===========================================================================================================================================================================================================================

void menu_color(){//muestra los colores con los que se pueden fabricar los muebles
	struct lista_color color[3]={
	{"negro"},{"teka"},{"blanco"}};
	int opcion;
	char rep;
	
do{	
	rep='n';
	printf("Elija uno de los siguientes colores: \n");
	for(int i=0;i<3;i++)
	{
	printf("%d----%s \n",i+1,color[i].tipo_color);	
	}
	
	printf("\n\n Cual desea: ");
	scanf("%d",&opcion);
	fflush(stdin);
	switch(opcion){
		
		case 1:
		printf("Usted ha seleccionado el color negro \n");
		break;
		
		case 2:
		printf("Usted ha seleccionado el color teka \n");
		break;
		
		case 3:
		printf("Usted ha seleccionado el color blanco \n");
        break;
        
        default:
        printf("Este color no se encuentra disponible. Eligue uno de los que se le ofrecen \n");
 		fflush(stdin);
 		rep='s';
		printf("\n\n========================================================================================================================\n\n");
		break;	
       
}
}while(rep=='s'||rep=='S');
}
 

//FUNCION SOCIOS ===============================================================================================================================================================================================================================
 
 
 void registro_socios(){

//variables
int i;
char rep;
	
i=1;
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
	scanf("%30[^\n]",socios[i].ciudad);
	fflush(stdin);
	printf("\n Introduce la calle :   ");
	scanf("%30[^\n]", socios[i].calle);
	fflush(stdin);
	printf("\n Introduce el piso :   ");
	scanf("%i", &socios[i].piso);
	fflush(stdin);	
 	
 	
//Abrimos archivo

 		FILE *lista_socios;
	lista_socios=fopen("Socios.txt","a");
	
		//Comprobante de que se cree archivo 
		if(lista_socios==NULL){
			printf("Error!!!");
		}
		else {
			printf("\n\n Usted se ha registrado con exito");
		}
		
	printf("Se generara aleatoriamente su codigo de cliente, lo que le permitira gozar de descuentos y ofertas Exclusivas:    ");
		
			
				srand(time(NULL));
				socios[i].pin=rand () % 1000+1;	
				printf("%i",socios[i].pin);		
		
//introduce los datos en un archivo	
	fprintf(lista_socios,"\t\n%s","LISTA DE SOCIOS");
	fprintf(lista_socios, "\n\n%s", "SOCIO" );
	//fprintf(lista_socios, "%i\n", i);
	fprintf(lista_socios,"\n\n %s %s ",socios[i].nombre, socios[i].apellido);
	fprintf(lista_socios,"\n%s","usuario: ");
	fprintf(lista_socios,"%s",socios[i].correo);
	fprintf(lista_socios,"\n%s","contraseña: ");
	fprintf(lista_socios,"%i",socios[i].password);
	fprintf(lista_socios,"\n%s","localidad: ");
	fprintf(lista_socios,"%s",socios[i].ciudad);	
	fprintf(lista_socios,"\n%s","Domicilio en la calle ");
	fprintf(lista_socios,"%s",socios[i].calle);
	fprintf(lista_socios,"%s","  y piso  ");
	fprintf(lista_socios,"%i",socios[i].piso);

	fprintf(lista_socios,"\n%s","PIN:");
	fprintf(lista_socios,"%i",socios[i].pin);
	
	
	fclose(lista_socios);
	printf("\n\nRegistro realizado con exito, disfrute ee las compras");
	
	printf("\n\n Desea realizar otro registro de socio:  ");
	fflush(stdin);
	scanf("%c",&rep);
	fflush(stdin);
	i++;
	printf("========================================================================================");		
 	
}while(rep=='s'||rep=='S');
 	
 }
 
 
 
 

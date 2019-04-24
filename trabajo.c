#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

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
	float precio;
};

//Funcion camas
void menu_subcategorias_camas();//muestra los diferentes tipos de camas

//Funcion mesas
void menu_subcategorias_mesas();//muestra los diferentes tipos de mesas
struct menu_mesas{
	char tipo_mesa[20];
	float precio;
};

//Funcion armarios
void menu_subcategorias_armario();//muestra los diferentes tipos de armarios
struct menu_armario{
	char tipo_armario[20];
	float precio;
};

//Funcion librerias
void menu_subcategorias_libreria();//muestra los diferentes tipos de librerias
struct menu_libreria{
	char tipo_libreria[20];
	float precio;
};

//Funcion sofas
void menu_subcategorias_sofa();//muestra los diferentes tipos de sofas
struct menu_sofa{
	char tipo_sofa[20];
	float precio;
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
float dinero;
float num;
do{
	Beep(261.63, 250);
	Beep(261.63, 250);
	Beep(523.25, 250);
	Beep(392.00, 250);
	Beep(392.00, 250);
	Beep(349.23, 250);
	Beep(329.63, 250);
	Beep(261.63, 777);
printf("\n\tBIENVENIDO A");
printf("\n   la autarqu\241a independiente de tu casa\n");
printf("\t    ____   _____   _   _   _____\n\t   / _  | |  ___| | |_/ / |_   _|\n\t  / /_| | | |__   |    /    | |\n\t / ___  | | |___  | || |   _| |_\n\t/_/   |_| |_____| |_| |_| |_____|");
printf("\n\n\t\t\tTU TIENDA DE MUEBLES AL REV\220S");



printf("\n\n Diferentes servicios:\n");
printf("\n 1. Compra\n");
printf("\n 2. Devoluci\242n(sin programar)\n");
printf("\n 3. Registro de socios\n");
printf("\n\n Qu\202 desea hacer?:  ");
scanf("%i",&menu);
fflush (stdin);
printf("\n========================================================================================================================\n");

switch (menu){

//Opcion de compra
case 1:	
	do {
		
		printf(" De cu\240nto dinero dispone(\44)?:  ");
		scanf("%f", &dinero);
		fflush(stdin);
		num=dinero/dinero;
		if(dinero < 0){
			printf("En n\243meros rojos te ser\240 dif\241cil comprar nada.");
			}
	} while (num != 1);

	
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
printf("\n\n Qu\202 desea comprar?:  ");
scanf("%d",&opcion);
fflush(stdin);

switch(opcion){
	
    case 1:
        printf("Usted ha seleccionado Sillas \n");
        printf("\n\nSeleccione el tipo de silla: \n");
        menu_subcategorias_sillas();
        break;
    case 2:
        printf("Usted ha seleccionado Camas \n");
        menu_subcategorias_camas();
        break;
    case 3:
        printf("Usted ha seleccionado Mesas\n");
        printf("\n\nSeleccione el tipo de Mesa: \n");
        menu_subcategorias_mesas();

        break;
    case 4:
        printf("Usted ha seleccionado Armarios \n");
        printf("\n\nSeleccione el tipo de Armario: \n");
        menu_subcategorias_armario();
        
        break;
    case 5:
        printf("Usted ha seleccionado Librer\241as \n");
        printf("\n\nSeleccione el tipo de Librer\241a: \n");
        menu_subcategorias_libreria();
        break;
    case 6:
        printf("Usted ha seleccionado Sof\240s \n");
        printf("\n\nSeleccione el tipo de Sof\240: \n");
        menu_subcategorias_sofa();
        break;

    default:

		printf("El art\241culo seleccionado no se encuentra en ninguna de nuestras categor\241as. \n");   
}
fflush(stdin);
printf("\n\n Desea comprar algo m\240s?:  ");
scanf("%c", &rep);
fflush(stdin);
printf("\n\n========================================================================================================================\n\n");

}while(rep=='s'||rep=='S');
   // menu_color();

/*
FILE *ptotal;
ptotal=fopen("ptotal.txt","r");

float pfinal; //precio total
float pfinalsillas; //precio total sillas
scanf(ptotal, "%g", &pfinalsillas);
*/


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
			fprintf(ticket, "\n\n Su código de factura es %i",referencia);
	fclose(ticket);
	
	break;
	 //Opcion de devolucion
case 2:	

//Opcion de socios
case 3:	

printf("\n\n Bienvenido al registro de socios \n\n");

registro_socios();

break;

default:
	printf(" Por favor, elija un n\243mero de los planteados en pantalla.\n Se le est\240 redirigiendo al men\243 principal.");
	printf("\n\n========================================================================================================================\n");
rep_final='s';
	break;	

}





}while(rep_final=='s'||rep_final=='S');
 
 
 

}
 
 
 
 
 //FUNCION ARTICULOS


    void lista_articulos(){//muestra los diferentes articulos que aparecen en la página web
	struct lista_articulos categorias[6]={		
    {"Sillas"},{"Camas"},{"Mesas"},{"Armarios"},{"Librer\241as"},{"Sof\240s"}};
    
    printf("\n\n Las categor\241as que puede encontrar son las siguientes: \n");
    
    for(int i=0;i<6;i++)
    {
    printf("\n %d.   -%s ",i+1,categorias[i].tipos_articulos);
	}
}

//1 FUNCION ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- SILLAS
			
							//estructura	
void menu_subcategorias_sillas(){//muestra los diferentes tipos de sillas

							struct menu_silla sillas[4]={
						    {"Taburete",9},{"Silla de jard\241n",25},{"Silla de oficina",69.99},{"Silla de cocina",29.99}};
						 
						
							//variables	
							int opcion;
							int i;
							float particulo[4];
							float ptotal_sillas;
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
						    	printf("%d.   -%s (%g$) \n",i+1,sillas[i].tipo_silla,sillas[i].precio);
							}
							
				printf("\n\n Qu\202 tipo de silla desea?:  ");
				scanf("%i",&opcion);
				fflush(stdin);

				
				switch(opcion){
					case 1:
						printf("\n\n De qu\202 color desea las sillas?");
						menu_color();
						
						printf("\n\nCu\240ntos taburetes desea?: ");
					
						scanf("%d",&cantidad_sillas[0]);
						fflush(stdin);						
						break;
						
					case 2:
						printf("\n\n De qu\202 color desea las sillas?");
						menu_color();
						
						
						printf("\n\nCu\240ntas sillas de jard\241n desea?: ");								
						scanf("%d",&cantidad_sillas[1]);
						fflush(stdin);
						break;
						
					case 3:
						printf("\n\n De qu\202 color desea las sillas?");
						menu_color();
									
					
						printf("\n\nCu\240ntas sillas de oficina desea?: ");
						scanf("%d",&cantidad_sillas[2]);
						fflush(stdin);
						break;
						
					case 4:
						printf("\n\n De qu\202 color desea las sillas?");
						menu_color();
									
						printf("\n\nCu\240ntas sillas de cocina desea?: ");
						scanf("%d",&cantidad_sillas[3]);
						fflush(stdin);
						break;
						
					default: 
								printf("\nError!!! No disponemos de este art\241culo.\n\n \250Desea volver al men\243 de sillas? ");
								error++;
								scanf("%s",&rep);
								fflush(stdin);
									printf("\n\n========================================================================================================================\n\n");
								break;	
						}
					if(error==0){	
					fflush(stdin);
					printf("\n\n Desea comprar algo m\240s o realizar alguna modificaci\242n (en este caso seleccione el art\241culo e indique la nueva cantidad) ");
					scanf("%c", &rep);
					fflush(stdin);	
				}
				}while(rep=='s'||rep=='S');
						
					
					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<4;i++){
						
						if(cantidad_sillas[i]!=0)	{
							particulo[i]=cantidad_sillas[i]*sillas[i].precio;
							printf("\n\n%i unidades de %s ....... %g$",cantidad_sillas[i],sillas[i].tipo_silla,particulo[i]);
							ptotal_sillas+=particulo[i];
						}		
					}
					
					printf("\n\nSuma total de la compra: %g$", ptotal_sillas);
					//return 	ptotal_sillas;		
						
/*
FILE *ptotal;
ptotal=fopen("ptotal.txt","a");
fprint(ptotal, "%g",ptotal_sillas);
fclose(ptotal);
*/

			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_sillas[i]!=0)	{
							particulo[i]=cantidad_sillas[i]*sillas[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s ....... %g$",cantidad_sillas[i],sillas[i].tipo_silla,particulo[i]);
							
						}		
					}
					
			fclose(ticket);			
			
				
}
		
		
		
		
		
//2 FUNCION ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- Camas			
	void menu_subcategorias_camas(){//muestra los diferentes tipos de camas
		
							//variables	
							float particulo;
							float ptotal_camas;
							int cantidad_camas ;
							char rep;	
							
							particulo=139.99;							
		
		
		do{
		
		printf("\n\nCu\240ntas camas desea(139.99$ por unidad)? ");
		scanf("%d",&cantidad_camas) ;
		fflush(stdin);	
		
		
		printf("Desea realizar alguna modificaci\242n en la compra?:  ");
		scanf("%c", &rep);
		fflush(stdin);			
	}while(rep=='s'||rep=='S');
	
					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					
						
						if(cantidad_camas!=0)	{
							ptotal_camas=	particulo*cantidad_camas;
							printf("\n\n%i unidades de camas ....... %g$",cantidad_camas,ptotal_camas);
							
							
					}
					
				//	printf("%i", ptotal_camas);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
				
						
						if(cantidad_camas!=0)	{
							
							fprintf(ticket,"\n\n%i unidades de camas ....... %g$",cantidad_camas,ptotal_camas);
							
						}		
					
					
			fclose(ticket);	

	}
	
	
	
	
	
	
//3 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Mesas

void menu_subcategorias_mesas(){//muestra los diferentes tipos de mesas

//Estructura
	struct menu_mesas mesas[3]={
    {"Mesa de escritorio",95},{"Mesa de comedor",239.99},{"Mesita de noche",49.99}};


							
							//variables	
							int opcion;
							int i;
							float particulo[3];
							float ptotal_mesas;
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
    	printf("\n%d.   -%s (%g)",i+1,mesas[i].tipo_mesa, mesas[i].precio);
	}
	
	printf("\n\n Qu\202 desea comprar?:  ");
	scanf("%d",&opcion);
	fflush(stdin);
	
	switch(opcion){
		case 1:
			printf("\n\n De qu\202 color desea las mesitas?");
			menu_color();
			
			printf("\nCu\240ntos mesas de escritorio desea? ");
			scanf("%d",&cantidad_mesas [0]);
			fflush(stdin);
			
			break;
			
		case 2:
			printf("\n\n De qu\202 color desea las mesitas?");
			menu_color();	
				
			printf("\nCu\240ntas mesas de comedor desea? ");			
			scanf("%d",&cantidad_mesas [1]);
			fflush(stdin);
			
			break;
			
		case 3:
			printf("\n\n De qu\202 color desea las mesitas?");
			menu_color();	
			
			printf("\n Cu\240ntas mesitas de noche desea? ");
			scanf("%d",&cantidad_mesas [2]);
			fflush(stdin);
			
			
	    default: 
	    
			printf("\nError!!! No disponemos de este art\241culo.\n\n \250Desea volver al men\243 de mesas? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo m\240s o realizar alguna modificaci\242n (en este caso seleccione el art\241culo e indique la nueva cantidad) ");
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
							printf("\n\n%i unidades de %s ....... %g$",cantidad_mesas[i],mesas[i].tipo_mesa,particulo[i]);
							ptotal_mesas+=particulo[i];
						}		
					}
					
					printf("\n\nSuma total de la compra: %g$", ptotal_mesas);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<3;i++){
						
						if(cantidad_mesas[i]!=0)	{
							particulo[i]=cantidad_mesas[i]*mesas[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s ....... %g$",cantidad_mesas[i],mesas[i].tipo_mesa,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}


//4 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Armario


    void menu_subcategorias_armario(){//muestra los diferentes tipos de armarios
    
	struct menu_armario armario[2]={
    {"Armario ropero",159.99},{"Armario de cocina",89.99}};
    
    
    
							//variables	
							int opcion;
							int i;
							float particulo[2];
							float ptotal_armarios;
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
    	printf("%d.   -%s(%g$)\n",i+1,armario[i].tipo_armario,armario[i].precio);
	}
	printf("\nQu\202 desea?:   ");
	scanf("%d",&opcion);
	fflush(stdin);

	switch(opcion){
		case 1:
			printf("\n\n De qu\202 color desea el armario?");
			menu_color();	
						
			printf("\nCu\240ntos armarios roperos desea? ");
			scanf("%d",&cantidad_armarios [0]);
			fflush(stdin);			
			break;
			
		case 2:
			printf("\n\n De qu\202 color desea el armario?");
			menu_color();	
						
			printf("\nCu\240ntos armarios de cocina desea? ");			
			scanf("%d",&cantidad_armarios [1]);
			fflush(stdin);
			
	    default: 
	    
			printf("\nError!!! No disponemos de este art\241culo.\n\n \250Desea volver al men\243 de armarios? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo m\240s o realizar alguna modificaci\242n (en este caso seleccione el art\241culo e indique la nueva cantidad) ");
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
							printf("\n\n%i unidades de %s ....... %g$",cantidad_armarios[i],armario[i].tipo_armario,particulo[i]);
							ptotal_armarios+=particulo[i];
						}		
					}
					
					printf("\n\nSuma total de la compra: %g$", ptotal_armarios);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_armarios[i]!=0)	{
							particulo[i]=cantidad_armarios[i]*armario[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s ....... %g$",cantidad_armarios[i],armario[i].tipo_armario,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}

//5 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------librerias
void menu_subcategorias_libreria(){//muestra los diferentes tipos de librerias

	struct menu_libreria libreria[2]={
    {"Librer\241-estanter\241a", 79.99},{"Librer\241a Billy", 59.99}};
    
							//variables	
							int opcion;
							int i;
							float particulo[2];
							float ptotal_librerias;
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
    	printf("\n%d.   -%s(%g$)",i+1,libreria[i].tipo_libreria,libreria[i].precio);
	}
	printf("\n\nQu\202 desea?:   ");
	scanf("%d",&opcion);
	fflush(stdin);
	
	switch(opcion){
		case 1:
			printf("\n\n De qu\202 color desea las librer\241as?");
			menu_color();	
						
			printf("Cu\240ntas librer\241as-estante\241as desea? ");
			scanf("%d",&cantidad_librerias [0]);
			fflush(stdin);			
			break;
			
		case 2:
			printf("\n\n De qu\202 color desea las librer\241as?");
			menu_color();	
						
			printf("Cu\240ntas librer\241as Billy desea? ");			
			scanf("%d",&cantidad_librerias [1]);
			fflush(stdin);
			
	    default: 
	    
			printf("\nError!!! No disponemos de este art\241culo.\n\n \250Desea volver al men\243 de librer\421as? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo m\240s o realizar alguna modificaci\242n (en este caso seleccione el art\241culo e indique la nueva cantidad) ");
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
							printf("\n\n%i unidades de %s ....... %g$",cantidad_librerias[i],libreria[i].tipo_libreria,particulo[i]);
							ptotal_librerias+=particulo[i];
						}		
					}
					
					printf("\n\nSuma total de la compra: %g$", ptotal_librerias);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_librerias[i]!=0)	{
							particulo[i]=cantidad_librerias[i]*libreria[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s ....... %g$",cantidad_librerias[i],libreria[i].tipo_libreria,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}

//6 Funcion---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Sofa
void menu_subcategorias_sofa(){//muestra los diferentes tipos de sofas

	struct menu_sofa sofa[3]={
    {"Sof\240 Chester",399.99},{"Sof\240 Longue",279.99},{"Sof\240 cama",345}};
    
    
    							//variables	
							int opcion;
							int i;
							float particulo[3];
							float ptotal_sofas;
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
    	printf("\n%d.   -%s (%g$)",i+1,sofa[i].tipo_sofa,sofa[i].precio);
	}
		printf("\n\n Qu\202 desea?:  ");
		scanf("%d",&opcion);
		fflush(stdin);
		
	switch(opcion){
		case 1:
			printf("\n\n De qu\202 color desea las sof\240s?");
			menu_color();
			
			printf("\nCu\240ntos sof\240s Chester desea? ");
			scanf("%d",&cantidad_sofas [0]);
			fflush(stdin);
			
			break;
			
		case 2:
			printf("\n\n De qu\202 color desea los sof\240s?");
			menu_color();	
				
			printf("\nCu\240ntos sof\240s Lounge desea? ");			
			scanf("%d",&cantidad_sofas [1]);
			fflush(stdin);
			
			break;
			
		case 3:
			printf("\n\n De qu\202 color desea los sof\240s");
			menu_color();	
			
			printf("\n Cu\240ntos sof\240s cama desea? ");
			scanf("%d",&cantidad_sofas [2]);
			fflush(stdin);
			
			
	    default: 
	    
			printf("\nError!!! No disponemos de este art\241culo.\n\n \250Desea volver al men\243 de sof\420s? ");
			error++;
			scanf("%s",&rep);
			fflush(stdin);
			printf("\n\n========================================================================================================================\n\n");
			break;	

		if(error==0){	
		fflush(stdin);
		printf("\n\n Desea comprar algo m\240s o realizar alguna modificaci\242n (en este caso seleccione el art\241culo e indique la nueva cantidad) ");
		scanf("%c", &rep);
		fflush(stdin);	
		}
}
}while(rep=='s'||rep=='S');

					printf("\n========================================================================================================================\n");
					printf("\n\nUsted ha comprado:   ");
					for (i=0;i<3;i++){
						
						if(cantidad_sofas[i]!=0)	{
							particulo[i]=cantidad_sofas[i]*sofa[i].precio;
							printf("\n\n%i unidades de %s ....... %g$",cantidad_sofas[i],sofa[i].tipo_sofa,particulo[i]);
							ptotal_sofas+=particulo[i];
						}		
					}
					
					printf("\n\nSuma total de la compra: %g$", ptotal_sofas);			
						
			//Archivo
			
			FILE *ticket;
			ticket=fopen("ticket.txt","a");
			
					for (i=0;i<4;i++){
						
						if(cantidad_sofas[i]!=0)	{
							particulo[i]=cantidad_sofas[i]*sofa[i].precio;
							fprintf(ticket,"\n\n%i unidades de %s ....... %g$",cantidad_sofas[i],sofa[i].tipo_sofa,particulo[i]);
							
						}		
					}
					
			fclose(ticket);	
}



//FUNCION DEL COLOR ===========================================================================================================================================================================================================================

void menu_color(){//muestra los colores con los que se pueden fabricar los muebles
	struct lista_color color[3]={
	{"Negro"},{"Teka"},{"Blanco"}};
	int opcion;
	char rep;
	
do{	
	rep='n';
	printf("\nElija uno de los siguientes colores: \n");
	for(int i=0;i<3;i++)
	{
	printf("%d-   %s \n",i+1,color[i].tipo_color);	
	}
	
	printf("\n\n Cu\240l desea?: ");
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
        printf("Este color no se encuentra disponible. Elija uno de los ofrecidos \n");
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
	printf("\nIntroduzca su usuario (no n\243meros):   ");
	scanf("%30[^\n]", socios[i].correo);
	fflush(stdin);
	printf("\nIntroduzca su contraseña (solo n\243meros):   ");
	scanf("%i", &socios[i].password);
	fflush(stdin);
	printf("\nIntroduzca su localidad:   ");
	scanf("%30[^\n]",socios[i].ciudad);
	fflush(stdin);
	printf("\nIntroduzca la calle:   ");
	scanf("%30[^\n]", socios[i].calle);
	fflush(stdin);
	printf("\nIntroduzca el piso:   ");
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
			printf("\n\nUsted se ha registrado con \202xito");
		}
		
	printf("\nSe generar\240 aleatoriamente su c\242digo de cliente, lo que le permitir\240 gozar de descuentos y ofertas exclusivas:    ");
		
			
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
	printf("\n\nRegistro realizado con \202xito, disfrute de las compras");
	
	printf("\n\nDesea realizar otro registro de socio?:  ");
	fflush(stdin);
	scanf("%c",&rep);
	fflush(stdin);
	i++;
	printf("========================================================================================");		
 	
}while(rep=='s'||rep=='S');
 	
}

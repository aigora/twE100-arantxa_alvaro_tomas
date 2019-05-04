#include <stdio.h>
//Las estructuras se declaran fuera de la funcion main. No se para que has declarado esto si en ningun momento lo usas
//	struct articulos sillas[4]={
//		{"1"},{"2"},{"3"},{"4"}};

//void cantidad_articulos_almacen();
typedef struct {
	int cantidad;
}sillas;
typedef struct {
	int cantidad;
}camas;
typedef struct {
	int cantidad;
}mesas;
typedef struct {
	int cantidad;
}armarios;
typedef struct {
	int cantidad;
}librerias;
typedef struct {
	int cantidad;
}sofas;


int main()
{
	int rep;
do{

//esto correcto aunque podrias usar la funcion que has usado arriba 
	int almacen;
	printf("\n 1. sillas");
	printf("\n 2. camas");
	printf("\n 3. mesas");
	printf("\n 4. armarios");
	printf("\n 5. librerias");
	printf("\n 6. sofas");
	printf("\n\n Qu\202 almac\202n desea abrir?:  ");
	scanf("%d",&almacen);
	fflush(stdin);
	
	switch(almacen){
		
		case 1: //sillas
		int opcion;
		sillas c1, c2, c3, c4; //cantidad1(taburetes), cantidad2(jardín),...
		
		printf("\n\nHa elegido sillas, escoja el tipo:	");
			printf("\n 1. taburetes");
			printf("\n 2. silla de jardín");
			printf("\n 3. silla de oficina");
			printf("\n 4. silla de cocina");
			printf("\n\n Qu\202 almac\202n desea abrir?:	");
			scanf("%i",&opcion);
			fflush(stdin);
			

			switch(opcion){
				case 1: //taburetes
				printf("\n\n Cuantos taburetes hay?:	");
				scanf("%d", &c1.cantidad);
				fflush(stdin);
				
				FILE *almacen_taburetes;
				almacen_taburetes=fopen("almacen_taburetes.txt","w");
				fprintf(almacen_taburetes, "%d", c1.cantidad);
				fclose(almacen_taburetes);
				break;
				
				case 2: //sillas de jardín
				printf("\n\n Cuantas sillas de jardin hay?:	");
				scanf("%d", &c2.cantidad);
				fflush(stdin);
				
				FILE *almacen_sjardin;
				almacen_sjardin=fopen("almacen_sjardin.txt","w");
				fprintf(almacen_sjardin, "%d", c2.cantidad);
				fclose(almacen_sjardin);
				break;
				
				case 3: //sillas de oficina
				printf("\n\n Cuantas sillas de oficina hay?:	");
				scanf("%d", &c3.cantidad);
				fflush(stdin);
				
				FILE *almacen_soficina;
				almacen_soficina=fopen("almacen_soficina.txt","w");
				fprintf(almacen_soficina, "%d", c3.cantidad);
				fclose(almacen_soficina);
				break;
				
				case 4: //sillas de cocina
				printf("\n\n Cuantas sillas de jardin hay?:	");
				scanf("%d", &c4.cantidad);
				fflush(stdin);
				
				FILE *almacen_scocina;
				almacen_scocina=fopen("almacen_scocina.txt","w");
				fprintf(almacen_scocina, "%d", c4.cantidad);
				fclose(almacen_scocina);
				break;
				
				default:
				printf("\nno");
			} break;

		case 2: //camas
		camas ca1;
				printf("\n\n Cuantas camas hay?:	");
				scanf("%d", &ca1.cantidad);
				fflush(stdin);
				
				FILE *almacen_camas;
				almacen_camas=fopen("almacen_camas.txt","w");
				fprintf(almacen_camas, "%d", ca1.cantidad);
				fclose(almacen_camas);
				break;
				

		case 3: //mesas
		int opcion1;
		mesas m1, m2, m3, m4; //cantidad1(escritorio), cantidad2(comedor),...
		
		printf("\n\nHa elegido mesas, escoja el tipo:	");
			printf("\n 1. mesa de escritorio");
			printf("\n 2. mesa de comedor");
			printf("\n 3. mesita de noche");
			printf("\n\n Qu\202 almac\202n desea abrir?:	");
			scanf("%i",&opcion1);
			fflush(stdin);
			
			
			switch(opcion){
				case 1: //escritorio
				printf("\n\n Cuantas mesas de escritorio hay?:	");
				scanf("%d", &m1.cantidad);
				fflush(stdin);
				
				FILE *almacen_mescritorio;
				almacen_mescritorio=fopen("almacen_mescritorio.txt","w");
				fprintf(almacen_mescritorio, "%d", m1.cantidad);
				fclose(almacen_mescritorio);
				break;
				
				case 2: //comedor
				printf("\n\n Cuantas mesas de comedor hay?:	");
				scanf("%d", &m2.cantidad);
				fflush(stdin);
				
				FILE *almacen_mcomedor;
				almacen_mcomedor=fopen("almacen_mcomedor.txt","w");
				fprintf(almacen_mcomedor, "%d", m2.cantidad);
				fclose(almacen_mcomedor);
				break;
				
				case 3: //mesita noche
				printf("\n\n Cuantas mesitas de noche hay?:	");
				scanf("%d", &m3.cantidad);
				fflush(stdin);
				
				FILE *almacen_mnoche;
				almacen_mnoche=fopen("almacen_mnoche.txt","w");
				fprintf(almacen_mnoche, "%d", m3.cantidad);
				fclose(almacen_mnoche);
				break;
				
				default:
				printf("\nno");
			} break;

		case 4: //armarios
		int opcion2;
		armarios a1, a2; //cantidad1(armario ropero), cantidad2(armario de cocina)
		printf("\n\nHa elegido armarios, escoja el tipo:	");
			printf("\n 1. armario ropero");
			printf("\n 2. armario cocina");
			printf("\n\n Qu\202 almac\202n desea abrir?:	");
			scanf("%i",&opcion2);
			fflush(stdin);
			

			switch(opcion2){
				case 1: //armarios roperos
				printf("\n\n Cuantos armarios roperos hay?:	");
				scanf("%d", &a1.cantidad);
				fflush(stdin);
				
				FILE *almacen_ropero;
				almacen_ropero=fopen("almacen_ropero.txt","w");
				fprintf(almacen_ropero, "%d", a1.cantidad);
				fclose(almacen_ropero);
				break;
				
				case 2: //armario de cocina
				printf("\n\n Cuantos armarios de cocina hay?:	");
				scanf("%d", &a2.cantidad);
				fflush(stdin);
				
				FILE *almacen_acocina;
				almacen_acocina=fopen("almacen_acocina.txt","w");
				fprintf(almacen_acocina, "%d", a2.cantidad);
				fclose(almacen_acocina);
				break;
				
				default:
				printf("\nno");
			} break;
				
		case 5: //librerías
		int opcion3;
		librerias l1, l2; //cantidad1(libreria estantería), cantidad2(libreria Billy)
		printf("\n\nHa elegido librerias, escoja el tipo:	");
			printf("\n 1. libreria estanteria");
			printf("\n 2. libreria Billy");
			printf("\n\n Qu\202 almac\202n desea abrir?:	");
			scanf("%i",&opcion3);
			fflush(stdin);
			

			switch(opcion3){
				case 1: //libreria estantería
				printf("\n\n Cuantas librerias estanterias hay?:	");
				scanf("%d", &l1.cantidad);
				fflush(stdin);
				
				FILE *almacen_estanteria;
				almacen_estanteria=fopen("almacen_estanteria.txt","w");
				fprintf(almacen_estanteria, "%d", l1.cantidad);
				fclose(almacen_estanteria);
				break;
				
				case 2: //libreria Billy
				printf("\n\n Cuantas librerias Billy hay?:	");
				scanf("%d", &l2.cantidad);
				fflush(stdin);
				
				FILE *almacen_billy;
				almacen_billy=fopen("almacen_billy.txt","w");
				fprintf(almacen_billy, "%d", l2.cantidad);
				fclose(almacen_billy);
				break;
				
				default:
				printf("\nno");
			} break;
			
		case 6: //sofás
		int opcion4;
		sofas s1, s2, s3; //cantidad1(sofa chester), cantidad2(sofa longue),...
		
		printf("\n\nHa elegido sofas, escoja el tipo:	");
			printf("\n 1. sofa chester");
			printf("\n 2. sofa lounge");
			printf("\n 3. sofa cama");
			printf("\n\n Qu\202 almac\202n desea abrir?:	");
			scanf("%i",&opcion4);
			fflush(stdin);
			
			
			switch(opcion){
				case 1: //sofá chester
				printf("\n\n Cuantos sofas chester hay?:	");
				scanf("%d", &s1.cantidad);
				fflush(stdin);
				
				FILE *almacen_sofachester;
				almacen_sofachester=fopen("almacen_sofachester.txt","w");
				fprintf(almacen_sofachester, "%d", s1.cantidad);
				fclose(almacen_sofachester);
				break;
				
				case 2: //sofá lounge
				printf("\n\n Cuantos sofás lounge hay?:	");
				scanf("%d", &s2.cantidad);
				fflush(stdin);
				
				FILE *almacen_sofalounge;
				almacen_sofalounge=fopen("almacen_sofalounge.txt","w");
				fprintf(almacen_sofalounge, "%d", s2.cantidad);
				fclose(almacen_sofalounge);
				break;
				
				case 3: //sofá cama
				printf("\n\n Cuantos sofas cama hay?:	");
				scanf("%d", &s3.cantidad);
				fflush(stdin);
				
				FILE *almacen_sofacama;
				almacen_sofacama=fopen("almacen_sofacama.txt","w");
				fprintf(almacen_sofacama, "%d", s3.cantidad);
				fclose(almacen_sofacama);
				break;
				
				default:
				printf("\nno");
			} break;
		
    	default:

		printf("\nno");   
		
	}
	
		fflush(stdin);
		printf("\n\n Quieres volver a introducir stock(s o S)?		");
		scanf("%c", &rep);
		fflush(stdin);	
		}while(rep=='s'||rep=='S');		
}



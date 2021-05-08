#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

void metodo1_MAS();
void metodo2_MAS();
void metodo3_MAS();
void metodo4_MAS();
void metodo1_MAE();
void metodo2_MAE();
void metodo3_MAE();
void metodo4_MAE();
void tipo_muestreo();
void MAS();
void MAE();

int main(){
	int opcion;
	printf("\n\t\t\tMenu\n\n\tSeleccione el tipo de muestreo que desea utilizar:\n\n\t1- Muestreo Aleatorio Simple\n\t2- Muestreo Aleatorio Estratificado\n\n");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:	system("cls");
				MAS();
				break;
		case 2:	system("cls");
				MAE();
				break;
	}
	return;
}

void MAS(){
	int opcion,x;
	char checar[50];
	do{
		x=0;
		printf("Selecciona el tipo de estimacion a trabajar:\n1- Estimacion de una media miu apartir de una M.A.S\n2- Estimacion total poblacional t a partir de una M.A.S\n3- Estimacion de una proporcion poblacional p a partir de una M.A.S\n4- Seleccion del tama%co de muestra\n\n",164);
		scanf("%d",&opcion);
		fflush(stdin);
		system("cls");
		if(opcion!=1&&opcion!=2&&opcion!=3&&opcion!=4){
			printf("\nERROR: por favor seleccione 1 de las 4 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	switch(opcion){
		case 1:	metodo1_MAS();
				break;
		case 2:	metodo2_MAS();
				break;
		case 3: metodo3_MAS();
				break;
		case 4:	metodo4_MAS();
				break;
	}
}

void metodo1_MAS(){
	int siono,z,j,x,w,n,N,sionov,sino;
	char checar[50];
	float media,elemuestra[50],suma,Var,Varm,B,ME,Linf,Lsup,s2;
	do{
		x=0;
		printf("Ya se cuenta con una media?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		fflush(stdin);
		system("cls");
		if(siono!=1&&siono!=2){
			printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	switch(siono){
		case 1:	do{
					x=0;
					printf("Introduzca el valor correspondiente a una media miu:\n\n");
					scanf("%s",checar);
					system("cls");
					z=strlen(checar);
					fflush(stdin);
					for(j=0;j<z;j++){
						if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
							x=1;
						}
					}
					if(x==0){
						if(checar[0]=='0'&&checar[1]!='.'){
							printf("\nERROR: la media no puede ser 0, favor de volver a proporcionarla\n\n");
							x=1;
						}else{
							media=atof(checar);
						}
					}else{
						printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
					}
				}while(x==1);
				break;
		case 2:	do{
					x=0;
					printf("Introduzca el tamaño de la poblacion muestral (n):\n\n");
					scanf("%s",checar);
					system("cls");
					z=strlen(checar);
					fflush(stdin);
					for(j=0;j<z;j++){
						if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
							x=1;
						}
					}
					if(x==0){
						if(checar[0]=='0'){
							printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
							x=1;
						}else{
							n=atoi(checar);
						}
					}else{
						printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
					}
				}while(x==1);
				suma=0;
				for(w=0;w<=(n-1);w++){
					do{
						x=0;
						printf("Introduzca el valor del elemento y%d:\n\n",w+1);
						scanf("%s",checar);
						system("cls");
						z=strlen(checar);
						fflush(stdin);
						for(j=0;j<z;j++){
							if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
								x=1;
							}
						}
						if(x==1){
							printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
						}else{
							elemuestra[w]=atof(checar);
							suma=suma+atof(checar);
						}
					}while(x==1);
				}
				media=suma/n;
				printf("La media calculada es: %g\n\n",media);
				system("pause");
				break;
	}
	if(siono==1){
		do{
			x=0;
			printf("Introduzca el tamaño de la poblacion muestral (n):\n\n");
			scanf("%s",checar);
			system("cls");
			z=strlen(checar);
			fflush(stdin);
			for(j=0;j<z;j++){
				if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
					x=1;
				}
			}
			if(x==0){
				if(checar[0]=='0'){
					printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
					x=1;
				}else{
					n=atoi(checar);
				}
			}else{
				printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
			}
		}while(x==1);
	}
	do{
		x=0;
		printf("Introduzca el tamaño de la poblacion total (N):\n\n");
		scanf("%s",checar);
		system("cls");
		z=strlen(checar);
		fflush(stdin);
		for(j=0;j<z;j++){
			if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
				x=1;
			}
		}
		if(x==0){
			if(checar[0]=='0'){
				printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
				x=1;
			}else{
				N=atoi(checar);
			}
		}else{
			printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
		}
		if(N<n){
			printf("\nERROR: La poblacion total (N) no puede ser menor a la poblacion muestral (n)\n\n");
			x=1;
		}
	}while(x==1);
	do{
		x=0;
		printf("Ya se cuenta con una varianza poblacional?\n1- si\n2- no\n\n");
		scanf("%d",&sionov);
		fflush(stdin);
		system("cls");
		if(sionov!=1&&sionov!=2){
			printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	switch(sionov){
		case 1:	do{
					x=0;
					printf("Introduzca el valor correspondiente a una varianza:\n\n");
					scanf("%s",checar);
					system("cls");
					z=strlen(checar);
					fflush(stdin);
					for(j=0;j<z;j++){
						if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
							x=1;
						}
					}
					if(x==0){
						Var=atof(checar);
					}else{
						printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
					}
				}while(x==1);
				Varm=(Var*(N-n))/(n*(N-1));
				B=2*sqrt(Varm);
				ME=(B/media)*100;
				Linf=media-B;
				Lsup=media+B;
				system("cls");
				printf("Los datos obtenidos son:\n\nmedia: %f\nVarianza poblacional: %f\nVarianza del estimador: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",media,Var,Varm,B,ME,Linf,Lsup);
				system("pause");
				break;
		case 2:	if(siono==1){
					do{
						x=0;
						printf("Ya se cuenta con una varianza muestral?\n1- si\n2- no\n\n");
						scanf("%d",&sino);
						fflush(stdin);
						system("cls");
						if(sino!=1&&sino!=2){
							printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
							x=1;
						}
					}while(x==1);
					if(sino==1){
						do{
							x=0;
							printf("Introduzca el valor correspondiente a la varianza muestral:\n\n");
							scanf("%s",checar);
							system("cls");
							z=strlen(checar);
							fflush(stdin);
							for(j=0;j<z;j++){
								if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
									x=1;
								}
							}
							if(x==0){
								s2=atof(checar);
							}else{
								printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
							}
						}while(x==1);
					}else{
						suma=0;
						for(w=0;w<=(n-1);w++){
							do{
								x=0;
								printf("Introduzca el valor del elemento y%d:\n\n",w+1);
								scanf("%s",checar);
								system("cls");
								z=strlen(checar);
								fflush(stdin);
								for(j=0;j<z;j++){
									if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
										x=1;
									}
								}
								if(x==1){
									printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
								}else{
									elemuestra[w]=atof(checar);
									suma=suma+((elemuestra[w]-media)*(elemuestra[w]-media));
								}
							}while(x==1);
						}
						s2=suma/(n-1);
					}
				}else{
					suma=0;
					for(j=0;j<=(n-1);j++){
						suma=suma+((elemuestra[j]-media)*(elemuestra[j]-media));
					}
					s2=suma/(n-1);
				}
				Varm=(s2*(N-n))/(n*N);
				B=2*sqrt(Varm);
				ME=(B/media)*100;
				Linf=media-B;
				Lsup=media+B;
				system("cls");
				printf("Los datos obtenidos son:\n\nmedia: %f\nVarianza muestral: %f\nVarianza del estimador: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",media,s2,Varm,B,ME,Linf,Lsup);
				system("pause");
				break;
	}
	exit(0);
}

void metodo2_MAS(){
	int x,siono,z,j,n,N,w,sipaso=0,sionov,sino;
	float t,media,elemuestra[50],suma,Var,Varm,B,ME,Linf,Lsup,s2;
	char checar[50];
	do{
		x=0;
		printf("Introduzca el tamaño de la poblacion muestral (n):\n\n");
		scanf("%s",checar);
		system("cls");
		z=strlen(checar);
		fflush(stdin);
		for(j=0;j<z;j++){
			if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
				x=1;
			}
		}
		if(x==0){
			if(checar[0]=='0'){
				printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
				x=1;
			}else{
				n=atoi(checar);
			}
		}else{
			printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
		}
	}while(x==1);
	do{
		x=0;
		printf("Introduzca el tamaño de la poblacion total (N):\n\n");
		scanf("%s",checar);
		system("cls");
		z=strlen(checar);
		fflush(stdin);
		for(j=0;j<z;j++){
			if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
				x=1;
			}
		}
		if(x==0){
			if(checar[0]=='0'){
				printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
				x=1;
			}else{
				N=atoi(checar);
			}
		}else{
			printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
		}
		if(N<n){
			printf("\nERROR: La poblacion total (N) no puede ser menor a la poblacion muestral (n)\n\n");
			x=1;
		}
	}while(x==1);
	do{
		x=0;
		printf("Ya se cuenta con un estimador t?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		fflush(stdin);
		system("cls");
		if(siono!=1&&siono!=2){
			printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	if(siono==1){
		do{
			x=0;
			printf("Introduzca el valor correspondiente al estimador t:\n\n");
			scanf("%s",checar);
			system("cls");
			z=strlen(checar);
			fflush(stdin);
			for(j=0;j<z;j++){
				if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
					x=1;
				}
			}
			if(x==0){
				t=atof(checar);
			}else{
				printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
			}
		}while(x==1);	
	}else{
		do{
			x=0;
			printf("Ya se cuenta con una media?\n1- si\n2- no\n\n");
			scanf("%d",&siono);
			fflush(stdin);
			system("cls");
			if(siono!=1&&siono!=2){
				printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
				x=1;
			}
		}while(x==1);
		switch(siono){
			case 1:	do{
						x=0;
						printf("Introduzca el valor correspondiente a una media miu:\n\n");
						scanf("%s",checar);
						system("cls");
						z=strlen(checar);
						fflush(stdin);
						for(j=0;j<z;j++){
							if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
								x=1;
							}
						}
						if(x==0){
							if(checar[0]=='0'&&checar[1]!='.'){
								printf("\nERROR: la media no puede ser 0, favor de volver a proporcionarla\n\n");
								x=1;
							}else{
								media=atof(checar);
							}
						}else{
							printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
						}
					}while(x==1);
					break;
			case 2: for(w=0;w<=(n-1);w++){
						do{
							x=0;
							printf("Introduzca el valor del elemento y%d:\n\n",w+1);
							scanf("%s",checar);
							system("cls");
							z=strlen(checar);
							fflush(stdin);
							for(j=0;j<z;j++){
								if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
									x=1;
								}
							}
							if(x==1){
								printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
							}else{
								elemuestra[w]=atof(checar);
								suma=suma+atof(checar);
							}
						}while(x==1);
					}
					media=suma/n;
					sipaso=1;
					printf("La media calculada es: %g\n\n",media);
					system("pause");
					break;
		}
		t=N*media;
	}
	do{
		x=0;
		printf("Ya se cuenta con una varianza poblacional?\n1- si\n2- no\n\n");
		scanf("%d",&sionov);
		fflush(stdin);
		system("cls");
		if(sionov!=1&&sionov!=2){
			printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	switch(sionov){
		case 1:	do{
					x=0;
					printf("Introduzca el valor correspondiente a una varianza:\n\n");
					scanf("%s",checar);
					system("cls");
					z=strlen(checar);
					fflush(stdin);
					for(j=0;j<z;j++){
						if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
							x=1;
						}
					}
					if(x==0){
						Var=atof(checar);
					}else{
						printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
					}
				}while(x==1);
				Varm=((N*N)*Var*(N-n))/(n*(N-1));
				B=2*sqrt(Varm);
				ME=(B/t)*100;
				Linf=t-B;
				Lsup=t+B;
				system("cls");
				printf("Los datos obtenidos son:\n\nmedia: %f\nVarianza poblacional: %f\nEstimador t: %f\nVarianza del estimador: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",media,Var,t,Varm,B,ME,Linf,Lsup);
				system("pause");
				break;
		case 2:	if(sipaso==0){
					do{
						x=0;
						printf("Ya se cuenta con una varianza muestral?\n1- si\n2- no\n\n");
						scanf("%d",&sino);
						fflush(stdin);
						system("cls");
						if(sino!=1&&sino!=2){
							printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
							x=1;
						}
					}while(x==1);
					if(sino==1){
						do{
							x=0;
							printf("Introduzca el valor correspondiente a la varianza muestral:\n\n");
							scanf("%s",checar);
							system("cls");
							z=strlen(checar);
							fflush(stdin);
							for(j=0;j<z;j++){
								if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
									x=1;
								}
							}
							if(x==0){
								s2=atof(checar);
							}else{
								printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
							}
						}while(x==1);
					}else{
						suma=0;
						for(w=0;w<=(n-1);w++){
							do{
								x=0;
								printf("Introduzca el valor del elemento y%d:\n\n",w+1);
								scanf("%s",checar);
								system("cls");
								z=strlen(checar);
								fflush(stdin);
								for(j=0;j<z;j++){
									if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
										x=1;
									}
								}
								if(x==1){
									printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
								}else{
									elemuestra[w]=atof(checar);
									suma=suma+((elemuestra[w]-media)*(elemuestra[w]-media));
								}
							}while(x==1);
						}
						s2=suma/(n-1);
					}
				}else{
					suma=0;
					for(j=0;j<=(n-1);j++){
						suma=suma+((elemuestra[j]-media)*(elemuestra[j]-media));
					}
					s2=suma/(n-1);
				}
				fflush(stdin);
				Varm=((N*s2)*(N-n))/n;
				B=2*sqrt(Varm);
				ME=(B/t)*100;
				Linf=t-B;
				Lsup=t+B;
				system("cls");
				printf("Los datos obtenidos son:\n\nmedia: %f\nVarianza muestral: %f\nEstimador t: %f\nVarianza del estimador: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",media,s2,t,Varm,B,ME,Linf,Lsup);
				system("pause");
				break;
	}
}

void metodo3_MAS(){
	int x,z,j,np,i,enes[50],sionov,N;
	float pes[50],Var,Varm,B,ME,Linf,Lsup;
	char checar[50];
	do{
		x=0;
		printf("Introduzca la cantidad de proporciones:\n\n");
		scanf("%s",checar);
		system("cls");
		z=strlen(checar);
		fflush(stdin);
		for(j=0;j<z;j++){
			if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
				x=1;
			}
		}
		if(x==0){
			if(checar[0]=='0'){
				printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
				x=1;
			}else{
				np=atoi(checar);
			}
		}else{
			printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
		}
	}while(x==1);
	fflush(stdin);
	for(i=0;i<np;i++){
		do{
			x=0;
			printf("Introduzca el valor correspondiente a la proporcion p%d:\n\n",i+1);
			scanf("%s",checar);
			system("cls");
			z=strlen(checar);
			fflush(stdin);
			for(j=0;j<z;j++){
				if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
					x=1;
				}
			}
			if(x==0){
				pes[i]=atof(checar);
			}else{
				printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
			}
		}while(x==1);
		do{
			x=0;
			printf("Introduzca el valor correspondiente al tamaño de la proporcion (n%d):\n\n",i+1);
			scanf("%s",checar);
			system("cls");
			z=strlen(checar);
			fflush(stdin);
			for(j=0;j<z;j++){
				if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
					x=1;
				}
			}
			if(x==0){
				enes[i]=atoi(checar);
			}else{
				printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
			}
		}while(x==1);
	}
	do{
		x=0;
		printf("Ya se cuenta con una varianza poblacional?\n1- si\n2- no\n\n");
		scanf("%d",&sionov);
		fflush(stdin);
		system("cls");
		if(sionov!=1&&sionov!=2){
			printf("\nERROR: por favor seleccione 1 de las 2 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	do{
		x=0;
		printf("Introduzca el tamaño de la poblacion total (N):\n\n");
		scanf("%s",checar);
		system("cls");
		z=strlen(checar);
		fflush(stdin);
		for(j=0;j<z;j++){
			if(checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
				x=1;
			}
		}
		if(x==0){
			if(checar[0]=='0'){
				printf("\nERROR: la cantidad no puede ser 0, favor de volver a proporcionarla\n\n");
				x=1;
			}else{
				N=atoi(checar);
			}
		}else{
			printf("\nERROR: Asegurese de introducir solo numeros enteros\n\n");
		}
	}while(x==1);
	switch(sionov){
		case 1:	do{
					x=0;
					printf("Introduzca el valor correspondiente a una varianza:\n\n");
					scanf("%s",checar);
					system("cls");
					z=strlen(checar);
					fflush(stdin);
					for(j=0;j<z;j++){
						if(checar[j] != '.'&&checar[j] != '0'&&checar[j] != '1'&&checar[j] != '2'&&checar[j] != '3'&&checar[j] != '4'&&checar[j] != '5'&&checar[j] != '6'&&checar[j] != '7'&&checar[j] != '8'&&checar[j] != '9') {
							x=1;
						}
					}
					if(x==0){
						Var=atof(checar);
					}else{
						printf("\nERROR: Asegurese de introducir solo numeros enteros o decimales\n\n");
					}
				}while(x==1);
				system("cls");
				for(i=0;i<np;i++){
					Varm=(Var*(N-enes[i]))/(enes[i]*(N-1));
					B=2*sqrt(Varm);
					ME=(B/pes[i])*100;
					Linf=pes[i]-B;
					Lsup=pes[i]+B;
					printf("Los datos obtenidos de la proporcion p%d son:\n\np: %f\nVarianza poblacional: %f\nVarianza del estimador: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",i+1,pes[i],Var,Varm,B,ME,Linf,Lsup);
				}
				system("pause");
				break;
		case 2:	for(i=0;i<np;i++){
					Varm=((pes[i]*(1-pes[i]))*(N-enes[i]))/((enes[i]-1)*N);
					B=2*sqrt(Varm);
					ME=(B/pes[i])*100;
					Linf=pes[i]-B;
					Lsup=pes[i]+B;
					printf("Los datos obtenidos de la proporcion p%d son:\n\np: %f\nVarianza del estimador: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",i+1,pes[i],Varm,B,ME,Linf,Lsup);
				}
				system("pause");
				break;
	}
}

void metodo4_MAS(){
	int opcion,N;
	float Var,D,B,n;
	printf("Indique para que caso se esta trabajando\n1- Para una estimacion miu\n2- Para una estimacion t\n3- Para una estimacion p\n\n");
	scanf("%d",&opcion);
	system("cls");
	printf("Introduzca el tama%co de la poblacion (N):\n",164);
	scanf("%d",&N);
	fflush(stdin);
	printf("Introduzca la varianza:\n");
	scanf("%f",&Var);
	printf("Introduzca la Cota de error (B):\n");
	scanf("%f",&B);
	if(opcion==1||opcion==3){
		D=(pow(B,2))/4;
	}else{
		D=(pow(B,2))/(4*pow(N,2));
	}
	n=(N*Var)/(((N-1)*D)+Var);
	system("cls");
	printf("El tama%co de la muestra es de\n\nn = %g",164,n);
	exit(0);
}

void MAE(){
	int opcion,x;
	char checar[50];
	do{
		x=0;
		printf("Selecciona el tipo de estimacion a trabajar:\n1- Estimacion de una media miu apartir de una M.A.E\n2- Estimacion total poblacional t a partir de una M.A.E\n3- Estimacion de una proporcion poblacional p a partir de una M.A.E\n4- Seleccion del tama%co de muestra\n\n",164);
		scanf("%d",&opcion);
		fflush(stdin);
		system("cls");
		if(opcion!=1&&opcion!=2&&opcion!=3&&opcion!=4){
			printf("\nERROR: por favor seleccione 1 de las 4 opciones introduciendo el numero de dicha opcion\n\n");
			x=1;
		}
	}while(x==1);
	switch(opcion){
		case 1:	metodo1_MAE();
				break;
		case 2:	metodo2_MAE();
				break;
		case 3: metodo3_MAE();
				break;
		case 4: metodo4_MAE();
				break;
	}
}

void metodo1_MAE(){
	int L,N[99],n[99],Nt=0,nt=0,i,x,siono,j;
	float Nys=0,En=0,sum,media,O2[99],Var,B,ME,Linf,Lsup,s2[99],y[99],yes;
	printf("Introduzca el total de estratos a utilizar (L):\n\n");
	scanf("%d",&L);
	system("cls");
	for(i=0;i<L;i++){
		printf("Introduzca el tama%co de la poblacion del estrato %d (N%d):\n",164,i+1,i+1);
		scanf("%d",&N[i]);
		fflush(stdin);
		Nt=Nt+N[i];
		printf("Introduzca el tama%co de la muestra del estrato %d (n%d):\n",164,i+1,i+1);
		scanf("%d",&n[i]);
		nt=nt+n[i];
	}
	system("cls");
	do{	
		x=0;
		printf("Ya se cuenta con una media?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		switch(siono){
			case 1: printf("Introduzca el valor de la media");
					scanf("%f",&media);
					break;
			case 2: for(i=0;i<L;i++){
						printf("Introduzca el elemento y_barra%d:\n\n",i+1);
						scanf("%f",&y[i]);
						Nys=(N[i]*y[i])+Nys;
					}
					media=Nys/Nt;
					break;
			default: printf("ERROR: seleccione una opcion valida\n\n");
					 system("cls");
					 x=1;
					 break;
		}
	}while(x==1);
	system("cls");
	do{	
		x=0;
		printf("Se cuenta con varianzas poblacionales?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		switch(siono){
			case 1:	for(i=0;i<L;i++){
						printf("Introduzca la varianza%d:\n",i+1);
						scanf("%f",&O2[i]);
						En=((pow(N[i],2))*(((N[i]-n[i])*O2[i])/((N[i]-1)*n[i])))+En;
					}
					Var=En/(pow(Nt,2));
					B=2*sqrt(Var);
					ME=(B/media)*100;
					Linf=media-B;
					Lsup=media+B;
					system("cls");
					printf("Los datos obtenidos son:\n\nmedia: %f\nVarianza: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",media,Var,B,ME,Linf,Lsup);
					system("pause");
					break;
			case 2: printf("Se cuenta con varianzas muestrales?\n1- Si\n2- No\n\n");
					scanf("%d",&siono);	
					if(siono==1){
						for(i=0;i<L;i++){
							printf("Introduzca el valor de la varianza muestral s%d\n",i+1);
							scanf("%f",&s2[i]);
							En=((pow(N[i],2))*(((N[i]-n[i])*s2[i])/((N[i])*n[i])))+En;
						}
					}else{
						for(i=0;i<L;i++){
							sum=0;
							for(j=0;j<n[i];j++){
								printf("Introduzca el elemento y%d del estrato n%d\n",j+1,i+1);
								scanf("%f",&yes);
								sum=sum+(pow((yes-y[i]),2));
							}
							s2[i]=sum/(n[i]-1);
							En=((pow(N[i],2))*(((N[i]-n[i])*s2[i])/((N[i])*n[i])))+En;
						}
					}
					Var=En/(pow(Nt,2));
					B=2*sqrt(Var);
					ME=(B/media)*100;
					Linf=media-B;
					Lsup=media+B;
					system("cls");
					printf("Los datos obtenidos son:\n\nmedia: %f\nVarianza: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",media,Var,B,ME,Linf,Lsup);
					break;
			default: system("cls");
					 printf("ERROR: seleccione una opcion valida\n\n");
					 x=1;
					 break;
		}
	}while(x==1);
	exit(0);
}

void metodo2_MAE(){
	int Nt,L,i,j,x,nt,N[99],n[99],siono;
	float t,y[99],yes,Var,B,ME,Linf,Lsup,O2[99],s2[99],sum;
	printf("Introduzca el total de estratos a utilizar (L):\n\n");
	scanf("%d",&L);
	system("cls");
	for(i=0;i<L;i++){
		printf("Introduzca el tama%co de la poblacion del estrato %d (N%d):\n",164,i+1,i+1);
		scanf("%d",&N[i]);
		fflush(stdin);
		Nt=Nt+N[i];
		printf("Introduzca el tama%co de la muestra del estrato %d (n%d):\n",164,i+1,i+1);
		scanf("%d",&n[i]);
		nt=nt+n[i];
	}
	system("cls");
	do{	
		x=0;
		printf("Ya se cuenta con un estimador t?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		switch(siono){
			case 1: printf("Introduzca el valor del estimador t");
					scanf("%f",&t);
					break;
			case 2: for(i=0;i<L;i++){
						printf("Introduzca el elemento y_barra%d:\n",i+1);
						scanf("%f",&y[i]);
						t=(N[i]*y[i])+t;
					}
					break;
			default: printf("ERROR: seleccione una opcion valida\n\n");
					 system("cls");
					 x=1;
					 break;
		}
	}while(x==1);
	system("cls");
	do{	
		x=0;
		printf("Se cuenta con varianzas poblacionales?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		switch(siono){
			case 1:	for(i=0;i<L;i++){
						printf("Introduzca la varianza%d:\n",i+1);
						scanf("%f",&O2[i]);
						Var=((pow(N[i],2))*(((N[i]-n[i])*O2[i])/((N[i]-1)*n[i])))+Var;
					}
					B=2*sqrt(Var);
					ME=(B/t)*100;
					Linf=t-B;
					Lsup=t+B;
					system("cls");
					printf("Los datos obtenidos son:\n\nEstimador t: %f\nVarianza: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",t,Var,B,ME,Linf,Lsup);
					system("pause");
					break;
			case 2: printf("Se cuenta con varianzas muestrales?\n1- Si\n2- No\n\n");
					scanf("%d",&siono);
					if(siono==1){
						for(i=0;i<L;i++){
							printf("Introduzca el valor de la varianza muestral s%d\n",i+1);
							scanf("%f",&s2[i]);
							Var=((pow(N[i],2))*(((N[i]-n[i])*s2[i])/((N[i])*n[i])))+Var;
						}
					}else{
						for(i=0;i<L;i++){
							sum=0;
							for(j=0;j<n[i];j++){
								printf("Introduzca el elemento y%d del estrato n%d\n",j+1,i+1);
								scanf("%f",&yes);
								sum=sum+(pow((yes-y[i]),2));
							}
							s2[i]=sum/(n[i]-1);
							Var=((pow(N[i],2))*(((N[i]-n[i])*s2[i])/((N[i])*n[i])))+Var;
						}
					}
					B=2*sqrt(Var);
					ME=(B/t)*100;
					Linf=t-B;
					Lsup=t+B;
					system("cls");
					printf("Los datos obtenidos son:\n\nEstimador t: %f\nVarianza: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",t,Var,B,ME,Linf,Lsup);
					break;
			default: system("cls");
					 printf("ERROR: seleccione una opcion valida\n\n");
					 x=1;
					 break;
		}
	}while(x==1);
	exit(0);
}

void metodo3_MAE(){
	int Nt,L,i,j,x,nt,N[99],n[99],siono;
	float p,Var,B,ME,Linf,Lsup,sum,ps[99],En;
	printf("Introduzca el total de estratos a utilizar (L):\n\n");
	scanf("%d",&L);
	system("cls");
	for(i=0;i<L;i++){
		printf("Introduzca el tama%co de la poblacion del estrato %d (N%d):\n",164,i+1,i+1);
		scanf("%d",&N[i]);
		fflush(stdin);
		Nt=Nt+N[i];
		printf("Introduzca el tama%co de la muestra del estrato %d (n%d):\n",164,i+1,i+1);
		scanf("%d",&n[i]);
		nt=nt+n[i];
	}
	system("cls");
	for(i=0;i<L;i++){
		printf("Introduzca la proporcion %d:\n",i+1);
		scanf("%f",&ps[i]);
		sum=(N[i]*ps[i])+sum;
	}
	p=sum/Nt;
	system("cls");
	do{	
		x=0;
		printf("Se cuenta con varianzas poblacionales?\n1- si\n2- no\n\n");
		scanf("%d",&siono);
		switch(siono){
			case 1:	for(i=0;i<L;i++){
						En=((pow(N[i],2))*(((1-ps[i])*ps[i]*(N[i]-n[i]))/((N[i]-1)*n[i])))+En;
					}
					Var=En/(pow(Nt,2));
					B=2*sqrt(Var);
					ME=(B/p)*100;
					Linf=p-B;
					Lsup=p+B;
					system("cls");
					printf("Los datos obtenidos son:\n\nEstimador p: %f\nVarianza: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",p,Var,B,ME,Linf,Lsup);
					system("pause");
					break;
			case 2: for(i=0;i<L;i++){
						En=(N[i]*(((1-ps[i])*ps[i]*(N[i]-n[i]))/(n[i]-1)))+En;
					}
					Var=En/(pow(Nt,2));
					B=2*sqrt(Var);
					ME=(B/p)*100;
					Linf=p-B;
					Lsup=p+B;
					system("cls");
					printf("Los datos obtenidos son:\n\nEstimador p: %f\nVarianza: %f\nCota de error (B): %f\nMargen de error (porcentaje): %f\nLimite inferior: %f\nLimite superior: %f\n\n",p,Var,B,ME,Linf,Lsup);
					break;
			default: system("cls");
					 printf("ERROR: seleccione una opcion valida\n\n");
					 x=1;
					 break;
		}
	}while(x==1);
	exit(0);
}

void metodo4_MAE(){
	int opcion,L,i,N[99],Nt;
	float Var[99],costo[99],D,B,noc=0,no=0,now=0,n;
	printf("Indique para que caso se esta trabajando\n1- Para una estimacion miu\n2- Para una estimacion t\n3- Para una estimacion p\n\n");
	scanf("%d",&opcion);
	system("cls");
	printf("Introduzca el total de estratos a utilizar (L):\n\n");
	scanf("%d",&L);
	system("cls");
	for(i=0;i<L;i++){
		printf("Introduzca el tama%co de la poblacion del estrato %d (N%d):\n",164,i+1,i+1);
		scanf("%d",&N[i]);
		fflush(stdin);
		Nt=Nt+N[i];
		printf("Introduzca la varianza del estrato %d:\n",i+1);
		scanf("%f",&Var[i]);
		printf("Introduzca el costo (c%d)\n",i+1);
		scanf("%f",&costo[i]);
	}
	printf("Introduzca la Cota de error (B):\n");
	scanf("%f",&B);
	if(opcion==1||opcion==3){
		D=(pow(B,2))/4;
	}else{
		D=(pow(B,2))/(4*pow(Nt,2));
	}
	for(i=0;i<L;i++){
		noc=((N[i]*sqrt(Var[i]))/(sqrt(costo[i])))+noc;
		no=(N[i]*Var[i])+no;
	}
	for(i=0;i<L;i++){
		now=(((pow(N[i],2))*Var[i])/(((N[i]*sqrt(Var[i]))/(sqrt(costo[i])))/noc))+now;
	}
	n=now/((pow(Nt,2)*D)+no);
	system("cls");
	printf("El tama%co de la muestra es de\n\nn = %g",164,n);
	exit(0);
}

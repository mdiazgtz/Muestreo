//Diseñar un codigo en R, Python o C que nos permita calcular estimadores, 
//cotas de error de estimación, intervalos de confianza al 95% 
//y margenes de error para los distintos parametros señalados en clase: 
//media, total y proporción. Todo lo anterior a traves de la teoría 
//desarrollada para el Muestreo Aleatorio Simple. //

//Alternativa: Realizar un excel detallado que nos llevé al mismo fin
//Criterios a evaluar: Detalle, orden y estructura tanto del codigo como del excel.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char letra;
	char tecla;
	
		printf("\n\n\t\t\tMenu\n\n\ta)Media Poblacional\n\tb)Total Poblacional\n\tc)Proporcion Pobacional");
		
		
	printf("\n\n\n\tSeleccione una opcion [a/b/c]: ");
	scanf("%c",&letra);
	
	
    if(letra=='a' || letra=='b'|| letra=='c')
    {
    	system("cls");
	}
	switch(letra)
	{
		case 'a':
			{
				int numero,n,N; //variables de nuestras formulas
	float var,var1,var2,media,b,vmg,cota,mg,li,ls,mg2,cota2,me,mg2m,cota2m,mem,vmg1,lim,lsm,cotag,b1; //formulas
	
	int r4;
	float nmuesm1,nmuesm2;
	float Npobm1,sigmacuadradam1,Bdem1;
	float Npobm2,sigmacuadradam2,Bdem2;
	
	int j,r,a,r1,r2,r3; //contadores y variables necesarias para nuestro programa
	float yi,suma,sc,sumyi; //contadores y variables necesarias de nuestro codigo
	
	printf("\n\tMEDIA POBLACIONAL 'Miu' A PARTIR DE UNA M.A.S");
	printf("\n\n\t\t\tMenu\n\n\t1)Estimador de la Media Poblacional\n\t2)Varianza del estimador miu gorro (M.A.S CON REEMPLAZO) \n\t3)Varianza del estimador miu gorro (M.A.S SIN REEMPLAZO)\n\t4)Cota\n\t5)Intervalos de confianza\n\t6)Margen de Error\n\t7)Calcular tamaño de muestra");
	printf("\n\n\n\tSeleccione una opcion [1-7]: ");
	scanf("%i",&numero);
	if(numero==1 || numero==2 || numero==3 || numero==4 || numero==5 || numero==6 || numero==7)
    {
    	system("cls");
	}

	switch(numero)
	{
		case 1:
		printf("\n\tUsted selecciono estimar la media poblacional");
		printf("\n\tIndique el tamano de su muestra, es decir el valor de n:");
		scanf("%i",&n);
		printf("\n\t ¿Usted conoce la suma de las yi? [SI=1/NO=2]: ");
		scanf("%i",&a);
		if(a==1)
		{
			printf("\n\tIngrese el valor de la suma de las yi: ");
			scanf("%f",&sumyi);
			media=sumyi/n;
			printf("\n\n\tEl valor estimado de la media poblacional es: ");
		    printf("\n\n\t %.2f",media);
			
		}
		else
		{
			suma=0;
			for(j=1;j<=n;j++)
			{
				
				printf("\nIngrese el dato num %i: ",j);
				scanf("%f",&yi);
				suma=suma+yi;
			}
		media=suma/n;
		printf("\n\n\tEl valor de la media es: ");
		printf("\n\n\t %.2f",media);
		}
		
		
		
        break;
		case 2: 
		printf("\n\tUsted selecciono estimar la varianza del estimador para una M.A.S CON reemplazo");
		printf("\n\tIndique el valor de sigma cuadrada:");
		scanf("%f",&sc);
		printf("\n\tIndique el tamano de la muestra es decir el valor de n:");
		scanf("%i",&n);
		var=sc/n;
		printf("\n\n\tEl valor de la varianza de miu gorro para una M.A.S con reemplazo es: ");
		printf("\n\n\t %.2f",var);
		break;
		
		
		
		
		
		
		
		
		
		
	    case 3:
		printf("\n\tUsted selecciono estimar la varianza del estimador para una M.A.S SIN reemplazo");
		
		{
			printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			scanf("%i",&r);
			if(r==1){
				printf("\n\tVARIANZA PARA SIGMA CUADRADA CONOCIDA");
	            printf("\n\tIndique el valor de sigma cuadrada:");
		        scanf("%f",&sc);
		        printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		        scanf("%i",&N);
		        printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		        scanf("%i",&n);
		        var1=(sc/n)*((N-n)/(N-1));
		        printf("\n\n\tEl valor de la varianza de miu gorro para una M.A.S sin reemplazo es: ");
		        printf("\n\n\t %.2f",var1);
			}
			else{
				printf("\n\tVARIANZA PARA SIGMA CUADRADA DESCONOCIDA");
	            printf("\n\tIndique el valor de sigma cuadrada:");
		        scanf("%f",&sc);
		        printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		        scanf("%i",&N);
		        printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		        scanf("%i",&n);
		        var2=(sc/n)*(N-n)/(N);
		        printf("\n\n\tEl valor de la varianza gorro de miu gorro para una M.A.S sin reemplazo es: ");
		        printf("\n\n\t %.2f",var2);
			}			
		}
		break;
		case 4:
			{
				printf("\n\tUsted selecciono calcular la cota");
				printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			    scanf("%i",&r1);
			    if(r1==1)
			    {
			    	printf("\n\tIndique el valor de la varianza de Miu Gorro:");
		            scanf("%f",&vmg);
				    b=2*(sqrt(vmg));
				    printf("\n\n\tEl valor de la cota  es: %.2f",b);
			    	
				}
				else
				{
					printf("\n\tIndique el valor de la varianza gorro de Miu Gorro:");
		        scanf("%f",&vmg1);
				b1=2*(sqrt(vmg1));
				printf("\n\n\tEl valor de la cota  gorro es: %.2f",b1);
					
					
					
					
				}
				
			}
			
		break;
		case 5:
			{
				printf("\n\t Usted selecciono calcular los intervalos de confianza: ");
				printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			    scanf("%i",&r2);
			    if(r2==1)
			    {
			    	printf("\n\tIndique el valor de Miu Gorro:");
		            scanf("%f",&mg);
		            printf("\n\tIndique el valor de la Cota:");
		            scanf("%f",&cota);
		            li=mg-cota;
		            ls=mg+cota;
		            printf("\n\n\tEl valor de el limite inferior  es: %.2f",li);
		            printf("\n\n\tEl valor de el limite superior  es: %.2f",ls);
				}
				
				else
				{
				    printf("\n\tIndique el valor de Miu Gorro:");
		            scanf("%f",&mg);
		            printf("\n\tIndique el valor de la Cota Gorro:");
		            scanf("%f",&cotag);
		            lim=mg-cotag;
		            lsm=mg+cotag;
		            printf("\n\n\tEl valor de el limite inferior  es: %.2f",lim);
		            printf("\n\n\tEl valor de el limite superior  es: %.2f",lsm);
					
				}				
			}
			
		
		break;
		case 6:
			{
				printf("\n\t Usted selecciono calcular el Margen de Error: ");
				printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			    scanf("%i",&r3);
			    if(r3==1)
			    {
			    	printf("\n\tIndique el valor de Miu Gorro:");
		            scanf("%f",&mg2);
		            printf("\n\tIndique el valor de la Cota:");
		            scanf("%f",&cota2);
		            me=(cota2/mg2)*100;
		            printf("\n\n\tEl margen de error es de: %.2f",me);
			    	
				}
				else
				{
					printf("\n\tIndique el valor de Miu Gorro:");
		            scanf("%f",&mg2m);
		            printf("\n\tIndique el valor de la Cota Gorro:");
		            scanf("%f",&cota2m);
		            mem=(cota2m/mg2m)*100;
		            printf("\n\n\tEl margen de error es de: %.2f",mem);
					
				}
				
		     	
			}
			break;
			case 7:
				{
					printf("\n\t Usted selecciono calcular el tamaño de la muestra: ");
					printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			        scanf("%i",&r4);
			        if(r4==1)
			        {
			        	printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	scanf("%i",&Npobm1);
			        	printf("\n\tIndique el valor de sigma cuadrada: ");
			        	scanf("%f",&sigmacuadradam1);
			        	printf("\n\tIndique el valor de cota: ");
			        	scanf("%f",&Bdem1);
			        	nmuesm1=((Npobm1)*(sigmacuadradam1))/(((Npobm1-1)*((Bdem1*Bdem1)/4))+sigmacuadradam1);
			        	printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuesm1);
			    	
					}
					else
					{
						printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	scanf("%i",&Npobm2);
			        	printf("\n\tIndique el valor de sigma cuadrada: ");
			        	scanf("%f",&sigmacuadradam2);
			        	printf("\n\tIndique el valor de cota: ");
			        	scanf("%f",&Bdem2);
			        	nmuesm2=((Npobm2)*(sigmacuadradam2))/(((Npobm2-1)*((Bdem2*Bdem2)/4))+sigmacuadradam2);
			        	printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuesm2);
						
					}
					
					
				}
		
			
		default:
		printf("\n\n\tNo ha digitado un numero correcto");	
	}
				
			}
			break;
		case 'b':
			{
				int num,m,M; //variables de nuestras formulas
	float varia,varia1,varia2,med,c,vmg0,cota0,mg0,li0,ls0,mg20,cota2,mg2,me2,yb,tgorro,vmg01,d,f,g;
	float me20,cota20,h,mg01,cota01,li01,ls01,me3,mgt; //formulas
	
	
	int k,l; //contadores y variables necesarias para nuestro programa
	float xi,sum,sigc; //contadores y variables necesarias de nuestro codigo
	
	
	int g4;
	float nmuest1,nmuest2;
	float Npobt1,sigmacuadradat1,Bdet1;
	float Npobt2,sigmacuadradat2,Bdet2;
	
	printf("\n\tTOTAL POBLACIONAL 't' A PARTIR DE UNA M.A.S");
	printf("\n\n\t\t\t Menu\n\n\t1)Estimador de el Total Poblacional\n\t2)Varianza del estimador t gorro (M.A.S CON REEMPLAZO) \n\t3)Varianza del estimador t gorro (M.A.S SIN REEMPLAZO)\n\t4)Cota\n\t5)Intervalos de confianza\n\t6)Margen de Error\n\t7)Calcular tamaño de la muestra");
	printf("\n\n\n\tSeleccione una opcion [1-7]: ");
	scanf("%i",&num);
	if(num==1 || num==2 || num==3 || num==4 || num==5 || num==6 || num==7)
    {
    	system("cls");
	}

	switch(num)
	{
		case 1:
		printf("\n\tUsted selecciono calcular el estimador para el total poblacional");
		printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		scanf("%i",&M);
		printf("\n\tIndique el valor de miu gorro (o y barra): ");
		scanf("%i",&yb);
		tgorro=M*yb;
		
        
		printf("\n\n\tEl valor de el estimador para el total poblacional, t gorro es: ");
		printf("\n\n\t %.2f",tgorro);
		
		break;
	    case 2:
		printf("\n\tUsted selecciono estimar la varianza: ");
		
		{
			printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			scanf("%i",&l);
			if(l==1){
				printf("\n\tVARIANZA PARA SIGMA CUADRADA CONOCIDA");
	            printf("\n\tIndique el valor de sigma cuadrada:");
		        scanf("%f",&sigc);
		        printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		        scanf("%i",&M);
		        printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		        scanf("%i",&m);
		        varia1=((sigc*(M*M))/m)*((M-m)/(M-1));
		        printf("\n\n\tEl valor de la varianza es: ");
		        printf("\n\n\t %.2f",varia1);
			}
			else{
				printf("\n\tVARIANZA PARA SIGMA CUADRADA DESCONOCIDA");
	            printf("\n\tIndique el valor de sigma cuadrada:");
		        scanf("%f",&sigc);
		        printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		        scanf("%i",&M);
		        printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		        scanf("%i",&m);
		        varia2=((sigc*M)/m)*(M-m);
		        printf("\n\n\tEl valor de la varianza para una M.A.S con reemplazo es: ");
		        printf("\n\n\t %.2f",varia2);
			}			
		}
		break;
		case 4:
			{
				printf("\n\tUsted selecciono calcular la cota");
				printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			    scanf("%i",&f);
			    if(f==1){
				printf("\n\tCOTA PARA SIGMA CONOCIDA");
	            printf("\n\tIndique el valor de la varianza de t Gorro:");
		        scanf("%f",&vmg0);
				c=2*(sqrt(vmg0));
				printf("\n\n\tEl valor de la cota  es: %.2f",c);
			}
			else{
				printf("\n\tVARIANZA PARA SIGMA DESCONOCIDA");
	            printf("\n\tIndique el valor de la Varianza Gorro de t Gorro:");
		        scanf("%f",&vmg01);
				d=2*(sqrt(vmg01));
				printf("\n\n\tEl valor de la cota  es: %.2f",d);
		    	}			
		    }
			
		break;
		case 5:
			{
				printf("\n\t Usted selecciono calcular los intervalos de confianza (entre cota y t gorro): ");
		        printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
		        scanf("%i",&h);
		        if(h==1){
		        	printf("\n\tLIMITES PARA SIGMA CONOCIDA");
		        	printf("\n\tIndique el valor de t Gorro:");
		            scanf("%f",&mg0);
		            printf("\n\tIndique el valor de la Cota:");
		            scanf("%f",&cota0);
		            li0=mg0-cota0;
		            ls0=mg0+cota0;
		            printf("\n\n\tEl valor de el limite inferior  es: %.2f",li0);
		            printf("\n\n\tEl valor de el limite superior  es: %.2f",ls0);
		        	
				}
		        else
				{
		        	printf("\n\tLIMITES PARA SIGMA DESCONOCIDA");
			    	printf("\n\tIndique el valor de t Gorro:");
		            scanf("%f",&mg01);
		            printf("\n\tIndique el valor de Cota Gorro:");
		            scanf("%f",&cota01);
		            li01=mg01-cota01;
		            ls01=mg01+cota01;
		            printf("\n\n\tEl valor de el limite inferior  es: %.2f",li01);
		            printf("\n\n\tEl valor de el limite superior  es: %.2f",ls01);
			    }
			}
		break;
		case 6:
			{
				printf("\n\t Usted selecciono calcular el Margen de Error: ");
				printf("\n\t\t¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
				scanf("%i",&g);
				if(g==1){
					printf("\n\tIndique el valor de t Gorro:");
		            scanf("%f",&mg2);
		            printf("\n\tIndique el valor de la Cota:");
		            scanf("%f",&cota2);
		            me2=(cota2/mg2)*100;
		            printf("\n\n\tEl margen de error es de: %.2f",me2);					
				}
				else
				{
					printf("\n\tIndique el valor de t Gorro:");
		            scanf("%f",&mgt);
		            printf("\n\tIndique el valor de la Cota Gorro:");
		            scanf("%f",&cota20);
		            me3=(cota20/mgt)*100;
		            printf("\n\n\tEl margen de error es de: %.2f",me3);	
				}
				
			}
			break;
			case 7:
				{
					printf("\n\t Usted selecciono calcular el tamaño de la muestra: ");
					printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			        scanf("%i",&g4);
			        if(g4==1)
			        {
			        	printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	scanf("%i",&Npobt1);
			        	printf("\n\tIndique el valor de sigma cuadrada: ");
			        	scanf("%f",&sigmacuadradat1);
			        	printf("\n\tIndique el valor de cota: ");
			        	scanf("%f",&Bdet1);
			        	nmuest1=((Npobt1)*(sigmacuadradat1))/(((Npobt1-1)*((Bdet1*Bdet1)/(4*Npobt1*Npobt1)))+sigmacuadradat1);
			        	printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuest1);
			    	
			    	
					}
					else
					{
						printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	scanf("%i",&Npobt2);
			        	printf("\n\tIndique el valor de sigma cuadrada: ");
			        	scanf("%f",&sigmacuadradat2);
			        	printf("\n\tIndique el valor de cota: ");
			        	scanf("%f",&Bdet2);
			        	nmuest2=((Npobt2)*(sigmacuadradat2))/(((Npobt2-1)*((Bdet2*Bdet2)/(4*Npobt2*Npobt2)))+sigmacuadradat2);
			        	printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuest2);
						
					}
				}
		default:
		printf("\n\n\tNo ha digitado un numero correcto");
				
			}
		    break;
		case 'c':
			{
			int g4,on1,on2;
	float nmuesp1,Npobp1,sigmacuadradap1,Bdep1,pdep1;
	float nmuesp2,Npobp2,sigmacuadradap2,Bdep2,pdep2;
    int number,w,W,v,v2,v3,v4,v5,o,o1,z;
	float bp,vz,vz1,vz2,mediaa,cotap2,vmgpg,vmgp,cotap,mgp,lip,lsp,sumzi,add,scp,mgp1,cotap1,pg,cotap22,pgg,me3,me2,lip1,lsp1,var2,var1,zi,p,p1,o2,p2;
	
	printf("\n\tPROPORCION POBLACIONAL 'P' A PARTIR DE UNA M.A.S");
	printf("\n\n\t\t\t Menu\n\n\t1)Estimador de la Proporcion Poblacional\n\t2)Varianza del estimador p gorro (M.A.S CON REEMPLAZO) \n\t3)Varianza del estimador p gorro (M.A.S SIN REEMPLAZO)\n\t4)Cota\n\t5)Intervalos de confianza\n\t6)Margen de Error\n\t7)Calcular tamaño de la muestra");
	printf("\n\n\n\tSeleccione una opcion [1-7]: ");
	scanf("%i",&number);
	if(number==1 || number==2 || number==3 || number==4 || number==5 || number==6 || number==7)
    {
    	system("cls");
	}

	switch(number)
	{
		case 1:
		printf("\n\tUsted selecciono calcular el estimador 'p gorro' para proporcion poblacional");
		printf("\n\tIndique el tamano de su muestra, es decir el valor de n:");
		scanf("%i",&w);
		printf("\n\t ¿Usted conoce la suma de las yi? [SI=1/NO=2]: ");
		scanf("%i",&v);
		if(v==1)
		{
			printf("\n\tIngrese el valor de la suma de las yi: ");
			scanf("%f",&sumzi);
			mediaa=sumzi/w;
			printf("\n\n\tEl valor del estimador p gorro es: ");
		    printf("\n\n\t %.2f",mediaa);
			
		}
		else
		{
			add=0;
			for(z=1;z<=w;z++)
			{			
				printf("\nIngrese el dato num %i: ",z);
				scanf("%f",&zi);
				add=add+zi;
			}
		mediaa=add/w;
		printf("\n\n\tEl valor del estimador p gorro es: ");
		printf("\n\n\t %.2f",mediaa);
		}
		break;
		
		case 2: 
		printf("\n\tUsted selecciono estimar la varianza para una M.A.S CON REEMPLAZO");
		printf("\n\t¿Desea hacerlo con sigma cuadrada o tiene los valores de pq?: \n\t[CON SIGMA CUADRADA=1/CON pq=2]: ");
		scanf("%i",&o);
		if(o==1)
		{
			printf("\n\tIndique el valor de sigma cuadrada:");
		    scanf("%f",&scp);
		    printf("\n\tIndique el tamano de su muestra, es decir el valor de n:");
		    scanf("%i",&w);
		    vz=scp/w;
	  	    printf("\n\n\tEl valor de la varianza de p gorrro para una M.A.S con reemplazo es: ");
		    printf("\n\n\t %.2f",vz);	
		}else
		{
			printf("\n\tIndique el valor de p:");
		scanf("%f",&p);
        printf("\n\tIndique el tamano de su muestra, es decir el valor de n:");
		scanf("%i",&w);
		vz=(p*(1-p))/w;
		printf("\n\n\tEl valor de la varianza de p gorro para una M.A.S con reemplazo es: ");
		printf("\n\n\t %.2f",vz);	
		}
		break;
		
		case 3:
		printf("\n\tUsted selecciono estimar la varianza de p gorro para una M.A.S SIN REEMPLAZO");
		{
			printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			scanf("%i",&v2);
			if(v2==1){
				printf("\n\tVARIANZA PARA SIGMA CONOCIDA");
				printf("\n\t¿Desea hacerlo con sigma cuadrada o con pq?: \n\t[CON SIGMA CUADRADA=1/CON pq=2]: ");
		        scanf("%i",&o1);
		        if(o1==1)
		        {
		        	printf("\n\tIndique el valor de sigma cuadrada:");
		            scanf("%f",&scp);
		            printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		            scanf("%i",&W);
		            printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		            scanf("%i",&w);
		            vz1=(scp/w)*((W-w)/(W-1));
		            printf("\n\n\tEl valor de la varianza de p gorro con sigma cuadrada conocida es: ");
		            printf("\n\n\t %.2f",vz1);
		        	
				}
				else
		        {
		        	printf("\n\tIndique el valor de p:");
		            scanf("%f",&p1);
		        	printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		            scanf("%i",&W);
		            printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		            scanf("%i",&w);
		            vz1=((p*(1-p))/w)*((W-w)/(W-1));
		            printf("\n\n\tEl valor de la varianza de p gorro con sigma cuadrada conocida es: ");
		            printf("\n\n\t %.2f",vz1);	
				}       
			}
			else{
				printf("\n\tVARIANZA PARA SIGMA DESCONOCIDA");
				printf("\n\t¿Desea hacerlo con sigma cuadrada o con pq?: \n\t[CON SIGMA CUADRADA=1/CON pq=2]: ");
		        scanf("%i",&o2);
		        if(o2==1)
		        {
		          printf("\n\tIndique el valor de sigma cuadrada:");
		          scanf("%f",&scp);
		          printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		          scanf("%i",&W);
		          printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		          scanf("%i",&w);
		          vz2=(scp/w)*(W-w)/(W);
		          printf("\n\n\tEl valor de la varianza poblacional para una M.A.S con reemplazo es: ");
		          printf("\n\n\t %.2f",vz2);
				}
				else{
					
					printf("\n\tIndique el valor de p gorro:");
		            scanf("%f",&p2);
					printf("\n\tIndique el tamano de su poblacion, es decir el valor de N:");
		            scanf("%i",&W);
		            printf("\n\tIndique el tamano de la muestra, es decir el valor de n: ");
		            scanf("%i",&w);
		            vz2=(((p2)*(1-p2))/(w-1))*(W-w)/(W);
		            printf("\n\n\tEl valor de la varianza poblacional para una M.A.S con reemplazo es: ");
		            printf("\n\n\t %.2f",vz2);
				}	
	          
			}			
		}
		break;
		case 4:
			{
				printf("\n\tUsted selecciono calcular la cota");
				printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			    scanf("%i",&v3);
			    if(v3==1){
				printf("\n\tCOTA PARA SIGMA CUADRADA CONOCIDA");
	            printf("\n\tIndique el valor de la varianza de p gorro:");
		        scanf("%f",&vmgp);
				cotap=2*(sqrt(vmgp));
				printf("\n\n\tEl valor de la cota  es: %.2f",cotap);
			}
			else{
				printf("\n\tCOTA PARA SIGMA CUADRADA DESCONOCIDA");
	            printf("\n\tIndique el valor de la varianza gorro de p gorro:");
		        scanf("%f",&vmgpg);
				cotap2=2*(sqrt(vmgpg));
				printf("\n\n\tEl valor de la cota gorro es: %.2f",cotap2);
		    	}			
		    }
		
		break;
		case 5:
			{
				printf("\n\t Usted selecciono calcular los intervalos de confianza (entre cota y p gorro): ");
				printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
		        scanf("%i",&v4);
		        if(v4==1)
				{
		        	printf("\n\tLIMITES PARA SIGMA CUADRADA CONOCIDA");
		        	printf("\n\tIndique el valor de p Gorro:");
		            scanf("%f",&mgp);
		            printf("\n\tIndique el valor de la Cota:");
		            scanf("%f",&cotap);
		            lip=mgp-cotap;
		            lsp=mgp+cotap;
		            printf("\n\n\tEl valor de el limite inferior  es: %.2f",lip);
		            printf("\n\n\tEl valor de el limite superior  es: %.2f",lsp);
		        	
				}
		        else
				{
		        	printf("\n\tLIMITES PARA SIGMA CUADRADA DESCONOCIDA");
			    	printf("\n\tIndique el valor de p Gorro:");
		            scanf("%f",&mgp1);
		            printf("\n\tIndique el valor de Cota Gorro:");
		            scanf("%f",&cotap1);
		            lip1=mgp1-cotap1;
		            lsp1=mgp1+cotap1;
		            printf("\n\n\tEl valor de el limite inferior  es: %.2f",lip1);
		            printf("\n\n\tEl valor de el limite superior  es: %.2f",lsp1);
			    }    
				
			}
    	break;
		case 6:
			{
				printf("\n\t Usted selecciono calcular el Margen de Error: ");
				printf("\n\t\t¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
				scanf("%i",&v5);
				if(v5==1){
					printf("\n\tIndique el valor de p Gorro:");
		            scanf("%f",&pg);
		            printf("\n\tIndique el valor de la Cota:");
		            scanf("%f",&cotap2);
		            me2=(cotap2/pg)*100;
		            printf("\n\n\tEl margen de error es de: %.2f",me2);					
				}
				else
				{
					printf("\n\tIndique el valor de p Gorro:");
		            scanf("%f",&pgg);
		            printf("\n\tIndique el valor de la Cota Gorro:");
		            scanf("%f",&cotap22);
		            me3=(cotap22/pgg)*100;
		            printf("\n\n\tEl margen de error es de: %.2f",me3);	
				}	
			}
			break;
			case 7:
				{
					printf("\n\t Usted selecciono calcular el tamaño de la muestra: ");
					printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			        scanf("%i",&g4);
			        if(g4==1)
			        {
			        	printf("\n\t¿Desea hacerlo con sigma cuadrada o con pq?: \n\t[CON SIGMA CUADRADA=1/CON pq=2]: ");
		                scanf("%i",&on1);
		                if(on1==1)
		                {
		                	printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	    scanf("%i",&Npobp1);
			        	    printf("\n\tIndique el valor de sigma cuadrada: ");
			        	    scanf("%f",&sigmacuadradap1);
			        	    printf("\n\tIndique el valor de cota: ");
			        	    scanf("%f",&Bdep1);
			        	    nmuesp1=((Npobp1)*(sigmacuadradap1))/(((Npobp1-1)*((Bdep1*Bdep1)/(4*Npobp1*Npobp1)))+sigmacuadradap1);
			        	    printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuesp1);
		                	
						}
						else
						{
							printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	    scanf("%i",&Npobp1);
			        	    printf("\n\tIndique el valor de p: ");
			        	    scanf("%f",&pdep1);
			        	    printf("\n\tIndique el valor de cota: ");
			        	    scanf("%f",&Bdep1);
			        	    nmuesp1=((Npobp1)*(pdep1*(pdep1-1)))/(((Npobp1-1)*((Bdep1*Bdep1)/(4*Npobp1*Npobp1)))+(pdep1*(pdep1-1)));
			        	    printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuesp1);	
						}
					}
					else
					{
						printf("\n\t¿Desea hacerlo con sigma cuadrada o con pq?: \n\t[CON SIGMA CUADRADA=1/CON pq=2]: ");
		                scanf("%i",&on2);
		                if(on2==1)
		                {
		                	printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	    scanf("%i",&Npobp2);
			        	    printf("\n\tIndique el valor de sigma cuadrada: ");
			        	    scanf("%f",&sigmacuadradap2);
			        	    printf("\n\tIndique el valor de cota: ");
			        	    scanf("%f",&Bdep2);
			        	    nmuesp2=((Npobp2)*(sigmacuadradap2))/(((Npobp2-1)*((Bdep2*Bdep2)/(4*Npobp2*Npobp2)))+sigmacuadradap2);
			        	    printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuesp2);
		                	
						}
						else
						{
							printf("\n\tIndique el tamaño de la poblacion, es decir el valor de N: ");
			        	    scanf("%i",&Npobp2);
			        	    printf("\n\tIndique el valor de p gorrito: ");
			        	    scanf("%f",&pdep2);
			        	    printf("\n\tIndique el valor de cota: ");
			        	    scanf("%f",&Bdep2);
			        	    nmuesp2=((Npobp2)*(pdep2*(pdep2-1)))/(((Npobp2-1)*((Bdep2*Bdep2)/(4*Npobp2*Npobp2)))+(pdep2*(pdep2-1)));
			        	    printf("\n\n\tEl tamaño de la muestra es de: %.2f",nmuesp2);	
						}	
					}
					
				}
				break;
		default:
		printf("\n\n\tNo ha digitado un numero correcto");			
			}
			break;
		default:
		printf("\n\n\tNo ha digitado un numero correcto");
	}

    return 0;	
	
}
}
}

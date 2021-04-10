#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char letrita;
	printf("\n\n\t\t\tMUESTREO ALEATORIO ESTRATIFICADO\n\n\ta)Media Poblacional\n\tb)Total Poblacional\n\tc)Proporcion Pobacional");
	printf("\n\n\n\tSeleccione una opcion [a/b/c]: ");
	scanf("%c",&letrita);
	
	
    if(letrita=='a' || letrita=='b'|| letrita=='c')
    {
        system("cls");
	}
	switch(letrita)
	{
		case 'a':
			{
				int numby1,NmaeM1,nmaeM1,estM1,estratosM1,testM1,resp1,sino1,contmM1,tamMest;
				float msumyiestrato,miumediaestrato,datocontmM1,sumsumestratoiM1;
				float sumvar0MM1,sumvar1MM1,miuvarianzaestrato;
				
				printf("\n\tMEDIA POBLACIONAL 'Miu' A PARTIR DE UN M.A.E");
	            printf("\n\n\t\t\tMenu\n\n\t1)Estimador de la Media Poblacional\n\t2)Varianza del estimador miu gorro (M.A.S CON REEMPLAZO) \n\t3)Varianza del estimador miu gorro (M.A.S SIN REEMPLAZO)\n\t4)Cota\n\t5)Intervalos de confianza\n\t6)Margen de Error\n\t7)Calcular tamaño de muestra");
	            printf("\n\n\n\tSeleccione una opcion [1-7]: ");
	            scanf("%i",&numby1);
	            if(numby1==1 || numby1==2 ||numby1==3 ||numby1==4 ||numby1==5 ||numby1==6 || numby1==7)
                {
                   system("cls");
	            }  
	            {
	            	case 1:
	            		{
	            			printf("\n\tUsted selecciono calcular la media poblacional para un M.A.E\n\n");
	            			printf("\n\tIndique el tamaño de la población: ");
	            			scanf("%i",&NmaeM1);
	            			printf("\n\tIndique el tamaño de la muestra: ");
	            			scanf("%i",&nmaeM1);
	            			printf("\n\t ¿Usted conoce la varianza?: Responda con SI=1 o NO=2: ");
	            			scanf("%i",&resp1);
	            			
	            			if(resp1==1)
	            			{
	            				printf("\n\tIndique el numero de estratos: ");
	            			    scanf("%i",&estratosM1);
	            			    for(estM1=1;estM1<=estratosM1;estM1++)
	            			   {
	            				   printf("\n\t Indique el tamaño del estrato %i: ",estM1);
	            				   scanf("%i",&testM1);
	            				   printf("\n\tEl tamaño de el estrato # %i es %i ",estM1,testM1);
	            				   
	            				   //vamo a calular la media //
	            				   
	            				   printf("\n\tMEDIA DEL ESTRATO # %i",estM1);
	            				   printf("\n\t Indique el tamaño de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%i",&tamMest);
	            				   printf("\n\t ¿Usted conoce la suma de las yi de el estrato # %i? [SI=1/NO=2]",estM1);
	            				   scanf("%i",&sino1);
	            				   if(sino1==1)
	            				   {
	            				   	    printf("\n\t Ingrese la suma de las yi de el estrato # %i: ",estM1);
	            				        scanf("%f",&msumyiestrato);
	            				   	    miumediaestrato=msumyiestrato/tamMest;
	            				   	    printf("\n\t La media de el estrato # %i es: %.2f ",estM1,miumediaestrato);
	            				   	    
								   }
	            				   else
								   {
								   	    sumsumestratoiM1=0;
								   	    for(contmM1=1;contmM1<=tamMest;contmM1++)
								   	    {
								   	    	printf("\n\t Ingrese el dato # %i: ",contmM1);
	            				            scanf("%f",&datocontmM1);
	            				            sumsumestratoiM1=sumsumestratoiM1+datocontmM1; 	
										}
										miumediaestrato=sumsumestratoiM1/tamMest;
										printf("\n\t La media de el estrato # %i es: %.2f ",estM1,miumediaestrato);
	            				   	
								   }
	            				   //vamo a calcular la varianza OwO//
	            				   printf("\n\tVARIANZA DEL ESTRATO # %i",estM1);
	            				   {
	            				   	    sumsumestratoiM1=0;
								   	    for(contmM1=1;contmM1<=tamMest;contmM1++)
								   	    {
								   	    	printf("\n\t Ingrese el dato # %i: ",contmM1);
	            				            scanf("%f",&datocontmM1);
	            				            sumvar0MM1=(datocontmM1-miumediaestrato);
	            				            sumvar1MM1=pow(sumvar0MM1,2);
	            				            sumsumestratoiM1=sumsumestratoiM1+sumvar1MM1; 	
										}
										miuvarianzaestrato=sumsumestratoiM1/tamMest;
										printf("\n\t La varianza de el estrato # %i es: %.2f ",estM1,miuvarianzaestrato);
								   }   
	            				}
							}
	            			else
							{
								printf("\n\tIndique el numero de estratos: ");
	            			    scanf("%i",&estratosM1);
	            			    for(estM1=1;estM1<=estratosM1;estM1++)
	            			   {
	            				   printf("\n\t Indique el tamaño del estrato %i: ",estM1);
	            				   scanf("%i",&testM1);
	            				   printf("\n\tEl tamaño de el estrato # %i es %i ",estM1,testM1);
	            				   
	            				   //vamo a calular la media //
	            				   
	            				   printf("\n\tMEDIA DEL ESTRATO # %i",estM1);
	            				   printf("\n\t Indique el tamaño de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%i",&tamMest);
	            				   printf("\n\t ¿Usted conoce la suma de las yi de el estrato # %i? [SI=1/NO=2]",estM1);
	            				   scanf("%i",&sino1);
	            				   if(sino1==1)
	            				   {
	            				   	    printf("\n\t Ingrese la suma de las yi de el estrato # %i: ",estM1);
	            				        scanf("%f",&msumyiestrato);
	            				   	    miumediaestrato=msumyiestrato/tamMest;
	            				   	    printf("\n\t La media de el estrato # %i es: %.2f ",estM1,miumediaestrato);
	            				   	    
								   }
	            				   else
								   {
								   	    sumsumestratoiM1=0;
								   	    for(contmM1=1;contmM1<=tamMest;contmM1++)
								   	    {
								   	    	printf("\n\t Ingrese el dato # %i: ",contmM1);
	            				            scanf("%f",&datocontmM1);
	            				            sumsumestratoiM1=sumsumestratoiM1+datocontmM1; 	
										}
										miumediaestrato=sumsumestratoiM1/tamMest;
										printf("\n\t La media de el estrato # %i es: %.2f ",estM1,miumediaestrato);
	            				   	
								   }
	            				   //vamo a calcular la varianza OwO//
	            				   printf("\n\tVARIANZA DEL ESTRATO # %i",estM1);
	            				   {
	            				   	    sumsumestratoiM1=0;
								   	    for(contmM1=1;contmM1<=tamMest;contmM1++)
								   	    {
								   	    	printf("\n\t Ingrese el dato # %i: ",contmM1);
	            				            scanf("%f",&datocontmM1);
	            				            sumvar0MM1=(datocontmM1-miumediaestrato);
	            				            sumvar1MM1=pow(sumvar0MM1,2);
	            				            sumsumestratoiM1=sumsumestratoiM1+sumvar1MM1; 	
										}
										miuvarianzaestrato=sumsumestratoiM1/(tamMest-1);
										printf("\n\t La varianza de el estrato # %i es: %.2f ",estM1,miuvarianzaestrato);
								   }
	            				   
	            				   
	            				   
	            				   
	            				   
	            				   
	            				   
	            				}
								
								
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
	            			 
							}
	            			
	            			
	            			
	            			
	            			
	            			
						}
					break;
					case 2:
						{
							
						}
					break;
					case 3:
						{
							
						}
					break;
					case 4:
						{
							
						}
				}
	            
				
			}
		break;
		case 'b':
			{
				
			}
		break;
		case 'c':
			{
			}
		break;
			
	}
	

	
	
	
	


    system("pause");
    return 0;
    
}

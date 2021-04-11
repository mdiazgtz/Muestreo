#include<stdio.h>
#include<stdlib.h>
#include<math.h>

///TE QUEDASTE EN LINEA 81///
int main()
{   
    
	char letrita;
	printf("\n\n\t\t\tMUESTREO ALEATORIO ESTRATIFICADO\n\n\ta)Media Poblacional\n\tb)Total Poblacional\n\tc)Proporcion Pobacional");
	printf("\n\n\n\tSeleccione una opcion [a/b/c]: ");
	scanf("%c",&letrita);
	sumitavar=0;
	
	
    if(letrita=='a' || letrita=='b'|| letrita=='c')
    {
        system("cls");
	}
	switch(letrita)
	{
		case 'a':
			{
				// VARIABLES PARA MIU//
				//variables estimador//
				int numby1,NmaeM1,nmaeM1,estM1,estratosM1,testM1,resp1,sino1,contmM1,tamMest;
				float msumyiestrato,miumediaestrato,datocontmM1,sumsumestratoiM1;
				float sumvar0MM1,sumvar1MM1,miuvarianzaestrato,sumaestimadorm,estimadormiu;
				//variables varianza//
				int  sino2;
				float mediaMest,varMest,varmiu,candy;
				float sumitavar;
				//Variables cota//
				int siono3;
				float varmiUMAE,cotaMAE;
				
				
				
				
			
		
				printf("\n\tMEDIA POBLACIONAL 'Miu' A PARTIR DE UN M.A.E");
	            printf("\n\n\t\t\tMenu\n\n\t1)Estimador de la Media Poblacional\n\t2)Varianza del estimador miu gorro\n\t3)Cota\n\t4)Intervalos de confianza\n\t5)Margen de Error\n\t6)Calcular tamaño de muestra");
	            printf("\n\n\n\tSeleccione una opcion [1-7]: ");
	            scanf("%i",&numby1);
	            if(numby1==1 || numby1==2 ||numby1==3 ||numby1==4 ||numby1==5 ||numby1==6 || numby1==7)
                {
                   system("cls");
	            } 
				switch(numby1) 
	            {
	            	case 1:
	            		{
	            			
						
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
	            				   
								   
								   sumaestimadorm=0; // esta es la suma para estimador OwO
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
	            				   	    sumaestimadorm=sumaestimadorm+testM1*miumediaestrato;
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
										sumaestimadorm=sumaestimadorm+testM1*miumediaestrato;
	            				   	
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
	            				
	            				//MIU//
	            				{
	            				
									estimadormiu=sumaestimadorm/NmaeM1;
	            					printf("\n\tEl valor del estimador Miu es: %.2f ",estimadormiu);
										
								}
	            				
							}
	            			else
							{
								
								sumaestimadorm=0;
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
	            				   	    sumaestimadorm=sumaestimadorm+testM1*miumediaestrato;
	            				   	    
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
										sumaestimadorm=sumaestimadorm+testM1*miumediaestrato;
	            				   	
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
	            				//MIU//
	            				{
	            				
									estimadormiu=sumaestimadorm/NmaeM1;
	            					printf("\n\n\tEl valor del estimador Miu es: %.2f ",estimadormiu);
										
								}
	            		
							}

						}
						
					break;
				}
					case 2:
						{
							printf("\n\tUsted selecciono calcular la varianza del estimador Miu para un M.A.E\n\n");
							printf("\n\tIndique el tamaño de la población: ");
	            			scanf("%i",&NmaeM1);
							printf("\n\t¿Conoce la varianza de todos los estratos? Si desconoce al menos una indique 'NO' [SI=1/NO=2]: ");
							scanf("%i",&sino2);
	            			  if(sino2==1)
	            			  {
	            			  	sumitavar=0;
	            			  	printf("\n\tIndique el numero de estratos: ");
	            			    scanf("%i",&estratosM1);
	            			    for(estM1=1;estM1<=estratosM1;estM1++)
	            			    {
	            				   printf("\n\t Indique el tamaño del estrato %i: ",estM1);
	            				   scanf("%i",&testM1);
	            				   printf("\n\t Indique el tamaño de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%i",&tamMest);
	            				   printf("\n\t Indique la media de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%f",&mediaMest);
	            				   printf("\n\t Indique la varianza de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%f",&varMest);
	            				   sumitavar=((testM1*testM1)*((testM1-tamMest)/tamMest)*(varMest/tamMest));
	            				   
	            			    }
	            			    varmiu=sumitavar*(1/(NmaeM1*NmaeM1));
	            		        printf("\n\n\tEl valor de la varianza estimada del estimador Miu es: %.4f ",varmiu);
	            			       
							  }
							  else
							  {
							    printf("\n\tIndique el numero de estratos: ");
	            			    scanf("%i",&estratosM1);
	            			    sumitavar=0;
	            			    
	            			    for(estM1=1;estM1<=estratosM1;estM1++)
	            			    {
	            				   printf("\n\t Indique el tamaño del estrato %i: ",estM1);
	            				   scanf("%i",&testM1);
	            				   printf("\n\t Indique el tamaño de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%i",&tamMest);
	            				   printf("\n\t Indique la media de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%f",&mediaMest);
	            				   printf("\n\t Indique la varianza de la muestra de el estrato # %i: ",estM1);
	            				   scanf("%f",&varMest);
	            				   sumitavar=((testM1*testM1)*((testM1-tamMest)/(tamMest-1))*(varMest/tamMest));
	            				   
	            			    }
	            			    varmiu=sumitavar*(1/(NmaeM1*NmaeM1));
	            		        printf("\n\n\tEl valor de la varianza estimada del estimador Miu es: %.4f ",varmiu);
							  }		
						}
					break;
					case 3:
						{
							printf("\n\tUsted selecciono calcular la varianza del estimador Miu para un M.A.E\n\n");
							printf("\n\t\t ¿Sigma cuadrada es conocida? [SI=1/NO=2]: ");
			                scanf("%i",&siono3);
			                if(siono3==1)
			                {
			                	printf("\n\t\t Indique el valor de la varianza de MIU: ");
			                	scanf("%f",&varmiuMAE);
			                	printf("\n\t\t ")
			                	cotaMAE=2*(sqrt(varmiuMAE));
			                	printf("\n\n\tEl valor de la cota del estimador Miu es: %.4f ",cotaMAE);
			            	
							}
							else
							{
								printf("\n\t\t Indique el valor de la varianza estimada de MIU: ");
			                	scanf("%f",&varmiuMAE);
			                	printf("\n\t\t ")
			                	cotaMAE=2*(sqrt(varmiuMAE));
			                	printf("\n\n\tEl valor de la cota estimada del estimador Miu es: %.4f ",cotaMAE);
			            	
							}
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

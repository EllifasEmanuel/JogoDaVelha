#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void esvaziarMatriz(char Matriz[][3],int rep[9]){
				Matriz[0][0]=' ';
    			Matriz[0][1]=' ';
    			Matriz[0][2]=' ';
    			Matriz[1][0]=' ';
    			Matriz[1][1]=' ';
    			Matriz[1][2]=' ';
    			Matriz[2][0]=' ';
    			Matriz[2][1]=' ';
    			Matriz[2][2]=' ';
    			
    			rep[0]=0;
    			rep[1]=0;
    			rep[2]=0;
    			rep[3]=0;
    			rep[4]=0;
    			rep[5]=0;
    			rep[6]=0;
    			rep[7]=0;
    			rep[8]=0;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int L,C,i,Op,ContadorJ1=0,ContadorJ2=0,j,x=0;
	
	int rep[9]={0},Regras;
	
	char Letra, Matriz[3][3]={' '},Jogador1[15],Jogador2[15],random;
	
	        printf(" ______________________________________________________________________________________________\n");    
            printf("|            _________________________________________________________________                 |\n");
            printf("|           |               SEJAM BEM-VIDOS - JOGO DA VELHA                   |                |\n");
            printf("|           |_________________________________________________________________|                |\n");
            printf("|                                                                                              |\n");
            printf("|  Projeto Integrador I.                                                                       |\n");
            printf("|  Primeiro Período.                                                                           |\n");                                        
            printf("|  Integrantes: Adonidio Soares, Douglas  Lopes, Ellifas Emanuel, Robert Reis, Sanderson Rocha.|\n");
            printf("|                                                                                              |\n");                                        
            printf("|                                                                                              |\n");
            printf("|______________________________________________________________________________________________|\n");
              
            printf("\nDigite o nome do primeiro jogador/a: ");
	        gets(Jogador1);
	        
			printf("Digite o nome do segundo jogador/a: ");
	        gets(Jogador2);  
	
		random = rand() % 2;

		printf("Random = %d",random);
		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("Jogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("Jogador %s está usando O!\n",Jogador1);
	            }
	
	          printf(" _____________________________________________________________________________\n");
              printf("|                                                                             |\n");
              printf("|                                                                             |\n");
              printf("|                           |------->MENU<-------|                            |\n");
              printf("|                           |____________________|                            |\n");
              printf("|                           | 1 - JOGO RÁPIDO!   |                            |\n");
              printf("|                           | 2 - REGRAS         |                            |\n");
              printf("|                           |____________________|                            |\n");
              printf("|                                                                             |\n");
              printf("|                                                                             |\n");
              printf("|                                                                             |\n");
              printf("|_____________________________________________________________________________|\n");
			scanf("%d", & Regras);
			getchar();
			if(Regras==2){
				printf("\nREGRAS\n");
				printf("\n1)O tabuleiro é uma matriz de três linhas por três colunas.\n2)O Jogo possui dois jogadores, o jogador 1 (%s) joga com o X e o jogador 2 (%s) joga com a O.\n3)Nao é permitido marcar em espaços ja preenchidos.\n4)Vence quem fizer primeiro uma trinca.\n\n\n",Jogador1,Jogador2);
			}
		    else if(Regras==1){
		    	printf("\n\n");
			}
		
	for(i=0; i<9 ;i++){
		
		//printf("\nPlacar: %s %d X %d %s\n\n",Jogador1,ContadorX,ContadorO,Jogador2);
		if(random==1){
			printf("\nPlacar: %s %d X %d %s\n\n",Jogador1,ContadorJ1,ContadorJ2,Jogador2);
		} else {
			printf("\nPlacar: %s %d X %d %s\n\n",Jogador1,ContadorJ1,ContadorJ2,Jogador2);
		}
		if(i%2==0){
			Letra = 'x';
				if(random == 1){
					printf("Vez do jogador %s\n", Jogador1);
				}else{
					printf("Vez do jogador %s\n", Jogador2);
				}
		}
		else{
			Letra = 'o';
			    if(random == 1){
					printf("Vez do jogador %s\n", Jogador2);
				}else{
					printf("Vez do jogador %s\n", Jogador1);
				}
		}
		
		printf("");
		
		printf("\nDigite sua jogada:\n\n");
	    printf("   1 | 2 | 3  \n");
        printf("  ---|---|--- \n ");
        printf("  4 | 5 | 6 \n");
        printf("  ---|---|--- \n ");
        printf("  7 | 8 | 9  \n");
		scanf("%d",& Op);
		fflush(stdin);
		system("cls");
		
		switch(Op){
				case 1:
					if(rep[0]==0){
						Matriz[0][0]=Letra;	
					}
					rep[0]++;
					if(rep[0]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[0]=1;
					}
					break;
				
				case 2:
					if(rep[1]==0){
						Matriz[0][1]=Letra;	
					}
					rep[1]++;
					if(rep[1]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[1]=1;
					}
					break;
				
				case 3:
					if(rep[2]==0){
						Matriz[0][2]=Letra;		
					}
					rep[2]++;
					if(rep[2]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[2]=1;
					}
					break;
				
				case 4:
					if(rep[3]==0){
						Matriz[1][0]=Letra;	
					}
					rep[3]++;
					if(rep[3]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[3]=1;
					}
					break;
				
				case 5:
					if(rep[4]==0){
						Matriz[1][1]=Letra;		
					}
					rep[4]++;
					if(rep[4]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[4]=1;
					}
					break;
				
				case 6:
					if(rep[5]==0){
						Matriz[1][2]=Letra;	
					}
					rep[5]++;
					if(rep[5]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[5]=1;
					}
					break;
				
				case 7:
					if(rep[6]==0){
						Matriz[2][0]=Letra;	
					}
					rep[6]++;
					if(rep[6]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[6]=1;
					}
					break;
				
				case 8:
					if(rep[7]==0){
						Matriz[2][1]=Letra;	
					}	
					rep[7]++;
					if(rep[7]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[7]=1;
					}
					break;
				
				case 9:
					if(rep[8]==0){
						Matriz[2][2]=Letra;		
					}
					rep[8]++;
					if(rep[8]>1){
						printf("Posicao Digitada Invalida\n");
						i--;
						rep[8]=1;
					}
					break;
				default:
					printf("\n Aviso: Número digitado inválido! Digite apenas os números que aparecem nas colunas.\n"); 
	            	i--;
			}
		//Vertical para X
		if(Matriz[0][0]=='x' && Matriz[1][0]=='x' && Matriz[2][0]=='x'){
			if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
		}
	    else if(Matriz[0][1]=='x' && Matriz[1][1]=='x' && Matriz[2][1]=='x'){
  	    	if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    else if(Matriz[0][2]=='x' && Matriz[1][2]=='x' && Matriz[2][2]=='x'){
  	    	if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    
	    //Horizontal para X
	    else if(Matriz[0][0]=='x' && Matriz[0][1]=='x' && Matriz[0][2]=='x'){
  	        if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    else if(Matriz[1][0]=='x' && Matriz[1][1]=='x' && Matriz[1][2]=='x'){
  	    	if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
		}
	    else if(Matriz[2][0]=='x' && Matriz[2][1]=='x' && Matriz[2][2]=='x'){
  	    	if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    
	    //Diagonal principal para X
	    else if(Matriz[0][0]=='x' && Matriz[1][1]=='x' && Matriz[2][2]=='x'){
  	    	if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
     	}
     	//Diagonal secundaria para X
     	else if(Matriz[0][2]=='x' && Matriz[1][1]=='x' && Matriz[2][0]=='x'){
  	    	if(random == 1){
			  	ContadorJ1++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);
			} else {
			  	ContadorJ2++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
  	    }
  	    
  	    
  	    //Vertical para O
  	    if(Matriz[0][0]=='o' && Matriz[1][0]=='o' && Matriz[2][0]=='o'){
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    else if(Matriz[0][1]=='o' && Matriz[1][1]=='o' && Matriz[2][1]=='o'){
  	        if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    else if(Matriz[0][2]=='o' && Matriz[1][2]=='o' && Matriz[2][2]=='o'){
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    
	    //Horizontal para O
	    else if(Matriz[0][0]=='o' && Matriz[0][1]=='o' && Matriz[0][2]=='o'){
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    else if(Matriz[1][0]=='o' && Matriz[1][1]=='o' && Matriz[1][2]=='o'){
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    else if(Matriz[2][0]=='o' && Matriz[2][1]=='o' && Matriz[2][2]=='o'){
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
	    }
	    
	    //Diagonal principal para O
	    else if(Matriz[0][0]=='o' && Matriz[1][1]=='o' && Matriz[2][2]=='o'){
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}
     	}
     	//Diagonal secundaria para O
     	else if(Matriz[0][2]=='o' && Matriz[1][1]=='o' && Matriz[2][0]=='o'){	
  	    	if(random == 1){
			  	ContadorJ2++;
  	    		printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador2,Jogador2,ContadorJ2,ContadorJ1,Jogador1);
			} else {
			  	ContadorJ1++;
			  	printf("Jogador %s é o vencedor!\n\nPLACAR\n%s %d X %d %s\n",Jogador1,Jogador1,ContadorJ1,ContadorJ2,Jogador2);	
			}
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}	
  	    }
  	    if(i==8){
  	    	printf("\nDeu velha\n");
  	    	printf("\nDeseja jogar novamente?\nSim - 1\nNão - Outro numero.\n");
  	    	scanf("%d", &x);
  	    	if(x==1){
  	    		random = rand() % 2;
  	    		printf("Random = %d",random);
  	    		if(random == 1){
		            printf("\nJogador %s está usando X!\n",Jogador1);
       	            printf("\nJogador %s está usando O!\n",Jogador2);
	            } else {
		            printf("\nJogador %s está usando X!\n",Jogador2);
       	            printf("\nJogador %s está usando O!\n",Jogador1);
	            }
  	    		
			  	i=-1;
			  	esvaziarMatriz(Matriz,rep);
			}
			if(x!=1){
				printf("\nFim De Jogo\nObrigado por jogar!!!\n");
				break;
			}	
		}
	
	printf("\n");	
	printf("   %c | %c | %c \n",Matriz[0][0],Matriz[0][1],Matriz[0][2]);
    printf("  ---|---|--- \n ");
    printf("  %c | %c | %c \n",Matriz[1][0],Matriz[1][1],Matriz[1][2]);
    printf("  ---|---|--- \n ");
    printf("  %c | %c | %c \n",Matriz[2][0],Matriz[2][1],Matriz[2][2]);
    printf("\n\n\n");
    }	
}

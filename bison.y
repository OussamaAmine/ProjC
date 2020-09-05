%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "table_symbole.c"
//#include <windows.h>
#include "quad.c"
extern FILE* yyin;/*fichier contenant le code à compiler*/
extern int line;
extern int col;
int sauvtype = 0;
//int ntemp=1;
int qcT=0;
int qcT2=0;
int qcT3=0;
char * idf_prgm;
char varr[100][255];
int j=0; 
int k;
%}
%union
{	int num;
	float flo;
	char *chaine;
	 struct{
		 int type;
		 char *val;
	 } NT;
	
}
%token PRGRM INTEGER FLOAT CHAR BOOL ENND IN 
%token IF ELSEIF ELSE FOR WHILE AND OR
%token DeuxPoints ADD SUB MUL DIV MOD
%token SUPE SUP INFE INF EGAL AFF DIFF PO PF VIR AOUV AFER COUV CFER Sautt 
%token <chaine>IDF
%token <chaine>inte
%token <chaine>reel
%token <chaine>caractere
%token <chaine>booleen

%left PO PF
%left AND
%left OR
%left SUPE SUP INFE INF EGAL DIFF
%left ADD SUB
%left MUL DIV

%type <NT>valeur
%type <NT>Expression_Arth
%start start_code
%%

start_code: PRGRM IDF  corps ENND
;

corps:  Instructions corps
		|
;

Instructions:Declaration
			|Affectation
			|Inst_If
			|boucle_while
			|boucle_for
			;


Declaration:MC_type IDF COUV valeur CFER
		{
			if(declared($2)==1)
			{
				yyerror("\n******************* double declaration *****************\n");
			}
			else 
			{
				if(!(($4.type==1)&&(atoi($4.val)>=0)))
				{
					err_taille_tab($4.type,$4.val);
				}	
				else
				{
					inserer($2,10+sauvtype,"tableau",$4.val);
					generer("BOUNDS","1",$4.val,"");
					generer("ADEC",$2,"","");
				}	
									
									
			}
		}
			
			|MC_type IDF AFF valeur
			{
				if(declared($2)==1){yyerror("\n***************** double declaration *****************\n");}
				else{inserer($2,sauvtype,"variable",$4.val);generer("=",$4.val,"",$2);}
			}
			
			|MC_type  idfs	
			;

				idfs: IDF	VIR  idfs
						{	
							if(declared($1)==1)
							{
								yyerror("\n*****************double declaration *****************\n"); 
							}
							else
							{
								inserer($1,sauvtype,"variable","0");
								printf("sauv type %d \n",sauvtype);
								/*récupérer les variables dans un tableau*/
								/*int i=0;
								j++;
								char* s=malloc(sizeof(3));
								strcpy(s,$1);					

								while(i<strlen(s))
								{
									varr[j][i]=s[i];
									i++;
								}
								varr[j][i]='\0';*/
													
							} } 
						

					  |IDF
					  {
						if(declared($1)==1)
						{
							yyerror("\n*****************double declaration *****************\n");
					 	}
					
						else
						{
							inserer($1,sauvtype,"variable","0");
							printf("sauv type %d \n",sauvtype);
							/*int i=0;
							j++;
							char* s=malloc(sizeof(3));
							strcpy(s,$1);					

							while(i<strlen(s))
							{
								varr[j][i]=s[i];
								i++;
							}
							varr[j][i]='\0';*/ 
							
							
					}	    
			}
						;

		MC_type: INTEGER {sauvtype=1;while(j>=0){modifier(varr[j],sauvtype);j--;}}
				|FLOAT {sauvtype=2;while(j>=0){modifier(varr[j],sauvtype);j--;}j=0;}
				|CHAR {sauvtype=3;while(j>=0){modifier(varr[j],sauvtype);j--;}j=0;}
				|BOOL{sauvtype=4;while(j>=0){modifier(varr[j],sauvtype);j--;}}
				;

		valeur: inte{{$$.type=1;$$.val=$1;}}
				|reel{{$$.type=2;$$.val=$1;}}
				|caractere{$$.type=3;$$.val=substring($1);	}
				|booleen{$$.type=4;$$.val=substring($1);}
				;




Affectation: IDF COUV valeur CFER AFF Expression_Arth 
			{
				if(declared($1)==0)
	    		{
	    			yyerror("\n********************* erreur semantique : tableau non declare ******************\n");
				}
	    		else
	    		{	if(!(($3.type==1)&&(atoi($3.val)>=0)))
					{
						err_taille_tab($3.type,$3.val);
					}
		    		
		    		else 											
					{	err_incompa_typ_tab(gettype($1),$6.type);
						printf("une affectation à la valeur de %s[%d] \n",$1,$3);
	    				char*s;
	    				s=strdup($1);
	    				sprintf(s, "%s[%d]",$1,atoi($3.val));
						generer("=",$6.val,"",s);
	    			}
	    		}
    		}
			|IDF AFF Expression_Arth
			{if(declared($1)==1)
	    		{
	    			err_incompa_typ_var(gettype($1),$3.type);
				}
			}	
			|IDF AFF PO PO Expression_lgiq PF VIR Expression VIR Expression PF
;

			
						








Expression: Expression_Arth
			| Expression_lgiq 
			
			;
		
			Expression_Arth: Arths  Expression_Arth_suite
							;
							Expression_Arth_suite: Signes Expression_Arth
													|
													;
							Arths:IDF Params
									|valeur
									;
							Params: COUV valeur CFER
									|
									;

							Signes: ADD
									|SUB
									|MUL
									|DIV
									;


Expression_lgiq: lgiq  Expression_lgiq_suite			
				;
				Expression_lgiq_suite:Signes_lgiq Expression_lgiq
										|
				;
				Signes_lgiq: AND
							|OR
							;
				
				
				
				lgiq: Expression_Arth Signes_comparaison Expression_Arth
					
					;


					Signes_comparaison:	SUPE
										|SUP
										|INFE
									    |INF
										|EGAL
										|DIFF
										;
Inst_If: IF PO Expression_lgiq PF
		AOUV corps AFER
		Inst_elif
		;

Inst_elif: ELSEIF PO Expression_lgiq PF
			AOUV corps AFER
			Inst_else 
			|Inst_else
;
Inst_else: ELSE AOUV corps AFER	
			|
			;

boucle_while: WHILE PO Expression_lgiq PF
				AOUV corps AFER		
				;

boucle_for: FOR PO IDF IN inte DeuxPoints inte PF
			AOUV corps AFER 
			;









%%
int yyerror(char* msg)
{printf("%s : ligne %d , colonne : %d\n",msg,line,col);
	exit(EXIT_FAILURE);
}
int main()
{
init();
yyin=fopen("test.txt","r");
if(yyparse()==0)
{		
	printf("\n\t\t***********************************\n");
	printf("\t\t********Parsing Successfull********\t\t\n");
	printf("\t\t***********************************\n");
}
else
{
	printf("faute");
}
afficher();
fclose(yyin);
return 0;

}
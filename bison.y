%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>
//#include "quad.c"
extern FILE* yyin;/*fichier contenant le code à compiler*/
extern int line;
extern int col;
int sauvtype = 0;
int ntemp=1;
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
		 int res;
		 char *id;
	 } NT;
	
}
%token PRGRM INTEGER FLOAT CHAR BOOL ENND IN 
%token IF ELSEIF ELSE FOR WHILE AND OR
%token DeuxPoints ADD SUB MUL DIV MOD
%token SUPE SUP INFE INF EGAL AFF DIFF PO PF VIR AOUV AFER COUV CFER Sautt 
%token <chaine>IDF
%token <chaine>inte
%token <chaine>ninte
%token <chaine>reel
%token <chaine>caractere
%token <chaine>booleen

%left PO PF
%left AND
%left OR
%left SUPE SUP INFE INF EGAL DIFF
%left ADD SUB
%left MUL DIV

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


Declaration:MC_type IDF Dec_types_idf
			
			;
		
		Dec_types_idf: COUV Param_tab CFER
						|	AFF valeur
						|idfs
				;

		Param_tab: inte | IDF
					;

				idfs: VIR IDF idfs
						|
						;

		MC_type: INTEGER 
				|FLOAT 
				|CHAR 
				|BOOL
				;

		valeur: inte
				|ninte
				|reel
				|caractere	
				|booleen
				;




Affectation: IDF Affectation_suite1
;

			Affectation_suite1: COUV inte CFER AFF Expression
								| AFF Affectation_suite2
								;
			Affectation_suite2: Expression
								| PO PO Expression_lgiq PF VIR Expression VIR Expression PF
								;				








Expression: Expression_Arth
			| Expression_lgiq 
			
			;
		
			Expression_Arth: Arths {printf(" ------rah hna-------- ");} Expression_Arth_suite
							;
							Expression_Arth_suite: Signes Expression_Arth
													|
													;
							Arths:IDF Params
									|valeur
									;
							Params: COUV Param_tab CFER
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
//init();
yyin=fopen("test.txt","r");
if(yyparse()==0){		
		printf("\n\t\t***********************************\n");
		printf("\t\t********Parsing Successfull********\t\t\n");
		printf("\t\t***********************************\n");
    }else{
		printf("faute");
	}
	fclose(yyin);
return 0;

}
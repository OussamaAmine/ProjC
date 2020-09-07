%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bison.tab.h"

 int col=1,line=1;
%}

chiffre [0-9]
lettreMaj [A-Z]
lettremin [a-z]
inte ("("[+-]([1-9][0-9]*|0)")")|([1-9][0-9]*|0)

numeric ("("[+-](([1-9][0-9]*|0)"\."[0-9]*[1-9])")")|(([1-9][0-9]*|0)"\."[0-9]*[1-9])
boolean "TRUE"|"FALSE"
comment \#(.)*[\n]
idf {lettreMaj}({lettremin}|{chiffre})*
chare \'.\'





%%

" " {printf(" esp ");col+=yyleng;}
 
"PROGRAM" {printf(" MC_prgrm ");col+=yyleng; yylval.chaine = strdup(yytext);return(PRGRM);}

"END" {printf(" MC_End \n");col+=yyleng; yylval.chaine = strdup(yytext);return(ENND);}

"INTEGER" {printf(" MC_Integer ");col+=yyleng; yylval.chaine = strdup(yytext);return(INTEGER);}

"NUMERIC" {printf(" MC_Numeric ");col+=yyleng; yylval.chaine = strdup(yytext);return(FLOAT);}

"CHARACTER" {printf(" MC_Character ");col+=yyleng; yylval.chaine= strdup(yytext); return (CHAR);}

"LOGICAL" {printf(" MC_Logical ");col+=yyleng; yylval.chaine= strdup(yytext); return (BOOL);}



"IF" {printf(" MC_If ");col+=yyleng; yylval.chaine= strdup(yytext); return (IF);}

"ELSE IF" {printf(" MC_ELSE_IF ");col+=yyleng; yylval.chaine= strdup(yytext); return (ELSEIF);}

"ELSE" {printf(" MC_ELSE ");col+=yyleng; yylval.chaine= strdup(yytext); return (ELSE);}

"FOR" {printf(" MC_For ");col+=yyleng; yylval.chaine= strdup(yytext); return (FOR);}

"IN" {printf(" MC_In ");col+=yyleng; yylval.chaine= strdup(yytext); return (IN);}

"WHILE" {printf(" MC_While ");col+=yyleng; yylval.chaine= strdup(yytext); return (WHILE);}

"AND" {printf(" MC_And ");col+=yyleng; yylval.chaine= strdup(yytext); return (AND);}

"OR"  {printf(" MC_Or ");col+=yyleng; yylval.chaine= strdup(yytext); return (OR);}

[:] {printf(" DeuxPoints ");col+=yyleng; yylval.chaine= strdup(yytext); return(DeuxPoints);}

"+" {printf(" ADD ");col+=yyleng; yylval.chaine = strdup(yytext); return(ADD);}

"-" {printf(" SUB ");col+=yyleng; yylval.chaine = strdup(yytext); return(SUB);}

"*" {printf(" MUL ");col+=yyleng; yylval.chaine = strdup(yytext); return(MUL);}

"/" {printf(" DIV ");col+=yyleng; yylval.chaine = strdup(yytext); return(DIV);}

"%" {printf(" MOD ");col+=yyleng; yylval.chaine = strdup(yytext); return(MOD);}

">=" {printf(" SUPE ");col+=yyleng; yylval.chaine = strdup(yytext); return (SUPE);}

">" {printf(" SUP ");col+=yyleng; yylval.chaine = strdup(yytext); return (SUP);}

"<=" {printf(" INFE ");col+=yyleng; yylval.chaine = strdup(yytext); return (INFE);}

"<" {printf(" INF ");col+=yyleng; yylval.chaine = strdup(yytext); return (INF);}

"=" {printf(" EGAL ");col+=yyleng; yylval.chaine = strdup(yytext); return (EGAL);}

"<-" { printf(" AFFECT ");col+=yyleng; yylval.chaine = strdup(yytext); return (AFF);}

"!=" {printf(" DIFF ");col+=yyleng; yylval.chaine = strdup(yytext); return (DIFF);}

"(" {printf(" PAROUV ");col+=yyleng; yylval.chaine = strdup(yytext); return (PO);}

")" {printf(" PARFER "); col+=yyleng; yylval.chaine = strdup(yytext); return (PF);}

[\,] {printf(" VIRGULE ");col+=yyleng; yylval.chaine = strdup(yytext); return (VIR);}

"{" {printf(" AOUV ");col+=yyleng; yylval.chaine = strdup(yytext); return (AOUV); }

"}" {printf(" AFER ");col+=yyleng; yylval.chaine = strdup(yytext); return (AFER);}

"[" {printf(" COUV ");col+=yyleng; yylval.chaine = strdup(yytext); return (COUV); }

"]" {printf(" CFER ");col+=yyleng; yylval.chaine = strdup(yytext); return (CFER);}

[\n] {printf("\n SAUTER\n"); col=1; line+=yyleng; /*return(Sautt);*/}

[\t] {col+=yyleng;}

{boolean} {printf("    Boolean   ");printf("%s",yytext);col+=yyleng; yylval.chaine = strdup(yytext); return(booleen);}

{inte} {
    char* s=yytext;
    if(s[0]=='(')
    {   int i=0,j=1; char* ch[strlen(yytext)-2];
        for(i=0;i<strlen(s)-1;i++){
             ch[i]=&s[j];
             j++;
        }
        printf("%d",atoi(*ch));
        if(atoi(*ch)>=-32768){printf("  entier negatif \n ");col+=yyleng; yylval.chaine = strdup(*ch); }
        else{printf("erreur lexicale cet entier est inferieur a -32767 \n ");exit(0);}
    }
    else{
    
        printf("%d",atoi(yytext));
        if(atoi(yytext)<=32767){printf("  entier positif  \n ");col+=yyleng; yylval.chaine = strdup(yytext); }
        else{printf(" erreur lexicale cet entier est supperieur a 32767 \n ");exit(0);}
    }
    return(inte);
}


{numeric} {printf(" Reel_float ");col+=yyleng; yylval.chaine = strdup(yytext);return(reel);}

{chare} {printf(" Caracter ");col+=yyleng; yylval.chaine = strdup(yytext); return(caractere);}

{comment} {printf("  Commentaire \n");col+=yyleng; line+=1; yylval.chaine = strdup(yytext);}



{idf} { if(yyleng>10){printf("erreur lexicale:idf trop long ligne %d colonne %d \n",line,col);exit(0);} else{ printf(" IDF  "); col+=yyleng; yylval.chaine = strdup(yytext); return(IDF);}}


. {printf ("\n erreur lexicale entite %s ligne %d colonne %d \n",yytext,line,col);col+=yyleng;exit(0);}

%%
int yywrap () {return 1;}
